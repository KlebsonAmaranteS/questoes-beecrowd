#include <stdio.h>
 //inicializa o codigo C 
int main() {
 
   float a,b, MEDIA; //indica as variaveis
   printf("Digite um número: "); //primeiro número a ser informado pelo usuario
   scanf("%f", &a); //vai fazer a leitura do que vai ser digitado pelo usuario
   printf("Digite um número: "); //segundo número a ser informado pelo usuario
   scanf("%f", &b); //Vai fazer a leitura do que será digitado
   MEDIA = (a*3.5+b*7.5)/(3.5+7.5); //faz a soma dos pesos e os divide pela soma dos proprios pesos
   printf("MEDIA = %.2f\n", MEDIA); //imprime a media: pesos pós divisão + valores informados pelo usuario

    
    return 0;

}