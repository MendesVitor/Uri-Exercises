#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    float a=0,b=0,c=0;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    printf("MEDIA = %.1f",((a*2)+(b*3)+(c*5))/(2+3+5));
    return 0;
}
