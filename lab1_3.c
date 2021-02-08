#include<stdio.h>

int main()
{
    unsigned long int n;
    scanf("%lu", &n);

    printf("%lu %lu",n%3 ,n%11 );
    return 0;
}
