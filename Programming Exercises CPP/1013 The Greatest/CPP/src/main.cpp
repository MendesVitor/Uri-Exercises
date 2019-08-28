#include <iostream>
#include <stdio.h>
#include <math.h>

int maior(int a, int b)
{
    return (a + b + abs(a - b)) / 2;
}

int main()
{
    int a = 0, b = 0, c = 0;

    scanf("%d %d %d", &a, &b, &c);

    if (maior(a, b) >= maior(a, c) && maior(a, b) >= maior(b, c))
    {
        printf("%d eh o maior\n",maior(a,b));
    }
    else{
        printf("%d eh o maior\n",maior(b,c));
    }

    return 0;
    
}