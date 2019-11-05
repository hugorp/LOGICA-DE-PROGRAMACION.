// operaciones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//UNIVERSIDAD POLITECNICA DE TULANCINGO
//ELECTRONICA Y TELECOMUNICACIONES 
//LOGICA DE PROGRAMACION
//HUGO ALEJANDRO RUIZ PEREZ

#include "pch.h"
#include <iostream>
int suma(int, int);


int main()
{
	int a, b;
	printf("/ Hola Mundo!\n");
	a = 7, b = 6;
	printf("\n El resultado de sumar %d + %d es: %d\n", a, b, suma(a, b));
}
int suma(int op1, int op2)
{
	return op1 + op2;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
