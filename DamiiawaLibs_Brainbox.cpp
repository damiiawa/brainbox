///////////////////////////////////////////////////////////////////////////////////////
// MIT License                                                                       //
//                                                                                   //
// Copyright (c) 2025 Damian Astroza                                                 //
//                                                                                   //
// Permission is hereby granted, free of charge, to any person obtaining a copy      //
// of this software and associated documentation files (the "Software"), to deal     //
// in the Software without restriction, including without limitation the rights      //
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell         //
// copies of the Software, and to permit persons to whom the Software is             //
// furnished to do so, subject to the following conditions:                          //
//                                                                                   //
// The above copyright notice and this permission notice shall be included in all    //
// copies or substantial portions of the Software.                                   //
//                                                                                   //
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR        //
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,          //
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE       //
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER            //
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,     //
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE     //
// SOFTWARE.                                                                         //
//                                                                                   //
//                                                                                   //
//  Last updated on 03/03/2025                                                       //
//  Compatible with the Arduino IDE 1.82 or newer                                    //
//  Library version: 1.0 [Stable version]                                            //
//  Robot version: BrainBox (Seguel Robotics Spa)                                    //
//  Web: http://damiiawa.glitch.me                                                   //
//  GitHub: https://github.com/damiiawa/brainbox                                     //
//                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////

#include "DamiiawaLibs_Brainbox.h"
#include <inttypes.h>
#include "Arduino.h"
#include <ESP32MotorControl.h> //Controlador de motores
#include <Adafruit_NeoPixel.h> //Controlador Matriz Leds

    ESP32MotorControl MotorControl = ESP32MotorControl(); //Asignación controlador de motores

#define TRIGGER_PIN  27 //Trigger de Ultrasonido (OUTPUT)
#define ECHO_PIN     33 //Echo de Ultrasonido (INPUT)

#define BUZZER_PIN 25 //Zumbador pasivo
#define PIN_RGB 4 //Matriz RGB
#define NUM_LEDS 26 //Tamaño Matriz

#define SENSOR_LINEA_IZQUIERDO 39
#define SENSOR_LINEA_DERECHO 36


    Adafruit_NeoPixel leds(NUM_LEDS, PIN_RGB, NEO_GRB + NEO_KHZ800); // Asignación matriz leds

int motorIzquierdoAvanzar = 21;
int motorIzquierdoRetroceder = 23;
int motorDerechoAvanzar = 5;
int motorDerechoRetroceder = 15;

int botonVerde = 36; //Compartido con IR_Izquierdo (Evitar desafíos con este botón)
int botonRojo = 39; //Compartido con IR_Derecho (Evitar desafíos con este botón)
int botonAzul = 34;
int botonAmarillo = 35;
//int botonMenu = 15; Al compartir con Pin de motor, es imposible de utilizar.

int movement = 0; // 0: Detenido, 1: Avanza, 2: Retrocede, 3: Gira Derecha, 4: Gira Izquierda, 5: Avanza DIF, 6: Retrocede DIF

    //Notas musicales GRAVES
    const float DO_GRAVE = 130.8;
    const float RE_GRAVE = 146.8;
    const float MI_GRAVE = 164.8;
    const float FA_GRAVE = 174.6;
    const float SOL_GRAVE = 196.0;
    const float LA_GRAVE = 220.0;
    const float SI_GRAVE = 246.9;

    //Notas musicales ESTANDAR
    
    const float DO = 261.6;
    const float RE = 293.7;
    const float MI = 329.6;
    const float FA = 349.2;
    const float SOL = 392.0;
    const float LA = 440.0;
    const float SI = 493.9;

    //Notas musicales AGUDAS

    const float DO_AGUDO = 523.3;
    const float RE_AGUDO = 587.3;
    const float MI_AGUDO = 659.3;
    const float FA_AGUDO = 659.3;
    const float SOL_AGUDO = 783.99;
    const float LA_AGUDO = 880.0;
    const float SI_AGUDO = 987.8;

    //Lista de colores para matriz led
    #define ROJO 255, 0, 0
    #define VERDE 0, 255, 0
    #define AZUL 0, 0, 255
    #define AMARILLO 255, 255, 0
    #define NARANJA 255, 165, 0
    #define BLANCO 255, 255, 255
    #define NEGRO 0, 0, 0

// Comandos de movimiento ruedas (avanzar, retroceder, girarIzquierda, girarDerecha, detenerse)

