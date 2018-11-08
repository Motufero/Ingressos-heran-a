#ifndef _INGRESSOVIP_H_
#define _INGRESSOVIP_H_

#include "ingresso.h"

class ingressoVip: public ingresso{
	private:
		float m_adicional;
	public:
		ingressoVip (float, float, int);
		float getAdicional();

};

#endif
