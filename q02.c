#include <stdio.h>


int main() {
  int num,    // numero dado (na base decimal)         
      binario,// numero dado convertido para base 2    
      aux,          // auxiliar                              
      dig,          // guardara cada um dos digitos binarios 
      potencia;    // potencia de 10                        


  printf("Digite um numero natural: ");
  scanf("%d", &num);
  
  aux = num;
  binario = 0;
  potencia = 1;


  while (aux > 0) {
    dig = aux % 2;                  // proximo digito binario menos significativo  
    aux = aux / 2;                  // remove esse digito do que resta             
    binario = binario + dig * potencia;  // adiciona o digito como o mais significativo 
    potencia = potencia * 10;   //cada vez q é feita a divisão o numero fornecito via terminal, porém o binário deve acompanhar o bit
                                //mais significativo para cada divisão que é feita. por isso o número  antes de ser 
                                //adicionado ao binário é multiplicado
                    }
  printf("O numero %d escrito na base binaria: %d\n", num, binario);


  return 0;
}