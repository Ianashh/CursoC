#include <stdio.h>

void main(){
char nome1[20];
char nome2[20];
char nome3[20];
char sexo1[10];
char sexo2[10];
char sexo3[10];
float nota1;
float nota2;
float nota3;

printf("\n\nCadastrando a primeira pessoa:\n");
printf("-------------------------------\n");
printf("NOME: ");
fflush(stdin);
scanf("%s",&nome1);
printf("SEXO: ");
fflush(stdin);
scanf("%s",&sexo1);
printf("NOTA: ");
scanf("%f", &nota1);

printf("\n\nCadastrando a segunda pessoa:\n");
printf("-------------------------------\n");
printf("NOME: ");
fflush(stdin);
scanf("%s",&nome2);
printf("SEXO: ");
fflush(stdin);
scanf("%s",&sexo2);
printf("NOTA: ");
scanf("%f", &nota2);


printf("\n\nCadastrando a terceira pessoa:\n");
printf("-------------------------------\n");
printf("NOME: ");
fflush(stdin);
scanf("%s",&nome3);
printf("SEXO: ");
fflush(stdin);
scanf("%s",&sexo3);
printf("NOTA: ");
scanf("%f", &nota3);

printf("\n\nListagem Completa\n");
printf("---------------------------------\n");
printf("NOME\t\tSEXO\tNOTA\n");
printf("%s\t\t%s\t%.2f\n",nome1,sexo1,nota1);
printf("%s\t\t%s\t%.2f\n",nome2,sexo2,nota2);
printf("%s\t\t%s\t%.2f\n",nome3,sexo3,nota3);
printf("---------------------------------\n\n");
}
