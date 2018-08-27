#include<stdio.h>

int main()
{
int m[3][3];
int i,j,n=3,num;
//leitura da matriz
for(i=0;i<n;i++)
    for(j=0;j<n;j++){
    printf("\nEntre com o elemento(%d-%d): ",i,j);
    scanf("%d",&m[i][j]);
    }
    //mostra a matriz
    printf("\n Esta e a matriz lida\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%6d",m[i][j]);
        }
        printf("\n");
    }
    //Solicita o elemento de busca
        printf("\nEntre com o numero de busca: ");
        scanf("%d",&num);
        busca(m,num);
        printf("\n");
        return 0;
}
void busca(int m[][3],int num){
int i,j,achou=0;
for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        {
            if(m[i][j]==num){
                printf("\n a Posiçao do numero procurado eh: %d-%d\n",i,j);
                achou=1;

            }
        }
}
if(achou==0){

    printf("\nNao achou esse numero na Matriz");
}
}
