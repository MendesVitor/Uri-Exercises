#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    float m1=0,m2=0;

    scanf("%f",&m1);
    fflush(stdin);
    scanf("%f",&m2);


    printf("MEDIA = %.5f\n",((m1*3.5)+(m2*7.5))/11);

}