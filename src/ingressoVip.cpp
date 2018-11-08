#include <iostream>

#include "ingresso.h"
#include "ingressoVip.h"

ingressoVip::ingressoVip(float valorBruto_, float adicional_, int imposto_):
//	valorBruto_ = valorBruto_ + adicional_;
	ingresso(valorBruto_+adicional_, imposto_),
	m_adicional (adicional_) {}


float ingressoVip::getAdicional(){
	return m_adicional;
}
