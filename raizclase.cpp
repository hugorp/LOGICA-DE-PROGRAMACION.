// raizclase.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//UNIVERSIDAD POLITECNICA DE TULANCINGO
//ELECTRONICA Y TELECOMUNICIONES
//LOGICA DE PROGRAMACION
//HUGO ALEJANDRO RUIZ PEREZ
//ESTE PROGRMA LA RAIZ DE UN NUMERO.

#include "pch.h"
#include <iostream>
#include  <stdlib.h>
#include  <stdio.h>

float absoluto(float valor)
{
	float nuevo;
	nuevo = valor;
	if (nuevo < 0)
		nuevo = nuevo * -1;
	return nuevo;
}

int main()
{
	float n, a, b, dif;
	const float EXAC = 0.000001;
	
	printf("captura el valor:\n");
	scanf_s("%f", &n);
	a = n;
	b = 1;
	dif = absoluto(a - b);
	while (dif>EXAC)
	{
		a = (a + b) / 2;
		b = n / a;
		dif = absoluto(a - b);

	}
	printf("la raiz de %f es %f", n, a);

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
