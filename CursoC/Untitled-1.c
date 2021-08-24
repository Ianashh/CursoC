#include <stdio.h>
int main (void)
{
struct ficha_veiculos
{
char marca_veiculo[20];
char modelo_veiculo;
int ano_veiculo;
char placa_veiculo_letras;
int placa_veiculo_numeros;
};

struct ficha_veiculos carro;
printf ("\n\n ----------- Cadastro de Veiculos -----------\n\n");
printf ("Digite a marca do veiculo: ");
scanf("%s", &carro.marca_veiculo);

printf ("\nDigite a modelo do veiculo: ");
scanf("%s", &carro.modelo_veiculo);

printf ("\nDigite o ano do veiculo: ");
scanf("%d", &carro.ano_veiculo);

printf ("\nDigite as 3 letras da placa do veiculo: ");
scanf("%s", &carro.placa_veiculo_letras);

printf("\nDigite os 4 numeros da placa do veiculo: ");
scanf("%d", &carro.placa_veiculo_numeros);


printf ("\nA marca do veiculo eh: %s\n", carro.marca_veiculo);

printf ("\nO modelo do veiculo eh: %s\n", carro.modelo_veiculo);

printf ("\nO ano do veiculo eh: %d\n", carro.ano_veiculo);

printf ("\nA placa do veiculo eh: %s-%d\n", carro.placa_veiculo_letras,carro.placa_veiculo_numeros);
}