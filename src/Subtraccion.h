#ifndef SUBTRACCION_H_
#define SUBTRACCION_H_

#include "Opcion.h"

class Subtraccion : public Opcion {
public:
	Subtraccion();
	virtual Entero ejecutar() override;
	virtual ~Subtraccion();
};

#endif