void avanzar(int vel){

    if (vel > 1 && vel < 40){
        vel = 40;
    }
    
    if(vel > 100){
        vel = 100;
    }

      if (movement!=1){
	detenerse();
	movement=1;
	}

    MotorControl.motorForward(0, vel);
    MotorControl.motorForward(1, vel);

}

void avanzar(int velIzq, int velDer){

    if (velIzq > 1 && velIzq < 40){
        velIzq = 40;
    }
    
    if(velIzq > 100){
        velIzq = 100;
    }

    if (velDer > 1 && velDer < 40){
        velDer = 40;
    }
    
    if(velDer > 100){
        velDer = 100;
    }

  if (movement!=5){
	detenerse();
	movement=5;
	}

    MotorControl.motorForward(0, velIzq);
    MotorControl.motorForward(1, velDer);
}

void retroceder(int vel){

    if (vel > 1 && vel < 40){
        vel = 40;
    }
    
    if(vel > 100){
        vel = 100;
    }

    if (movement!=2){
	    detenerse();
	    movement=2;
	}

    MotorControl.motorReverse(0, vel);
    MotorControl.motorReverse(1, vel);
}

void retroceder(int velIzq, int velDer){

    if (velIzq > 1 && velIzq < 40){
        velIzq = 40;
    }
    
    if(velIzq > 100){
        velIzq = 100;
    }

    if (velDer > 1 && velDer < 40){
        velDer = 40;
    }
    
    if(velDer > 100){
        velDer = 100;
    }

     if (movement!=6){
	    detenerse();
	    movement=6;
	 }


    MotorControl.motorReverse(0, velIzq);
    MotorControl.motorReverse(1, velDer);
}

void girarDerecha(int vel){
    if (vel < 40){
        vel = 40;
    }
    
    if(vel > 100){
        vel = 100;
    }

    if (movement!=3){
	    detenerse();
	    movement=3;
	}
	
    MotorControl.motorForward(0, vel);
}

void girarIzquierda(int vel){

    if (vel < 40){
        vel = 40;
    }
    
    if(vel > 100){
        vel = 100;
    }

  if (movement!=4){
	detenerse();
	movement=4;
	}

    MotorControl.motorForward(1, vel);

}

void detenerse(){

    MotorControl.motorsStop();

    delay(70);
    movement = 0;
}

// Sensores

int leerDistancia(){  //Ultrasonido HC-SR04 [Soldado]

  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(2); 
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH);

  long distance = duration * 0.0344 / 2;  

  delay(100);
  return distance;
}

int leerLineaIzquierda() {
     return analogRead(SENSOR_LINEA_IZQUIERDO) / 4; 
}

int leerLineaDerecha() {
    return analogRead(SENSOR_LINEA_DERECHO) / 4; 
}


// Aditivos

int leerBotonA(){ //Verde
    return digitalRead(botonVerde);
}

int leerBotonB(){ //Rojo
    return digitalRead(botonRojo);
}

int leerBotonC(){ //Azul
    return digitalRead(botonAzul);
}

int leerBotonD(){ //Amarillo
    return digitalRead(botonAmarillo);
}
void emitirNota(float frecuencia, int duracion){
  tone(BUZZER_PIN, frecuencia, duracion);
  delay(duracion);                       
  noTone(BUZZER_PIN);                    
  delay(50);
}

void ledColor(int index, int red, int green, int blue) {
    leds.setPixelColor(index, leds.Color(red, green, blue));
    leds.show();
}

void borrarLeds() {
    for (int i = 1; i < NUM_LEDS; i++) {
        leds.setPixelColor(i, 0, 0, 0);
    }
    leds.show();
}

// Inicializar pines (Divididos para ahorro de memoria)

void usoMovimiento(){

    MotorControl.attachMotors(motorIzquierdoAvanzar, motorIzquierdoRetroceder, motorDerechoAvanzar, motorDerechoRetroceder);

}


void usoSensores(){

    pinMode(TRIGGER_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);

    pinMode(SENSOR_LINEA_IZQUIERDO, INPUT);
    pinMode(SENSOR_LINEA_DERECHO, INPUT);

    pinMode(botonVerde, INPUT);
    pinMode(botonRojo, INPUT);
    pinMode(botonAzul, INPUT);
    pinMode(botonAmarillo, INPUT);
}

void usoLeds(){
    leds.begin();
    leds.setBrightness(30);
    ledColor(0,VERDE);
    leds.show();



}


// Tiempos

void finPrograma(){

	detenerse();

	while(1){
	
	}

}

void pausa(int tiempo){

	delay(tiempo);

};
