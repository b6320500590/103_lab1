#include<stdio.h>

int main()
{
    int n, i, max=0, a;

    scanf("%d", &n);

    int num[n];

    for(i=0; i<n; i++)
    {
        scanf("%d", &num[i]);
        if(max < num[i])
        {
            max = num[i];
            a = i;
        }
    }

    printf("%d %d", a+1, max);

    return 0;
}
