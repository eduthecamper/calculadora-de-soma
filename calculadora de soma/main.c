#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num1,num2,soma;
	printf("Insira dois numeros para um calculo de soma:\n"); //print com texto do que se pede//
	scanf("%d", &num1); //código que guarda o valor do número e variável incitando que essa é o número 1//
	scanf("%d", &num2); //código que guarda o valor do número e variável incitando que esse é o número 2//
	soma = num1 + num2; //código que declara o cálculo como num1+num2//
	printf("O resultado eh:\n%d", soma); //código que diz o restultado com a soma declarada//
}
