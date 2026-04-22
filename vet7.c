#include <stdio.h>

int main(){
    int num[30] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,
    21,22,23,24,25,26,27,28,29,30};
    int i;
    int maior;
    int menor;
    int soma = 0;
    int media;
    int maiores = 0;

    for (i = 0; i < 30; i++) { //SOMA DOS NUMEROS DO VETOR
        soma = soma +num[i];
    }
    media = soma / 30; //MEDIA DO VETOR
    printf("A media dos numeros do vetor: %d\n", media);
     
    for (i = 0; i < 30; i++) {
        if(num[i] > media){
            maiores++;
        }
    }
    printf("Quantidade de valores maiores que a media: %d\n", maiores);

    maior = num[0]; //MAIOR VALOR DO VETOR
    for(i =1; i < 30; i++){
        if(num[i] > maior){
            maior = num[i];
        }
    }
    printf("O maior numero do vetor: %d\n", maior);

    menor = num[0]; //MENOR VALOR DO VETOR
    for(i = 1; i < 30; i++){
        if(num[i] < menor){
            menor = num[i];
        }
    }
    printf("O menor numero do vetor: %d\n", menor);
    
    printf("Numeros pares do vetor: "); //todos os pares do vetor

    for (i = 0; i < 30; i++) {
        if(num[i] % 2 == 0){
            printf("%d; ", num[i]);
        }
    }

    return 0;
}


