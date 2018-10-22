#include <stdio.h>
#include <stdlib.h>

#define N 50 /* número máximo de elementos */


struct lista {
float info;
struct lista* prox;
};


typedef struct lista Lista;
/* estrutura da pilha */
struct pilha {
Lista* prim; /* aponta para o topo da pilha */
};
typedef struct pilha Pilha;

int pilha_vazia(Pilha* p){
if (p->prim == NULL){
    return 1;
}else{
return 0;}

}

float pilha_pop (Pilha* p)
{
Lista* t;
float v;
if (pilha_vazia(p)) { printf("Pilha vazia.\n");
exit(1); } /* aborta programa */
t = p->prim;
v = t->info;
p->prim = t->prox;
free(t);
return v;
}

Pilha* pilha_cria (void)
{
Pilha* p = (Pilha*) malloc(sizeof(Pilha));
p->prim = NULL; /* inicializa com zero elementos */
return p;
}

void pilha_push(Pilha* p,float v)
{
	Lista* n=(Lista*) malloc(sizeof(Lista));
	n->info=v;
	n->prox=p->prim;
	p->prim=n;
}
void pilha_imprimi(Pilha* p){
 Lista *q;
 for(q=p->prim;q!=NULL;q=q->prox){

    printf("%f\n",q->info);
 }
}
void imprimi(Pilha* p){
/*transfere elementos para pilha auxiliar*/
Pilha* aux=pilha_cria();
while(!pilha_vazia(p))
{
    pilha_push(aux,pilha_pop(p));
}
/*transfere de volta imprimindo valores*/
while(!pilha_vazia(aux))
{
    float v=pilha_pop(aux);
    printf("%f\n",v);
    pilha_push(p,v);
}
pilha_libera(aux);
}
void pilha_libera(Pilha *p){

Lista* q=p->prim;
while(q!=NULL){
    Lista* t=q->prox;
    free(q);
    q=t;
}
free(p);

}
int main (){
    /* IMPLEMENTAÇÃO DE PILHA COM LISTA ENCADEADA*/

    Pilha *p;
    p= pilha_cria();
    pilha_push(p,10);
    pilha_push(p,15);
    pilha_push(p,20);
    pilha_push(p,25);

    float v = pilha_pop(p);
    printf("%f\n", v);
    pilha_imprimi(p);
    imprimi(p);
    }
