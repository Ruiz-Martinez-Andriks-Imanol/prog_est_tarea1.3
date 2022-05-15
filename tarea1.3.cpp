/* Autor: Andriks Imanol Ruiz Martínez, Realizado: 03/02/2022 
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programación Estructrada
Ciclo: 01/2022

Este es un programa en Lenguaje C de la materia de Programación Estructurada
Muestra el uso de:

    -Variables flotantes
    -printf para mostrar mensajes y variables
    -scanf
    -El uso de include para las librerías
    -uso de la librería math.h
    -Comentarios para la documentación interna del programa
*/
#include<stdio.h>
#include<math.h>
int main(){
	//Declaración de variables
	float r, n, a;
	//Entrada de datos
	printf("Introduce el radio del sector circular: ");
	scanf("%f", &r);
	printf("Introduce el grado del sector circular:");
	scanf("%f",&n);
	//proceso
	a=M_PI*pow(r,2)*(n)/360;
	//Salida
	printf("El area del sector circular es %f", a);
	return 0;
}
