# Fundamentos de Biodiseño - equipo 6
Bienvenidos al repositorio del equipo 6 encargado en investigar la línea de Ingeniería Clínica.
#### Nosotros somos:

1. Nikol Corayma Romero Quispe *(Coordinadora de Prototipado e Impresión 3D)*
<img src="https://github.com/Andrsxd/Fundamentos-de-Biodisenho/blob/main/Im%C3%A1genes/Nikol.jpeg" width='250' height='250'/>

2. Xiomara Antuanett Apaza Hurtado *(Coodinadora de Diseño)*
<img src="https://github.com/Andrsxd/Fundamentos-de-Biodisenho/blob/main/Im%C3%A1genes/Xiomara.jpeg" width='250' height='250'/>

3. Andrés Nicolas Landeo Cruzado *(Coordinador de Programación)*
<img src="https://github.com/Andrsxd/Fundamentos-de-Biodisenho/blob/main/Im%C3%A1genes/Andres.jpg" width='250' height='250'/>

4. Aniball Harnaldo Panta Navarro *(Coordinador de Electrónica)*
<img src="https://github.com/Andrsxd/Fundamentos-de-Biodisenho/blob/main/Im%C3%A1genes/Aniball.jpeg" width='250' height='250'/>

5. Ismael Edmundo Navarro Sanchez *(Coordinador de Prototipado)*
<img src="https://github.com/Andrsxd/Fundamentos-de-Biodisenho/blob/main/Im%C3%A1genes/Ismael.jpeg" width='250' height='250'/>

La temática tratada es sobre _*Open Hardware para la salud y los laboratorios*_.

# Problemática 
<p>La incubadora de laboratorio es una herramienta vital que se utiliza para cultivar y  mantener cultivos microbiológicos o cultivos celulares. La incubadora mantiene una temperatura y humedad óptima, garantizando también otras condiciones tales como el dióxido de carbono (CO2) y el oxígeno (O2) presente en el interior para asi poder realizar los análisis correspondientes.</p> <p>Las incubadoras de laboratorio se usan en las aplicaciones de biología (cultivos celulares y de tejidos), estudios farmacéuticos y hematológicos, para estudios bioquímicos, estudios animales, estudios de solubilidad y de fermentación como también para cultivos de bacterias. El equipo proporciona un entorno controlado y libre de contaminantes para un trabajo seguro y fiable con los cultivos, este utiliza un sistema avanzado de alta tecnología para realizar el proceso de incubación, por lo que debe ser capaz de controlar la humedad y la luz, pues hay ciertos tipos de cultivos que necesitan una temperatura y luz precisa.</p> <p>Estos equipos son utilizados con fines en el desarrollo de curas y también en la identificación de agentes patógenos, por lo cual, es importante regular los factores fundamentales para mantener y crecer los cultivos celulares o microbiológicos.
En la actualidad el monitoreo de calidad se ha transformado en una disyuntiva, debido a esto se busca lograr un tipo de incubación estable y fiable para los distintos cultivos para así asegurar los resultados.
</p>

# Instrumento de medición
<p>Al momento de realizar un cultivo dentro de estos dispositivos, siempre se regulan ciertos parámetros dentro de la cámara, entre ellos se consideran la temperatura; concentración de dióxido de carbono (CO2) y/o concentración de oxígeno (O2).</p>
Los parámetros mencionados son llamados comúnmente como propiedades fisicoquímicas:

+ **Temperatura**: Mayormente es preferente tenerle en un valor fijo como 37 °C, aunque también se puede oscilar en rangos     de +/- 0,5 °C para tener tasas de crecimientos óptimas, tomando en cuenta la caracterización del huésped.

+ **Dióxido de carbono (CO2)**: Este es capaz de ser medio en partículas por millón (ppm) o porcentaje (%). Usualmente se     trabaja con un rango de 2 a 10% de CO2 pero se aconseja estar entre 5 a 6%.
  
+ **Oxígeno (O2)**:  Para lograr trabajar con oxígeno en concentraciones bajas, es decir menos de 21 %, dentro de la cámara   de la incubadora se utiliza nitrógeno gaseoso al 100 % y para trabajar con cultivos que requieren más del 21% de oxígeno    se utiliza oxígeno gaseoso al 100%.
  
