#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int soma (int A[], int i){
    if (i >= 4){
        return 0;
    }else{
        return A[i] + soma(A, i+1)/4;
    }
}

int main(void)
{
    int i, A[4], somaA=0;
    for (i = 0; i < 4; i++){
        printf("\n[%d]: ", i+1);
        scanf("%d", &A[i]);
    }
    printf("\n");
    somaA = soma(A, 0);
    printf("\n\nA soma do vetor e: %d", somaA);
    getch();
    return(0);
    
}
