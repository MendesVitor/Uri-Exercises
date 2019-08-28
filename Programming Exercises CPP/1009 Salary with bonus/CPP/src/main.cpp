#include <iostream>
#include<stdio.h>

using namespace std;


int main() {

float s=0,sell=0;
string n="";

cin >>n;
scanf("%f",&s);
scanf("%f",&sell);

printf("TOTAL = R$ %.2f\n",s+(sell*0.15));
return 0;

}