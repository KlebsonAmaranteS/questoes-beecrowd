#include <stdio.h>

int main()
{
int Num,a,b,c, tamanhos[100], vales_picos[100], cont = 1;

scanf("%d", &Num);

for (a = 0; a < Num; a++)
{
    scanf("%d", &tamanhos[a]);    
}

for (b = 1; b < Num; b++)
{
    if (tamanhos[b] > tamanhos[b-1]){
        vales_picos[b-1] = 1;
    } else if (tamanhos[b] < tamanhos[b-1]){
        vales_picos[b-1] = 0;
    } else {
        cont = 0;
        printf("%d\n", cont);
        return 0;
    }
}

for (c = 0; c < Num-2; c++){
    int cont = 1;
    if (vales_picos[c] == vales_picos[c+1]){
        cont = 0;
        printf("%d\n", cont);
        return 0;
    } 
}

printf("%d\n", cont);

return 0;
}
