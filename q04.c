#include <stdio.h>
   
    int main(void)
    {
        int Num, aux = 1, x=0;
        float media = 0;
        
        printf("Digite a quantidade de alunos:");
        scanf("%d", &Num); //pega a quantidade de alunos na turma
        
            while (aux <= Num)
           {
                printf("Digite a nota do aluno %d : ", aux); //pega a nota de cada aluno
                scanf("%d", &x);
                    if(media ==0){ //se a média ainda não tiver valor nenhum, ele receberá o primeiro valor fornecido pelo usuário
                        media = x;
                    }else{
                        media = media+x;
                    } 
                aux = aux +1;
           }
           media = media/Num;
       printf("A média da turma é %.1f ", media);
       return 0;
  }