#include "Division.h"

Division::Division() : Opcion("- Dividir."){
}

void Division::ejecutar(){
	this->leerOperandos();
	assert(Opcion::otroNumero != 0);
	consola.Escribir(
			"El resultado es " + consola.toString((double)unNumero / otroNumero));
}

Division::~Division() {
}

