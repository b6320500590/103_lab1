#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    system("cls");

    if(a>=0 && a<=1000000000 && b>=0 && b<=1000000000 )
        printf("%d", a+b);

    return 0;
}

