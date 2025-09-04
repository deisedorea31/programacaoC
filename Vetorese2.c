// Array de strings


#include <stdio.h>

int main(){
    char *nomes[] = {"Ana", "Bia", "Carlos"}; //Array de strings
    int i;
    for(i = 0; i <3; i++){
        printf("Nome do aluno %d: %s\n", i+1, nomes[i]);
    }   
    return 0;
}