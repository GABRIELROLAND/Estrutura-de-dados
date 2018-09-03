#include<stdio.h>
#include<stdlib.h>

int main(){
int n,i,j;
float *setor;
printf("Entre com a quantidade maxima de setores:\n");
scanf("%d",&n);
setor=(float*)malloc(2*n*sizeof(float));
if(setor==NULL){
    printf("\nMemoria insuficiente.");
    return 1;
}
printf("\nEntrada da tabela de salarios\n");
for(i=0;i<n;i++)
{
    printf("\nEntre com o codigo do setor %d: ",i+1);
    scanf("%f",&setor[i*2+0]);
    printf("\nEntre com o salario do setor %d: ",i+1);
    scanf("%f",&setor[i*2+1]);

}
for(i=0;i<n;i++){
    printf("Codigo Setor\n");
    printf("%f\n",setor[i*2+0]);
    printf("Salario\n");
    printf("%f\n",setor[i*2+1]);

}
//ordena(n,*setor);
return 0;
}
/*void ordena(int n,float *setor){
     int troca = 1;
     int aux;
     int f = n;
     int i=0;
     while (troca == 1);
     {
           f= f - 1;
           troca=0;
           for (i=0; i < f ; i++)
           {
               if (setor[i] > setor[i+1])
               {
                        aux = setor[i];
                        setor[i] = setor[i-1];
                        setor[i-1]=aux;
                        troca = 1;
               }
           }
     }
}
*/
