#include<stdio.h>
#define NUM 1000
int main(){
	int x[NUM], i;
	int N_menor, i_Menor, num ;
	
	scanf("%d", &num);
	
	
	for(i=0; i<num; i++){
		scanf("%d", &x[i]);
	}
	
	N_menor = x[0];
	for(i=0; i<num; i++){
		if(x[i]< N_menor){
			N_menor = x[i];
			i_Menor = i;
		}
	}
	
	printf("Menor valor: %d\n", N_menor);
	printf("Posicao: %d\n", i_Menor);
	
	return 0;
}
