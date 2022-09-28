// Função : Um cliente de um banco tem um saldo positivo de 500,00MT. Fazer um
// algoritmo que leia um cheque que entrou e ANALISE se o cheque poderá ser
// descontado ou não, já que o cliente não possi limite. Se o cheque não poder
// ser descontado, mostre essa informação, caso contrário, desconte o cheque
// e informe o saldo na tela.
// Autor : Emeldito Covane
// Data : 28/09/2022

#include <stdio.h>

main() {

    float saldo, valor_cheque, saldo_atual;

    printf("Informe o valor do cheque : ");
    scanf("%f", &valor_cheque);

    saldo = 500;

    if (valor_cheque <= saldo)
        printf("Cheque descontado, saldo atual : %f\n", saldo_atual = saldo - valor_cheque);
    else
        printf("Cheque não pode ser descontado, saldo insuficiente!\n");

}