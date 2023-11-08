# Fundamentos de Biodiseño - equipo 6
Bienvenidos al repositorio del equipo 6 encargado en investigar la línea de Ingeniería Clínica.
#### Nosotros somos:

| Nikol Corayma Romero Quispe *(Coordinadora de Prototipado e Impresión 3D)* | Xiomara Antuanett Apaza Hurtado *(Coodinadora de Diseño)* | Andrés Nicolas Landeo Cruzado *(Coordinador General y de Programación)* |
| ------------- | -------------- | ---------- |
| <img src="https://github.com/Andrsxd/Fundamentos-de-Biodisenho/blob/main/Im%C3%A1genes/Nikol.jpeg" width='250' height='300'/> | <img src="https://github.com/Andrsxd/Fundamentos-de-Biodisenho/blob/main/Im%C3%A1genes/Xiomara.jpeg" width='250' height='300'/> | <img src="https://github.com/Andrsxd/Fundamentos-de-Biodisenho/blob/main/Im%C3%A1genes/Andres.jpg" width='250' height='300'/> |

| Aniball Harnaldo Panta Navarro *(Coordinador de Electrónica)* | Ismael Edmundo Navarro Sanchez *(Coordinador de Prototipado)* |
| ------- | -------- |
| <img src="https://github.com/Andrsxd/Fundamentos-de-Biodisenho/blob/main/Im%C3%A1genes/Aniball.jpeg" width='250' height='300'/> | <img src="https://github.com/Andrsxd/Fundamentos-de-Biodisenho/blob/main/Im%C3%A1genes/Ismael.jpeg" width='250' height='250'/> |

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

### -Equipos Openhardware:

| Equipo | Descripción | Imagen |
| ------- | ----------- | ------ |
|Incubadora para microbiología y tejidos vegetales | Esta incubadora cuenta con características especiales tales como,una temperatura controlada, condiciones de oscuridad, es decir, una baja iluminación continua debido a que los hongos y algunas bacterias se incuban típicamente en la oscuridad, estos necesitan de 8 a más horas en presencia de luz continua; y finalmente una agitación de las muestras al implementar un sistema de control automático.<p>Los parámetros de contratación que presenta este equipo son los siguientes: <p> - Agitación: 0 - 125 RPM <p> - Temperatura 60°C máximo <p> - Luminosidad  (crecimiento microbiano y tejidos vegetales)|--|
|Incubadora para laboratorio para estudios de bacterias y microalgas | Este equipo de incubadora propone diseñar una  estructura de contención y soporte de la incubadora que pueda contener hasta 12 muestras de laboratorio, un sistema de control de temperatura de la cámara de incubación y un sistema de agitación para muestras, también, propone dimensionar el sistema de calentamiento y flujo de aire para el ambiente interior del equipo.<p>Los parámetros de este modelo son los siguientes: <p> -Rango de operación de temperatura: 25 - 50 °C <p> -Agitación sobre las muestras: motor a pasos <p> -Estructura aislante: Lana de vidrio <p> -Sensor de temperatura: LM 35 y PT 100 |--|
|Incubadora para cultivos de microorganismos | Este modelo presenta como fuente de energía una resistencia que es la culpable de proporcionar el calor que se debe transmitir a la cámara de incubación, se implementó esta resistencia con un disco para corte de materiales, resistencia de espiral y tornillería. También, contiene un Controlador 58008,  un controlador de temperatura el cual programa su lectura a través de la plataforma Arduino, un sensor de temperatura Termocupla Tipo J, sensor con un rango máximo de 450°C que mide la temperatura, un sensor de Humedad del modelo DHT11, capaz de medir la humedad presente y permitir su lectura, un sensor de CO2 MHZ14A, sensor infrarrojo no dispersivo (NDIR) para detectar la cantidad de CO2 dentro de la cámara de incubación, un sensor de nivel de agua capaz de medir la cantidad de agua presente en el reservorio para producir la humedad.|--|
|Monitoreo de niveles de CO2 y control del flujo de aire usando Wio Terminal|<p>Este modelo comprende los siguientes componentes: <p> -Terminal Seeed Studio Wio <p> -Seeed Stdio Grove - Relevo <p> -Seeed Studio Grove - Sensor de CO2, temperatura y humedad-SCD41 <p> -Ventilador genérico alimentado por USB <p> -Cables de puente genéricos <p> -Conexión USB micro-B genérico <p> -Adaptador USB A herman a Micro B Macho <p>Cabe resaltar que el CO2 está en ppm. Además, este dispositivo también puede recopilar datos de sensores ambientales y guardarlos usando el módulo de tarjeta SD, el cual se puede utilizar para analizar los parámetros de CO2,también, se puede conectar a los servicios en la nube mediante el módulo WIfi incorporado.|--|

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

 2. Módulo de visualización de muestra: En este módulo, estará presente la cámara que captará las imágenes de la muestra en la incubadora.

 3. Módulo de transmisión de datos: En este módulo, estará presente el procesador o placa base para poder enviar los parámetros medidos dentro del sistema.

 4. Módulo de visualización de las imágenes: En este módulo, estará presente la plataforma en donde se transmitirán las imágenes para que el usuario pueda verlas a tiempo real.

 5. Módulo de sensor de temperatura y humedad: En este módulo, estará el sensor de temperatura y humedad para monitorear los parámetros dentro de la incubadora.


