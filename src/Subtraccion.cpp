#include "Subtraccion.h"

Subtraccion::Subtraccion() : Opcion("- restar.") {
}

void Subtraccion::ejecutar() {
	this->leerOperandos();
	consola.Escribir("El resultado es " + consola.toString(unNumero - otroNumero));
}

Subtraccion::~Subtraccion() {
}

