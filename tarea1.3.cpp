/* Autor: Andriks Imanol Ruiz Mart�nez, Realizado: 03/02/2022 
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programaci�n Estructrada
Ciclo: 01/2022

Este es un programa en Lenguaje C de la materia de Programaci�n Estructurada
Muestra el uso de:

    -Variables flotantes
    -printf para mostrar mensajes y variables
    -scanf
    -El uso de include para las librer�as
    -uso de la librer�a math.h
    -Comentarios para la documentaci�n interna del programa
*/
#include<stdio.h>
#include<math.h>
int main(){
	//Declaraci�n de variables
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