<p>Estas propiedades fisicoquímicas son las que actúan como terceros para variar otros aspectos dependientes que el cultivo necesita para su desarrollo óptimo. Por ejemplo, el pH y la osmolaridad dependen parcialmente de la concentración de CO2 para mantener la estabilidad.</p>

# Función de las partes de la incubadora

Las diferentes incubadoras que existen en el mercado pueden variar dependiendo de los distintas características extras que le agreguen, pero fundamentalmente están comprendidas por los siguientes componentes:

+ **Cámara de alta resolución**:Para poder monitorear los cambios que presente la muestra que está introducida en la incubadora.

+ **Cámara de incubación** : En esta parte es donde se colocan las muestras a analizar, aquí se realiza el mantenimiento de la temperatura y húmedad con el fin de lograr el crecimiento requerido de cada muestra.

+ **Sistema de calentamiento** : Compuesto por el termostato y control de temperatura que son fundamentales para generar calor y mantener la temperatura para que se logre el crecimiento, esto se logra con la ayuda de resistencias eléctricas.

+ **Sensor de temperatura** : Encargado de medir la temperatura dentro de la cámara y envía las señal hacia la cámara de incubación.

+ **Sistema de control de temperatura** : Regulación de la temperatura de modo que se ajusta la energía al sistema de calefacción.

+ **Sistema de control de humedad** : Controla los niveles de humedad relativa en la cámara.

+ **Sensor de humedad** : Se mide la humedad relativa dentro de la cámara para posteriormente enviar la información hacia el sistema de control de humedad. Se trabaja mediante rangos.

+ **Sistema de circulación de aire** : Es capaz de nivelar la proporción entre aire caliente y húmedo con el fin de que las muestras estén bajo condiciones adecuadas.

+ **Luz Interior** : Es la luz que se encuentra dentro de la cámara para obtener una mejor visión.

+ **Puerta de vidrio** : Algunos están compuestos por este material en la puerta para mejorar la visión de las muestras.

+ **Puerta de acceso** : Acceso al interior de la cámara para poner y retirar las muestras.

+ **Controlador digital** : Pantalla en la cual se puede ajustar los parámetros antes mencionados como temperatura, humedad y hasta tiempo.
  
+ **Alarma**: Presentes en algunos equipos ya que emite una alerta en caso de un desnivel en algunos de los parámetros que se estableció.


# Estado del Arte
## Contexto comercial
### -Equipos de mercado:
<p>Para el estudio de equipos del mercado hemos considerado 3 tipos de incubadoras.</p>

