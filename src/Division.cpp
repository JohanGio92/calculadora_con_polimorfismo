#include "Division.h"

Division::Division() : Opcion("- Dividir."){
}

Entero Division::ejecutar(){
	assert(Opcion::otroNumero != 0);
	return Opcion::unNumero / Opcion::otroNumero;
}

Division::~Division() {
}

