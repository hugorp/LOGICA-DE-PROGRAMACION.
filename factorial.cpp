// factorial.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//UNIVERSIDAD POLITECNICA DE TULANCINGO
//INGENIERIA EN ELECTRONICA Y TELECOMUNICACIONES
//LOGICA DE PROGRAMACION
//HUGO ALEJANDRO RUIZ PEREZ
//ESTE PROGRAMA CALCULA EL FACTORIAL DE UN NUMERO INGRESADO POR EL USUARIO

#include "pch.h"
#include <iostream>

int main()
{
	int n, fac = 1;
    printf("Ingrese un numero:\n");
	scanf_s("%d", &n);
	for ( int i = 1; i <= n; i++)
	{
		fac = fac * i;
    } 
	printf("el factorial es %d", fac);


}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
