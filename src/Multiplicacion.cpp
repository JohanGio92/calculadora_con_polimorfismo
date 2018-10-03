#include "Multiplicacion.h"

Multiplicacion::Multiplicacion() : Opcion("- Multiplicar."){
}

Entero Multiplicacion::ejecutar(){
	return Opcion::unNumero * Opcion::otroNumero;
}

Multiplicacion::~Multiplicacion() {
}

