#ifndef PRUEBA1_H
#define PRUEBA1_H

#include "Arduino.h"
#include "Prueba.h"

class Prueba1 : public Prueba{
  
  public:
    Prueba1();
    void sendMessage();
    void presentacion_prueba();
    void explicacion_prueba();
    void enunciado_prueba(int nivel);
    void realizacion_prueba();
	int feedback_prueba(int puntuacion, int ganar_puntos, int perder_puntos);
	
    const int beep = 9;
    const int tresdosuno = 12;
	const int bien0 = 13;
    const int mal0 = 14;
    const int sonido_intro = 17;
	const int bocina_empezar = 20;
    const int tit_prueba1 = 21;
    const int exp_prueba1 = 22;
	const int enun_prueba110 = 16;
	const int genial_p1 = 27;
	const int muybien_p1 = 28;
	const int bien_p1 = 29;
	const int puntuacionn = 30;
	const int ganar_puntoss = 31;
	const int perder_puntoss = 32;
	const int mal_tiempo = 34;
	const int mal_p1 = 35;
	const int orden_directo_prueba1 = 37;
	const int orden_inverso_prueba1 = 38;
	const int orden_numeros_prueba1 = 39;
	const int enun_prueba111 = 41;
    const int enun_prueba112 = 42;
    const int enun_prueba113 = 43;
	const int enun_prueba121 = 51;
    const int enun_prueba122 = 52;
    const int enun_prueba123 = 53;
	const int enun_prueba131 = 61;
    const int enun_prueba132 = 62;
	const int enun_prueba141 = 71;
	const int enun_prueba142 = 72;
    const int enun_prueba143 = 73;
	const int enun_prueba151 = 81;
	const int enun_prueba152 = 82;
    const int enun_prueba153 = 83;

	
	int led_verde = 9;
	int led_rojo = 8;

    int versiones;
	int vers;
    int segundos;
	int segundos_prueba;
    int long_maxima;
	int nivel_prueba;
	String ans_juego;
	String ans_correct;
	int respuesta = 0;
	char b;
	
	
	String dataReceived = "";
    String parameters;
    String command;
    String message;
	int OK5 = 0;
	long int tiempo = 0;
	

};

#endif
