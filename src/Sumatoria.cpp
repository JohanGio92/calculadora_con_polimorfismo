#include "Sumatoria.h"

Sumatoria::Sumatoria() : Opcion("- Sumar."){
}

void Sumatoria::ejecutar() {
	this->leerOperandos();
	consola.Escribir("El resultado es " + consola.toString(unNumero + otroNumero));
}

Sumatoria::~Sumatoria() {
}

