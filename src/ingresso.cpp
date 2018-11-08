#include <iostream>

#include "ingresso.h"

ingresso::ingresso(float valorBruto_, int imposto_){
	m_imposto = imposto_;
	m_valorBruto = valorBruto_;
	m_valor = (valorBruto_ + ((float)imposto_/100)*valorBruto_);

}

float ingresso::getTotal(){
	return m_valor;
}


float ingresso::getBruto(){
	return m_valorBruto;
}


int ingresso::getImposto(){
	return m_imposto;
}
