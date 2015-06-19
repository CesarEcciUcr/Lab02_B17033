#include "stdafx.h"
#include "Corona.h"


Corona::Corona()
{
	this->cantidad = rand() % 10 + 5;
	this->valor = rand() % 100 + 1;
	this->peso = rand() % 200 + 100;
}


Corona::~Corona()
{

}
