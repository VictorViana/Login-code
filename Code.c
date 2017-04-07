#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define T 21
int main () {
    char letra[T], aux;
    int i;
    printf("Qual seu nome?\n");
    for(i=0;i==i;i++){
        if(i<T-1){
            letra[i]=getche();
            if(letra[i]==13){
                letra[i]='\0';
                break;
            }
        }
        else{
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
