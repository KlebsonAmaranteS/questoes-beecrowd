#include <stdio.h>
 
int main() {
 
 int X;
 float Y;
 
 printf("Digite o primeiro valor:");
 scanf("%d",&X);
 printf("Digite o segundo valor:");
 scanf("%f",&Y);
 printf("A velocidade é: %.3f km/l\n",X/Y);
 
    return 0;
}