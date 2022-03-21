#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int i;
    printf("INtervalo da rand: [0,%d]\n", RAND_MAX);
    for(i=1 ; i <= 10 ; i++)
        printf("Numero %d: %d\n", i, 1 + (rand() % 10 ));
    system("pause");
}

//Para escolher a faixa de valores vamos usar operaÃ§Ãµes matemÃ¡ticas, 
//principalmente o operador de mÃ³dulo, tambÃ©m conhecido como resto da divisÃ£o: 
//Para fazer com que um nÃºmero â€˜xâ€™ receba um valor entre 0 e 9, fazemos:
             //x = rand() % 10
//Para fazer com que um nÃºmero â€˜xâ€™ receba um valor entre 1 e 10, fazemos:
             //x = 1 + ( rand() % 10 )
//Para fazer com que um nÃºmero â€˜xâ€™ receba um valor entre 0.00 e 1.00, 
//primeiro geramos nÃºmeros inteiros, entre 0 e 100:
             //x = rand() % 101

//Para ter os valores decimais, dividimos por 100:
              //x = x/100;
