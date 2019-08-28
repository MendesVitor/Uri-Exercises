#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int a=0;
    float b=0;

    scanf("%d",&a);
    scanf("%f",&b);

    printf("%.3f km/l\n",a/b);

    return 0;
}