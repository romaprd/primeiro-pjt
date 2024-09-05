#include <stdio.h>

int main(){ //quando a funcao estiver apresentando uma variavel é necessario o uso do "return 0;" para a funcao dar certo

int hora;

printf("informe a hora atual: ");
scanf("%d", &hora);

if (hora <= 12){
printf("bom dia");


}
else if ( hora < 18){
    printf("boa tarde");
}
else {
    printf("boa noite");
}





return 0;//o retorno é obrigatorio
}