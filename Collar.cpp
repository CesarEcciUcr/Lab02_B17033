#include "stdafx.h"
#include "Collar.h"


Collar::Collar()
{
	this->cantidad = rand() % 10 + 5;
	this->valor = rand() % 100 + 1;
	this->peso = rand() % 200 + 100;
}


Collar::~Collar()
{
}
