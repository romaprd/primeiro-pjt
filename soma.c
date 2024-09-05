#include <stdio.h>

int main(){
int numero, i, n;//numero para receber um numero; i para servir de contador; n para recebr a quantidade de numeros; soma para somar,obvio
float media,soma = 0;

 printf("informe quantas somas deseja realizar: ");
 scanf("%d", &n);

 for (i = 1; i <= n; i++){ //Para i = 1; i <= 1 : seria acondicao do laco; i++ atualizacao de 1 em 1
printf("informe um numero: ");
scanf("%d", &numero);
soma = soma + numero;
 

 }
  media = soma / n;
 printf("a media eh: %f", media);




    return 0;
}