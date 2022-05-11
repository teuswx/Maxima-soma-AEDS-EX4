#include "lista.h"

void Swap(Item *a, Item *b){
	Item aux;
	aux = *a;
	*a  = *b;
	*b  = aux;
}

void FLVazia(Lista *l){
	l->first = 0;
	l->last  = 0;
}

void LInsert(Lista *l, Item d){
	if (l->last >= MAXTAM){
		printf("LISTA CHEIA!\n");
	}else{
		l->vet[l->last] = d;
		l->last ++;
	}
}

void LRemove(Lista *l, Item d){
	bool ok = false;

	if(l->first == l->last)
		printf("LISTA VAZIA!\n");
	else{
		for(int i=l->first; i<l->last; i++)
			if(l->vet[i].val == d.val){
				Swap(&l->vet[i], &l->vet[i+1]);
				ok = true;	
			}
	
		if(ok)
			l->last --;
	}
}


void LImprime(Lista *l){
	for(int i=l->first; i<l->last; i++)
		printf("%d\t", l->vet[i].val);
	printf("\n");
}

void Maxsoma(Lista *l){
	int soma = 0, aux = 0, i = 0;
	
	if(l->vet[0].val <= 0){
		i++;
	}

    for( ; i < l->last; i++){
		
		
		
		soma += l->vet[i].val;
		printf("\n\n\n%d\n\n", soma);

		if(soma >= aux){
			aux = soma;
		}
	}

	printf("\n\nMaxima soma: %d\n\n", aux);
		

	
}