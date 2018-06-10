#include <stdio.h>
#include <stdlib.h>

#define MAXBITS 100

int main()
{

    // entrada do usuário
    int inputNumber;

    // para o restante
    int re;

    // contém os bits 0/1
    int bits[MAXBITS];

    //para os loops
    int j;
    int i=0;

    printf("\t\tconverter decimal --> binario\n\n");

    // lê um número decimal do usuário.
    printf("Digite um numero positivo: ");
    scanf("%d",&inputNumber);

    //certifique-se de que o número de entrada seja um inteiro positivo.
    if (inputNumber < 0)
    {
        printf("Somente inteiro positivo\n");
        return 1;
    }

    // processamento real
    while(inputNumber>0)
    {

        // calcula o resto pelo módulo 2
        re = inputNumber % 2;

        // calcula o quociente da divisão por 2
        inputNumber = inputNumber / 2;

        bits[i] = re;
        i++;

    }

    printf("\n O número binario é: ");

    // itera de volta sobre todos os bits
    for(j=i-1; j>=0; j--)
    {
        printf("%d",bits[j]);
    }

    // para o caso, o número de entrada é 0
    if (i == 0)
    {
        printf("0");
    }

    return 0;
}