## Componentes

  + Módulo 1: Incubadora
    
  + Módulo 2: Cámara de alta resolución
    
  + Módulo 3: Sistema de Bluetooth o señal para recepción de datos
    
  + Módulo 4: Plataforma para la transmisión de imágenes

  + Módulo 5: sensor de temperatura y humedad

## Características 

| Funcionales | No funcionales |
| ------- | ----------- |
| Monitorear en tiempo real la muestra dentro de la incubadora.  | No ser invasivo (ruido) |
| Monitorear remotamente los cambios que pueda presentar el cultivo | Ser fácil de maniobrar y sencillo de usar (cámara y plataforma).  |
| Visualizar el comportamiento de la muestra a distancia y tiempo real. | Ser hermético. |
| Almacenar las mágenes emitidas por la cámara a una nube. | No alterar el comportamiento de la muestra. |

# Propuesta de solución
### Un sistema de vigilancia que sea capaz de transmitir en tiempo real y a distancia las imágenes del cultivo dentro de la incubadora, sin afectar al comportamiento de la muestra/cultivo.


# Caja negra

![Caja negra](https://github.com/Andrsxd/Fundamentos-de-Biodisenho/blob/main/Im%C3%A1genes/Caja%20negra.png)

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

![Esquema de funciones](https://github.com/Andrsxd/Fundamentos-de-Biodisenho/blob/main/Im%C3%A1genes/Esquema%20de%20funciones.png)


- Regular: Regula la energía ingresada para luego distruibuirla en los demás componentes.
- Sensar: Recibe los parámetros de la temperatura y humedad que están presentes en la cámara de la incubadora.
- Hermetizar: Hospeda al cultivo/muestra.
- Procesar: Procesa la información de los parámetros iniciales y la información recibida por los sensores; y recibe las imágenes de la cámara.
- Grabar: Captura tomas de la muestra desde una cámara de video. 
- Visualizar: Presenta los datos obtenidos de la información monitoreada y de las imágenes de la cámara.
- Transmitir: A través de un servidor, se recepciona el video captaod a tiempo real.
- Climatizar: Suministra la temperatura necesaria por medio de fuentes de ventilación y de calor.
- Alumbrar: Suministra luz al momento de grabar la muestra


# Matriz morfológica

![image](https://github.com/Andrsxd/Fundamentos-de-Biodisenho/assets/143019238/a8c5e16a-f412-4c29-9ec5-cca60c21748d) 

# Tabla de valoración

<img width="412" alt="image" src="https://github.com/Andrsxd/Fundamentos-de-Biodisenho/assets/143019238/0f171eb6-e631-4a75-9f05-ee26fc715e13">

## Conclusión

### La propuesta número 5 fue la ganadora por su facilidad de uso, seguridad que proporciona al emplearlo y por no ser invasivo a la hora de su manejo. Ya que los comandos y controles  a utilizar son sencillos de comprender y usar para regular y mantener un control de la muestra a distancia. Además de las paredes en el contorno del cooler de metal hermetizado que permiten el control de temperatura y humedad. Asimismo, es una incubadora muy dinámica a la hora de usar para muestras de laboratorio por el personal médico.

# Bocetos del concepto seleccionado
## Boceto 1 (B)

![image](https://github.com/Andrsxd/Fundamentos-de-Biodisenho/assets/143019238/bbf3aaa3-f2d3-4283-9d91-e79e65c561a0)

## Boceto 2 (A)

![image](https://github.com/Andrsxd/Fundamentos-de-Biodisenho/assets/143019238/ab85bf35-8758-4bb2-a570-4f14ede9c3c9)

## Boceto 3 (C)

![image](https://github.com/Andrsxd/Fundamentos-de-Biodisenho/assets/143019238/b120f6e1-2068-4327-96b1-b7cd2f01d1c2)

# Tabla de valoración técnica

![image](https://github.com/Andrsxd/Fundamentos-de-Biodisenho/assets/143019238/0b5e6b52-31af-49b5-a093-03388d756e7f)

# Tabla de valoración económica

![image](https://github.com/Andrsxd/Fundamentos-de-Biodisenho/assets/143019238/216a4108-8ed4-46d5-ab87-d8bf420a4a8c)

# Proyecto óptimo

<img src="https://github.com/Andrsxd/Fundamentos-de-Biodisenho/assets/143019238/7e3a2330-dba9-43cd-a5a6-acbb820a6ba9"  width='350' height='350'>

<p>Eje X: Resultado técnico </p>
<p>Eje Y: Resultado económico </p>

## Conclusión
### Cómo proyecto óptimo se eligió el proyecto preliminar número 2 debido a su excelente funcionamiento, su entretenida ergonomía, su óptimo montaje, su importante costo de mantenimiento y el cual tiene un buen precio de los materiales; siendo estos parámetros los más importantes a evaluar en la lista técnica y económica.

# Etapa de modelado 3D

Los diseños 3D de los componentes fueron subirdo en este link para poder visualizarlos de una mejor manera:
https://skfb.ly/oMLnovvhttps://cad.onshape.com/documents/a0641caadb2f1b4ed6f83346/w/a380f1b85ffb1e3d2370f7e2/e/30f0cda308e4a71da47c57b4?renderMode=0&uiState=65397b0d22be6407f52aa419

# Etapa de diseño esquemático

En este apartado podría visualizarse mejor en el pdf del esquema ubicado en la carpeta _Hardware_.

![image](https://github.com/Andrsxd/Fundamentos-de-Biodisenho/assets/143019238/306ef85d-f465-42ab-b492-7188bbf6ea25)

![image](https://github.com/Andrsxd/Fundamentos-de-Biodisenho/assets/143019238/394e7bc2-fbf7-425c-b2df-37911ff698bd)


# Hito 1

link de canva: https://www.canva.com/design/DAFyHyuoqow/ovRBXYjWmnSfDSJ3ZjHk2A/edit?utm_content=DAFyHyuoqow&utm_campaign=designshare&utm_medium=link2&utm_source=sharebutton

# Lista de retos y limitaciones
## Retos:
+ Cambiar los parametros (temperatura) de forma remota.
+ Consultar la información de la temperatura a través del Bot.
+ 

## Limitaciones:
+ El ID del telegram se debe configurar directamente en el software de programación para poder conectarse al Bot.
+ Según el diseño elegido la agitación no está contemplada, por lo tanto ello limita al equipo a incubar muestras líquidas.
+ 

# Bibliografía
1. https://materialesdelaboratoriohoy.us/metal/incubadora-de-laboratorio/ 
2. https://www.calameo.com/read/00646313042a0b3f65598
3. http://repositorio2.udelas.ac.pa/bitstream/handle/123456789/257/deiethmariana.pdf?sequence=1&isAllowed=y
4. http://38.43.142.130/handle/20.500.12672/182
5. https://intekgroup.com.co/tipos-de-incubadoras-de-laboratorio/
6. https://articulo.mercadolibre.com.pe/MPE-651210394-incubadora-co2-de-laboratorio-de-50-l-_JM#position=1&search_layout=stack&type=item&tracking_id=a18b7bdb-a5b7-43a1-a7f4-4b25998fd8de
7. https://esp.labbox.com/producto/incubadora-con-agitacion-lbx-s50l/
8. https://blamis.com.co/incubadora-de-conveccion-forzada-single-display
9. https://esp32io.com/tutorials/esp32-dht11-lcd
