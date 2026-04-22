#include <stdio.h>

int main(){
    int vetor[10] = {1,2,2,2,3,3,4,8,9,10};
    int A = 2;
    int B = 3;
    int C = 4;
    int i;
    int conta_A = 0;
    int conta_B = 0;
    int conta_C = 0;

    for (i = 0; i < 10; i++) {
        if (vetor[i] == A) {
            conta_A++;
        }
        if (vetor[i] == B) {
            conta_B++;
        }
        if (vetor[i] == C) {
            conta_C++;
        }
    }
    printf("O valor de A aparece %d vezes no vetor\n", conta_A);
    printf("O valor de B aparece %d vezes no vetor\n", conta_B);
    printf("O valor de C aparece %d vezes no vetor\n", conta_C);

    return 0;
}