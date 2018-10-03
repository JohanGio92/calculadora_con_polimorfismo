#include "Sumatoria.h"

Sumatoria::Sumatoria() : Opcion("- Sumar."){
}

Entero Sumatoria::ejecutar() {
	return Opcion::unNumero + Opcion::otroNumero;
}

Sumatoria::~Sumatoria() {
}

