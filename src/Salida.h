#ifndef SALIDA_H_
#define SALIDA_H_

#include "Opcion.h"

class Salida : public Opcion{
private:
	bool salida;
public:
	Salida();
	void ejecutar();
	bool cerrar();
	virtual ~Salida();
};

#endif
