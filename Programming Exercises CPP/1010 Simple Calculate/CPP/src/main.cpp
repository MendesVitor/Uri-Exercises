#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

int pn=0,n=0;
float v=0,res=0;

scanf("%d %d %f",&pn,&n,&v);
res+=n*v;
scanf("%d %d %f",&pn,&n,&v);
res+=n*v;

printf("VALOR A PAGAR: R$ %.2f\n",res);
return 0;

}