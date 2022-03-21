#include <stdio.h>
#include <stdlib.h>
int fator (int n)
{
    if(n)
        return n * fator (n - 1);
    else
        return 1;
}
// FunÃ§Ã£o Principal
int main()
{
    int n=0;
    printf("Numero: ");
    scanf("%d", &n);
    printf("%d! = %d\n", n, fator(n));
    system("pause");
    return 0;
}
