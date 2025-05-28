#include <stdio.h>

int main () {

    int index;

    char * nomesAlunos [3][3] = {
        {"Aluno 0", "Pt: 30", "Mat: 90"},
        {"Aluno 1", "Pt: 40", "Mat: 80"},
        {"Aluno 2", "Pt: 50", "Mat: 70"}


    };

    printf("Lista de Alunos:\n");
    printf("Digite o numero do aluno para ver os detalhes:\n");
    printf("Para o aluno 0, digite 0\n");
    printf("Para o aluno 1, digite 1\n");
    printf("Para o aluno 2, digite 2\n");

    scanf("%d", &index);

    printf("As notas do %s são: %s, %s... \n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);

    return 0;
}