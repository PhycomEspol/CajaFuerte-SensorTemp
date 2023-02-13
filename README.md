# CajaFuerte-SensorTemp
Integrantes del GRUPO 1:
 - Kenyi Triviño
 - Jose Baidal
 - Jordan Aguilar
 - Allison Palma
 - Eduardo Sanchez
# Definición
La función del proyecto es resguardar las pertenencias que posea el usuario dentro de una caja de seguridad o caja fuerte, agregando a este sensores y dispositivos ajenos para brindar más información del estado de esta, de modo que de fallar la seguridad o ser forzada se activará los componentes asociados a esta accionando alarmas para indicarle al usuario o a las autoridades si hay una infracción o violacion de seguridad en la caja fuerte.
Además, de notificar y alertar al usuario sobre las infracciones cometidas en su caja fuerte se buscará mejorar el sistema de seguridad de esta misma, agregando así validaciones sobre su clave permitiendo que posea un mayor resguardo. Incluso tendrá un sensor que permitirá saber si alguien del exterior intenta forzar la caja, mediante la implementación de un termómetro.

# Etapas
- Simulación y programacion  del prototipo en Tinkercad
- Prototipo Físico
- Programar el arduino

# Tabla componentes y precio
![image](https://user-images.githubusercontent.com/119824390/217289670-cee70cc8-9b91-4616-b23f-ea26546dfc32.png)

# Recursos usados
- Tinkercad: Se lo utilizo para crear la simulacion de la caja  fuerte y desarrollar su programa.
- Arduino: Plataforma electronica en donde se carga el programa del proyecto.
- Protoboard: Placa en la que se realiza las conecciones de los componentes electronicos.

# Secciones del proyecto
- La simulación virtual se lo realiza en el tinkercad, en el cual se coloca la placa del protoboard y se realiza las respectiva conección con sus distintos componentes. Se usa el tinkercad para evitar quemar los componentes y verificar su funcionalidad. Además, se realiza el código del de programa. El lenguaje que se usa para programar en el arduino es C++. En la cual se define las funciones que realizará el programa. el tiempo de que la caja se abre y la implementación del lector de temperatura.
- En la parte física, la caja fuerte implementa el arduino Uno y el protoboard, el cual se conecta con los distintos componentes electronicos en el protoboard, se une con el arduino programado para poder testear el programa en físico. Una vez cargado el programa, se prueba el programa.La caja fuerte funciona con sensores y una alarma, los cuales se activarán por los sensores que funcionan con 3 LEDs (verde, rojo, y azul). El Led Verde solo se   prende cuando el codigo es correcto, el led Azul solo se enciende cuando la caja fuerte esta abierta por un periodo de tiempo y el led Rojo solo se enciende cuando la caja fuerte sea forzada o se  coloque una clave incorrecta. El LCD mostrara los correspondientes mensajes, en el caso de que la caja sea abirta el mensaje será 'Abierto', o en el caso de un ingreso incorrecto de la clave o que la caja fuerte sea forzada esta mostrará 'Intruso'. El buzzer sonará cuando la caja fuerte se encuentre abierta o sea forzada.Si solo esta abierta este sonará paulatinamente, en el caso que sea forzada se mantendra sonando en un tiempo infinito. El servomotor solo se activara si la clave es correcta.

# Procedimiento de la implementación y ejecución
  # Parte virtual
  - Realizar la simulacion virtual en tinkercad, conectando los distintos componentes electronicos en el protoboard.
  - Programar el arduino de tinkercad con el lenguaje c++.
  - Probar si todo trabaja correctamente.
  # Parte Física
  - Tener todo los componentes electronicos.
  - Colocar todos los componentes electronicos en el protoboard y observar que estos no tengan un voltaje superior a 5.
  - Programar el arduino Uno y conectarlo al protoboard.
  - Realizar una prueba que todos los sensores, led y la pantalla LCD funcione correctamente.
  - Simular una prueba en físico.
  
# Mejoras y Posibles 
![image](https://user-images.githubusercontent.com/119824390/217290559-2c8b07df-6729-4034-bd74-52d80ea63014.png)
# Anexo
 # Simulacion en Tinkercad
 ![image](https://user-images.githubusercontent.com/119824390/218364924-660a2c22-29a0-4e39-90bc-3c3172fdfee2.png)
















