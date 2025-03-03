> [!NOTE]
> **Última actualización:** No publicada `(Versión 1.0)`.

> [!TIP]
> Si necesita ayuda audiovisual vea [este video](https://youtube.com). Si prefiere una sesión personalizada, envíe un correo a [damianastroza@gmail.com](mailto:damianastroza@gmail.com).
<h3 align="center">
        <samp> Librería Arduino para
                <b><a target="_blank" href="http://seguelrobotics.com/">BrainBox</a></b>
        </samp>
</h3>

<p align="center">
  <samp>Una librería, con enfoque educativo, para el robot BrainBox de la empresa Seguel Robotics.</samp>
</p>
<p align="center">
  <samp>(Esta librería no es oficial y no está afiliada a Seguel Robotics)</samp>
</p>

## ¿Por qué?
Seguel Robotics ofrece para BrainBox un sistema de programación adaptado a estándares de educación basado en bloques. Con esta librería, busco que los estudiantes o particulares puedan aprender de una manera más directa a la programación en código y efectuar buenas prácticas. Si quieres saber las ventajas de utilizar la librería contra el sistema de bloques puedes ver [este video](https://youtube.com).

## Características _`Versión 1.0`_
La librería actualmente puede facilitar lo siguiente:
- Desplazar el robot en velocidades parejas o independientes.
- Realizar giros cerrados.
- Utilizar matriz de 25 leds + 1 a base de RGB o variables.
- Emitir notas con zumbador a base de frecuencias o variables.
- Lecutra digital de botones programables.
- Lecutra analógica de sensor ultrasonido.
- Lecutra analógica de sensores de luz para seguimiento de línea.

## Requisitos
### Hardware BrainBox
```
Cerebro Central
Módulo de robótica v1.8
Cable MicroUSB
```
### Software
```
Arduino IDE 1.82 o más reciente
```
### Librerías adicionales
Para el correcto uso de esta librería, se requieren librerías adicionales. Puedes obtenerlas directamente haciendo [clic aquí](https://github.com/damiiawa/brainbox).
```
Librerías
```

> [!WARNING]
> Esta librería **únicamente** funcionará y estará adaptada para el robot BrainBox con los requisitos estipulados. Otras versiones podrían no funcionar. No compatible con **STEMBot** o **HackerHand**.

> [!CAUTION]
> Antes de subir código nativo de Arduino, es recomendable realizar una copia del firmware original por si desea utilizar en algun momento el sistema de bloques de Seguel Robotics. Si no sabe como hacerlo vea [este video](https://youtube.com/)

## Uso de la librería
Para aprender a utilizarla detalladamente revise la [wiki](https://github.com/damiiawa/brainbox/wiki) o vea [este video](https://youtube.com/).
```c++
#include <DamiiawaLibs_Brainbox.h>

void setup() {
  // Código que se ejecuta una sola vez.
}

void loop() {
  // Código que se repite en bucle.
}
```
Debe funcionar con configuración de placa `ESP32 Dev Module`.

## Atribuciones
### Desarrollo y prototipado
- [Damián Astroza Pérez](https://www.linkedin.com/in/damian-astroza/)
### Librerías utilizadas
- Librerías
### Medios electrónicos
- [Seguel Robotics](http://seguelrobotics.com/)
