#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    int num;
    setlocale(LC_ALL,"portuguese");

    printf("indique o numero inteiro de teste:  ");
    scanf("%d",&num);

    eperfe(num);

    if(eperfe(num))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
eperfe(num)
{
    int divisor,soma=0;

    for(divisor=1; divisor<num; divisor++)
    {
        if(num%divisor==0)
        {
            soma = soma+divisor;
        }
        else
        {
            printf("");
        }
    }
    if(soma==num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