| Equipo | Descripción | Imagen |
| ------- | ----------- | ------ |
| Incubadora de laboratorio de CO2 | Utilizado en laboratorios microbiológicos por su versatilidad. Posee un control de temperatura, de la cantidad de CO2 y la humedad relativa. Puede cultivar microorganismos más comunes que pueden vivir a 37 °C con 5% de CO2 y con una humedad relativa de 85-90%. Los campos en donde se utiliza son: ingeniería de tejidos, fertilización in vitro, investigación del cáncer, células madres, medicina regenerativa e investigación de células de mamíferos.  Precio mercado: S/ 17 000 (Incubadora CO2 de laboratorio de 50 L) | ![](https://img.medicalexpo.es/images_me/photo-m2/84845-15397734.jpg) |
| Incubadoras de laboratorio de agitación | Se utilizan para el cultivo de células, aireación de células y estudios de solubilidad. Permiten mantener una temperatura constante, lo cual evita la revisión continua de este parámetro. Además, controlan la velocidad de agitación para acelerar el crecimiento celular aumentando la productividad y acortando el tiempo de estimulación. <p>Precio mercado: S/ 10 467.65 (Incubadora con agitación, INC-S: CTSI-050-001 de 50L)</p> | ![](https://www.cromtek.cl/wp-content/uploads/2019/04/shakers-Incubadores-495x400.jpg) |
| Incubadoras de laboratorio de convección forzada | Posee un rango amplio de temperatura y es ideal para los cultivos de ambientes fríos. A través de un ventilador permite que el aire circule por toda la cámara de forma constante e impide la variación de temperatura no deseada. Precio mercado: S/ 49 138 807.29 (Incubadora de convección forzada Single Display 53-108L) | ![](https://equipar.com.mx/wp-content/uploads/2020/04/MEMMERT-INCUBADORAS.png) |


### -Patentes de utilidad o invención:

| Nombre_de_la_patente (código-de-la-patente) - País - Creador | Descripción | Imagen |
| ------- | ----------- | ------ |
| Constant-temperature biochemical incubator for laboratory(CN214400452U)- China - YANG YUAN; BI WEN | Modelo de utilidad describe una incubadora bioquímica de temperatura constante para un laboratorio la cual no necesita ser abierta, ya que la mesa giratoria puede girar el vaso ubicado en la parte posterior hacia el frente para facilitar la observación del usuario, de modo que se evita que la temperatura en el cuerpo de la incubadora bioquímica se vea influenciada y sea normal. | ![image](https://github.com/Andrsxd/Fundamentos-de-Biodisenho/assets/143019238/a617418a-51f4-4598-a253-0db17eecf04f) |
| Illumination incubator suitable for laboratory(CN104130935A)- China -DING LIQING | La invención describe una incubadora de iluminación adecuada para un laboratorio. Esta comprende un cuerpo de incubadora, una fuente de luz de cultivo, un panel de control y un detector de intensidad de luz, en donde el cuerpo de incubadora comprende un marco metálico y una membrana selladora que se distribuye alrededor del marco metálico para formar un espacio sellado; la fuente de luz de cultivo está instalada en la parte superior del cuerpo de la incubadora y comprende una pluralidad de LED. | *No hay imagen* |
| Laboratory incubator(CN213012902U) - China - TANG PEIYUAN; ZHANG HAIJUN; LI XINXIN; MU YANYAN | El modelo de utilidad proporciona una incubadora de laboratorio, la parte inferior de la incubadora está abierta y provista de un círculo de tira de sujeción de sellado, el marco de la incubadora se compone de placas verticales, una base y una placa de instalación.Las placas se instalan simétricamente en la base, se forman ranuras abiertas en los lados internos de las placas verticales, las varillas de resorte se disponen en las ranuras abiertas. además se forma un círculo de ranura en la base, la tira de sujeción de sellado se sujeta en la ranura, al menos tres ruedas universales están además incrustadas en la parte inferior de la base, de modo que sea conveniente mover todo el dispositivo de cultivo de manera integral, haciendo que las varillas de resorte esten dispuestas para comprimir la placa de montaje, de modo que el dispositivo de cultivo no pueda agitar de forma independiente. El dispositivo tiene los efectos beneficiosos de que la caja de cultivo está separada del marco de cultivo, se puede realizar un cultivo personalizado a través de marcos de cultivo con diferentes estructuras, no es necesario reemplazar la caja de cultivo y se ahorra el costo de los experimentos de cultivo. | ![image](https://github.com/Andrsxd/Fundamentos-de-Biodisenho/assets/143019238/219d6e0c-ab6e-469d-bf3c-8df668610396) |

# Lista de requirimientos

## Estrategias

- Visualizar los cambios aparentes dentro de una incubadora a través de una cámara y sensores.

- Optimizar la visualización y la interacción de la muestra dentro de una incubadora para evitar sacarla.
  
- Controlar y manipular los parámetros de temperatura a distancia a través de un dispositivo móvil.

- Disminuir la variación de temperatura que puede sufrir la muestra para no alterar su comportamiento dentro de una incubadora.

- Optimizar la visualización de la muestra dentro de una incubadora para evitar sacarla.


### Conceptos

- Un case (sistema) de vigilancia de imágenes a tiempo real para ver los cambios cualitativos de las muestras dentro de la incubadora sin necesidad de abrir o si quiera estar cerca.

- Una plataforma en donde se subirán todos los datos obtenidos por la imagen en tiempo real de la muestra.

- Un sistema de monitoreo de temperatura a través de sensores dentro de la incubadora y que estos datos se ingresen a una plataforma en donde podamos observar en tiempo real.

- Un regulador de parámetros de temperatura en los cuales podamos controlar y operar su variación de temperatura a distancia.


## Módulos
 1. Módulo de aislamiento: En este módulo, estará presente la incubadora que tendrá que ser herméticamente cerrada para que no se filtre ningún tipo de calor y presente una variación de temperatura. 

 2. Módulo de visualización de muestra: En este módulo, estará presente la cámara que captará las imágenes en tiempo real de la muestra dentro de la incubadora.

 3. Módulo de transmisión de datos: En este módulo, estará presente lo esencial para poder transmitir las imágenes en tiempo real a una plataforma.

 4. Módulo de visualización de las imágenes: En este módulo, estará presente la plataforma en donde quedarán almacenadas las imágenes para que el usuario pueda verlas en tiempo real.

 5. Módulo de sensor de temperatura:En este módulo, estará el sensor de temperatura para monitorear los parámetros dentro de la incubadora.

 6. Módulo de sensor de presión: En este módulo, estará el sensor de presión para controlar los parámetros dentro de la incubadora.

## Componentes

  + Módulo 1: Incubadora
    
  + Módulo 2: Cámara de alta resolución
    
  + Módulo 3: Sistema de Bluetooth o señal para transmisión de datos
    
  + Módulo 4: Dispositivo con llegada de datos de imágenes

  + Módulo 5: sensor de temperatura

  + Módulo 6: sensor de presión de oxígeno

## Características 

| Funcionales | No funcionales |
| ------- | ----------- |
| Monitorear en tiempo real la muestra dentro de la incubadora.  | No ser invasivo (ruido) |
| Monitorear remotamente los cambios que pueda presentar el cultivo | Ser fácil de maniobrar y sencillo de usar (cámara y plataforma).  |
| Visualizar el comportamiento de la muestra a distancia y tiempo real. | Ser hermético. |
| Almacenar las imágenes emitidas por la cámara a una nube. | No alterar el comportamiento de la muestra. |

# Propuesta de solución
## Un sistema de vigilancia que sea capaz de transmitir en tiempo real y a distancia las imágenes del cultivo dentro de la incubadora, sin afectar al comportamiento de la muestra/cultivo.


# Caja negra

![Caja negra](https://github.com/Andrsxd/Fundamentos-de-Biodisenho/assets/143019238/a3f1cd7a-4319-44fe-9b9d-85c0e78e7e36)

## Definición de...
### Entradas
+ Energía: Fuente de alimentación
+ Señales: Parámetros iniciales y comandos del aplicativo
+ Muestra: Muestra en su etapa previa al cultivo

### Salidas
+ Información recogida: La información procesada
+ Imágenes: Las imágenes transmitidas por la cámara
+ Muestra cultiva: Muestra muy desarrollada
  

# Esquema de funciones

![image](https://github.com/Andrsxd/Fundamentos-de-Biodisenho/assets/143019031/8354bec2-ae96-40bc-8cbe-a172812fdfdc)


- Regular: Regula la energía ingresada para luego distruibuirla en los demás componentes.
- Sensar: Recibe la temperatura y presión que están presentes en la cámara.
- Dosificar: Regula la cantidad de CO2 que ingresa a la cámara.
- Hermetizar: Aisla el cultivo/muestra.
- Procesar: Procesa la información de los parámetros iniciales y la información recibida por los sensores; y recibe las imágenes de la cámara.
- Guardar: Almacena la información.
- Mostrar: Muestra una alarma cuando la información procesada está fuera de los parámetros iniciales; y las imágen de salida.


# Matriz morfológica

# Tabla de valoración

# Bibliografía
1. https://materialesdelaboratoriohoy.us/metal/incubadora-de-laboratorio/ 
2. https://www.calameo.com/read/00646313042a0b3f65598
3. http://repositorio2.udelas.ac.pa/bitstream/handle/123456789/257/deiethmariana.pdf?sequence=1&isAllowed=y
4. http://38.43.142.130/handle/20.500.12672/182
5. https://intekgroup.com.co/tipos-de-incubadoras-de-laboratorio/
6. https://articulo.mercadolibre.com.pe/MPE-651210394-incubadora-co2-de-laboratorio-de-50-l-_JM#position=1&search_layout=stack&type=item&tracking_id=a18b7bdb-a5b7-43a1-a7f4-4b25998fd8de
7. https://esp.labbox.com/producto/incubadora-con-agitacion-lbx-s50l/
8. https://blamis.com.co/incubadora-de-conveccion-forzada-single-display
