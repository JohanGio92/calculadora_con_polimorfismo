#ifndef MULTIPLICACION_H_
#define MULTIPLICACION_H_

#include "Opcion.h"

class Multiplicacion : public Opcion{
public:
	Multiplicacion();
	virtual Entero ejecutar() override;
	virtual ~Multiplicacion();
};

#endif
