#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define T 50
char senha (char senha);
int main () {
    char password[T], letra[T], aux;
    int i, x=0;
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
            if(aux==13)////Permite digitar até o enter ser pressionado
                break;
        }
    }
	while(x==0)
		x=senha(password);
    letra[T-1]='\0';
    printf("\n");
    printf("Ola, %s!\n", letra);
	printf("Sua senha eh %s\n", password);
    system("pause");
    return 0;
}
char senha (char password[T]){
    int i;
	char aux;
    printf("Digite sua senha?\n");
    for(i=0;i<T-1;i++){
		if(i<T-1){
            password[i]=getch();
            printf("*");
            if(password[i]==13){
                password[i]='\0';
				return 1;
                break;
            }
		}
		else{
			aux = getch();
			if(aux==13)
				break;
		}
	}
    password[i]='\0';
    printf("\n");
}
