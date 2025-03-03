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

#ifndef DamiiawaLibs_Brainbox_h
#define DamiiawaLibs_Brainbox_h

#define ROJO 255, 0, 0
#define VERDE 0, 255, 0
#define AZUL 0, 0, 255
#define AMARILLO 255, 255, 0
#define NARANJA 255, 165, 0
#define BLANCO 255, 255, 255
#define NEGRO 0, 0, 0

// Notas musicales GRAVES
extern const float DO_GRAVE;
extern const float RE_GRAVE;
extern const float MI_GRAVE;
extern const float FA_GRAVE;
extern const float SOL_GRAVE;
extern const float LA_GRAVE;
extern const float SI_GRAVE;

// Notas musicales ESTÁNDAR
extern const float DO;
extern const float RE;
extern const float MI;
extern const float FA;
extern const float SOL;
extern const float LA;
extern const float SI;

// Notas musicales AGUDAS
extern const float DO_AGUDO;
extern const float RE_AGUDO;
extern const float MI_AGUDO;
extern const float FA_AGUDO;
extern const float SOL_AGUDO;
extern const float LA_AGUDO;
extern const float SI_AGUDO;

// Movimiento

void avanzar(int vel);

void avanzar(int velIzq, int velDer);

void retroceder(int vel);

void retroceder(int velIzq, int velDer);

void girarDerecha(int vel);

void girarIzquierda(int vel);

void detenerse();

// Sensores

int leerDistancia();

int leerLineaIzquierda();

int leerLineaDerecha();

// Aditivos 

int leerBotonA();

int leerBotonB();

int leerBotonC();

int leerBotonD();

void emitirNota(float frecuencia, int duracion);

void ledColor(int index, int red, int green, int blue);

void borrarLeds();

// Inicializar 

void usoMovimiento();

void usoSensores();

void usoLeds();

// Tiempos

void finPrograma();

void pausa(int tiempo);

#endif