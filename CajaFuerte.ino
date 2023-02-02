
//Libreria
#include <Servo.h>
#include <Adafruit_LiquidCrystal.h>
#include <Keypad.h>
#include "DHT.h" 

//Configuracion del sensor de temperatura
#define PinSensor A0   // Pin digital al que se conecta el sensor
#define Tipo DHT11    // Tipo de sensor
DHT dht(PinSensor, Tipo);

//Configuracion de los pines del lcd
Adafruit_LiquidCrystal lcd_1(0);

//Configuracion del tecaldo
const byte ROWS = 4;
const byte COLS = 4;
char keys [ROWS][COLS]={
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {A5,A4,A3,A2}; //Filas
byte colPins[COLS] = {13,10,9,8}; //Columnas

Keypad teclado = Keypad(makeKeymap(keys),rowPins,colPins,ROWS,COLS);

//Configuracion de los pines de los leds y el buzzer
int ledAzul=5;
int ledRojo=6;
int ledVerde=7;
int buzzer=A1;

//Vector que almacena la CONTRASEÑA
char pass[5] = {'1','1','1','1','1'};

//Configuracion de la clave, el numero de caracteres que contiene
// y que son contenidos en el vector
char clave[5];

//Configuracion del servomotor
Servo servo;

//Indice usado para recorrer el arreglo
byte ind = 0;

void setup() {
  Serial.begin(9600);
  servo.attach(3);
  lcd_1.begin(16, 2);
  lcd_1.print("Inserte codigo: ");
  lcd_1.setCursor(0,1);
  lcd_1.setBacklight(1);
  pinMode(ledAzul,OUTPUT);
  pinMode(ledRojo,OUTPUT);
  pinMode(ledVerde,OUTPUT);
  pinMode(buzzer,OUTPUT);
  dht.begin();
}

void loop(){
  float humedad = dht.readHumidity();
  float temperatura = dht.readTemperature();

  Serial.print("Humedad: ");
  Serial.println(humedad);
  Serial.print("Temperatura: ");
  Serial.println(temperatura);

  char key = teclado.getKey();
  //temperatura = map(analogRead(sensor),0,1023,-40,125);
  
  //Siempre que se pulse se agrega al vector clave
  if(key && ind<5){
    lcd_1.print('*');
    clave[ind]=key;
    ind+=1;
  }
  
  if(ind==5){
    byte check = 0;
    for(int i=0;i<5;i++){
      if(pass[i]==clave[i]){
        check+=1;
      }
  	}
    
    if(check == 5){
      lcd_1.clear();
      lcd_1.print("Bienvenido XXXXX");
      digitalWrite(ledVerde,HIGH);
      servo.write(0);
      delay(500);
      //Boveda abierta 5 min
      for (int i=0;i<=5;i++){
        digitalWrite(ledAzul,HIGH);
        tone(buzzer,50);
        delay(500);
        digitalWrite(ledAzul,LOW);
        noTone(buzzer);
        delay(500);        
      }
      servo.write(90);
      delay(500);
      digitalWrite(ledVerde,LOW);
      ind=0;
      lcd_1.begin(16, 2);
      lcd_1.clear();
      lcd_1.print("Inserte codigo: ");
      lcd_1.setCursor(0,1);
      
    }else{
      lcd_1.clear();
      lcd_1.print("Intruso");
      //Sonido del buzzer (Tonalidad)
      digitalWrite(ledRojo,HIGH);
      tone(buzzer,100);
      delay(3000);
      noTone(buzzer);
      digitalWrite(ledRojo,LOW);
      ind=0;
      lcd_1.begin(16, 2);
      lcd_1.clear();
      lcd_1.print("Inserte codigo: ");
      lcd_1.setCursor(0,1);
    }
  }
}

