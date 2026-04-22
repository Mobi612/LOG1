#include <stdio.h>

int main(){
    int num[10] = {1,2,3,4,5,6,7,8,9,10};
    int inverter[10];
    int i;
    
    for (i = 0; i < 10; i++) {
        inverter[i] = num[9 - i];
    }
    printf("Vetor invertido:\n");
    for (i = 0; i < 10; i++) {
        printf("%d\n ", inverter[i]);
    }
    return 0;
}