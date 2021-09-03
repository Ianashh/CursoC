#include <stdio.h>


void main(){
char nome[15];
unsigned int nota1;
unsigned int nota2;
unsigned int nota3;
unsigned int nota4;
float media;

printf("\n\nDigite o nome do aluno: ");
scanf("%s",&nome);
printf("\nDigite a nota da atividade A1 deste aluno: ");
scanf("%i",&nota1);
printf("\nDigite a nota da atividade A2 deste aluno: ");
scanf("%i",&nota2);
printf("\nDigite a nota da atividade A3 deste aluno: ");
scanf("%i",&nota3);
printf("\nDigite a nota da atividade A4 deste aluno: ");
scanf("%i",&nota4);

media=(nota1+nota2+nota3+nota4)/4;

printf("\nA media do aluno %s foi de %.2f\n\n",nome,media);


}