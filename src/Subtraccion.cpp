#include "Subtraccion.h"

Subtraccion::Subtraccion() : Opcion("- restar.") {
}

Entero Subtraccion::ejecutar() {
	return Opcion::unNumero - Opcion::otroNumero;
}

Subtraccion::~Subtraccion() {
}

