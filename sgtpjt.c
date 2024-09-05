#include <stdio.h>

int main (){
int soma, numero;
printf("informe um numero para ser somado ou 0 para sair");
scanf("%d", &numero);

while (numero != 0)
{
    soma = soma + numero;
    printf("digite outro numero: ");
    scanf("%d", &numero);
    

}
printf("a soma eh: %d", soma);













    return 0;
}