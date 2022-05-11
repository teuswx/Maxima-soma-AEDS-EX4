#include "lista.h"

int main(){

	Lista l;
	Item aux;

	FLVazia(&l);

	aux.val = 10;
	LInsert(&l, aux);
	aux.val = -5;
	LInsert(&l, aux);
	aux.val = 8;
	LInsert(&l, aux);
    aux.val = -10;
	LInsert(&l, aux);

	LImprime(&l);
    Maxsoma(&l);


	return 0;
}
