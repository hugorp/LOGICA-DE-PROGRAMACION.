// chicharronera.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//UNIVERSIDAD POLITECNICA DE TULANCINGO
//INGENIERIA EN ELECTRONICA Y TELECOMUNICACIONES 
//LOGICA DE PROGRAMACION
//HUGO ALEJANDRO RUIZ PEREZ
//FORMULA DE LA CHICHARRONERA

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c;
	float x1, x2;
	printf("captura a: ");
	scanf_s ("%f", &a);
	printf("captura b: ");
	scanf_s("%f", &b);
	printf("captura c: ");
	scanf_s("%f", &c);
	if (b*b >= 4 * a *c)
	{
		x1 = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);
		x2 = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);
		printf("Las raices del sistema: %f, %5.2f", x1, x2);
	}
	else
	{
		printf("la raiz no es real.");
	}
	}






// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
