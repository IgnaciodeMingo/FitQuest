Proyecto "FitQuest"
Alumnos: de Mingo Ignacio, Elías Joaquín.
Año: 2023
Curso: 6to3ra.

Idea del proyecto: un "juego" el cual se trata de 5 botones (sensores capacitivos) vinculados cada uno a un led cuando el led se prende
tienen que tocar ese botón y el juego continúa, si pasan 5 segundos sin tocar el botón al presionarlo se prenden y apagan los 5 led
lo que indica que perdiste el juego y hay que reiniciar.

Inicio: en un inicio usamos una protoboard, arduino, botones y leds para armar el juego y con éste código (editado para botones envés de sensores) funcionaba
de lo más bien.

Problemas: Al cambiar los botones por sensores capacitivos y el arduino por ESP32, descubrimos que los sensores capacitivos son muy inestables, ya que
sin necesidad de estar tocando el botón devolvía números extraños constantemente
Para comprobar su funcionamiento soldamos los 5 botones a un cable Ethernet CAT5E alejando los botones entre sí
El botón principal donde está alojado el ESP32 funcionaba bastante bien
Los 2 primeros botones a los costados del botón principal tenian fallas pero relativamente daban señal de vida.
Los 2 botones de las esquinas directamente no funcionaban.
Para comprobarlo hicimos la siguiente ruta: "Arduino" "Files" "Examples" "ESP32" "Touch" "TouchRead" y colocabamos el número de cada botón.

Información relevante:
Los "botones" son sensores capacitivos que imprimimos en el Espacio Digital y la parte metálica hicimos un molde y lo mandamos al taller de fundición.
El archivo OIP.jpg es una imágen que usamos de referencia para saber los pines del ESP32.
En la linea 2, "ButtonPins" utilizó valores de GPIO en lugar de Touch ya que consideramos que no cambiaba nada, ya que al hacer pruebas era lo mismo.

