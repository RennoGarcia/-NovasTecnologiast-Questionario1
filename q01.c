#include <stdio.h>
   
    int main()
    {
        int cont = 0, Num;
        printf("Digite um numero inteiro:");
        scanf("%d", &Num);
        if (Num == 0) cont = 1; //verifica se o numero é igual a zero. se não for, o número será testado. 
        else //não sendo zero, contador adiciona 1.
            while (Num != 0)//se o numero for diferente de zero e maior que 10, então ele é no mínimo divizivel 1 vez por 10.
           {
               cont= cont+ 1;
               Num = Num/10;
           }//caso o numero for maior que 2 digitos, o numero será dividiro por 10 até que não possa mais.
           
       printf("Este número possúi %d dígitos", cont);
       return 0;
  }