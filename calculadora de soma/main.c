#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num1,num2,soma;
	printf("Insira dois numeros para um calculo de soma:\n"); //print com texto do que se pede//
	scanf("%d", &num1); //c�digo que guarda o valor do n�mero e vari�vel incitando que essa � o n�mero 1//
	scanf("%d", &num2); //c�digo que guarda o valor do n�mero e vari�vel incitando que esse � o n�mero 2//
	soma = num1 + num2; //c�digo que declara o c�lculo como num1+num2//
	printf("O resultado eh:\n%d", soma); //c�digo que diz o restultado com a soma declarada//
}
