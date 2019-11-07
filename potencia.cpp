// potencia.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//UNIVERSIDAD POLITECNICA DE TULANCINGO
//INGENIRERIA EN ELECTRONICA Y TELECOMUNICACIONES
//LOGICA DE PROGRAMACION
//HUGO ALEJANDRO RUIZ PEREZ
//ESTE PROGRAMA CALCULA LA POTENCIA DE UN NUMERO 

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

float x, pot;
int n, signo;

int main()
{
	printf("captura un valor:"); scanf_s("%f", &x);
	printf("se eleva a la potencia:"); scanf_s("%d", &n);
	if (n < signo)
	{
		signo = 1;
		n = n * -1;
	}
	else
		signo = 0;
	pot = 1.0;
	while (n > 0)
	{
		pot = pot * x;
		n = n - 1;
	}
	if (signo)
		pot = 1 / pot;
	printf("la potencia de %f es %f", x, pot);

   
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
