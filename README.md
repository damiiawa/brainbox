> [!WARNING]
> Esta es una versión en desarrollo, no pensada para usarse en modo producción. Aquí podrás probar nuevas características a modo de prototipo, pero no significa que todas puedan llegar a una versión estable.

> [!NOTE]
> **Última actualización de desarrollo:** 03 de marzo de 2025 `(Versión 1.0 BETA)`.

## Características _`Versión 1.0.0 BETA`_
Sin prototipos. Exactamente las mismas funciones que la estable.

## Requisitos
### Hardware BrainBox
```
Cerebro Central v1.8 (ESP32 WROVER-E)
Módulo de robótica v1.8
Cable MicroUSB
```
### Software
```
Arduino IDE 1.82 o más reciente
```
### Librerías adicionales
Para el correcto uso de esta librería, se requieren librerías adicionales. Puedes obtenerlas directamente haciendo [clic aquí](https://drive.google.com/drive/folders/1QOnkuVHgM2dSqqA4jCEEKPT2CPpyml5S?usp=sharing).
```
ESP32MotorControl
Adafruit_NeoPixel
```

> [!WARNING]
> Esta librería **únicamente** funcionará y estará adaptada para el robot BrainBox con los requisitos estipulados. Otras versiones podrían no funcionar. No compatible con **STEMBot** o **HackerHand**.

> [!CAUTION]
> Antes de subir código nativo de Arduino, es recomendable realizar una copia del firmware original por si desea utilizar en algun momento el sistema de bloques de Seguel Robotics.

## Uso de la librería
Para aprender a utilizarla detalladamente revise la [wiki](https://github.com/damiiawa/brainbox/wiki) en la sección **BETA**.
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
- [ESP32MotorControl](https://github.com/JoaoLopesF/ESP32MotorControl)
- [Adafruit_NeoPixel](https://github.com/adafruit/Adafruit_NeoPixel)
### Medios electrónicos
- [Seguel Robotics](http://seguelrobotics.com/)
