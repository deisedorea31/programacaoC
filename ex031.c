#include <stdio.h>

int main(){
  int index;
  char *nomesAlunos[3][3] = {
    {"Aluno 1", "Pt: 30", "Mat: 90"},
    {"Aluno 2", "Pt: 40", "Mat: 80"},
    {"Aluno 3", "Pt: 50", "Mat: 70"}    
};

printf("Digite o número do aluno para ver as notas: \n");
printf("Para o aluno 1, digite 0\n");
printf("Para o aluno 2, digite 1\n");
printf("Para o aluno 3, digite 2\n");

scanf("%d", &index);

printf("As notas do %s são: %s e %s\n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);

return 0;
}