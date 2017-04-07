#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define T 21
int main () {
    char letra[T], aux;
    int i;
    printf("Qual seu nome?\n");
    for(i=0;i==i;i++){//Loop infinito
        if(i<T-1){//Armazena até o limite do vetor
            letra[i]=getche();
            if(letra[i]==13){//Permite armazenar até o enter ser pressionado
                letra[i]='\0';
                break;
            }
        }
        else{//Joga o que for digitado a mais para qualquer lugar, não armazenando nada.
            aux = getch();
            if(aux==13)
                break;
        }
    }
    letra[T-1]='\0';
    printf("\n");
    printf("Ola, %s!\n", letra);
    system("pause");
    return 0;
}
