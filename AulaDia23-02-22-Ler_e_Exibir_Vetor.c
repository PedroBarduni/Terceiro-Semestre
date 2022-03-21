#include <stdio.h>
#include <conio.h>
#define max 10
int a=-1;
void exibir(int v[]){

    a++;
    if (a<max){
        printf("%d",v[a]);
        exibir(v);
    }
    getch();
}

main(){
    int vet[max];
    int i;
    for(i=0;i<max;i++)
        scanf("%d",&vet[i]);

    exibir(vet);
}
