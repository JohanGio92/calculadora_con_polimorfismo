#include "Multiplicacion.h"

Multiplicacion::Multiplicacion() : Opcion("- Multiplicar."){
}

void Multiplicacion::ejecutar(){
	this->leerOperandos();
	consola.Escribir("El resultado es " + consola.toString(unNumero * otroNumero));
}

Multiplicacion::~Multiplicacion() {
}

