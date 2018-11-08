#ifndef _INGRESSO_H_
#define _INGRESSO_H_

class ingresso {
	protected:
		float m_valor;   //preço real do ingresso
		float m_valorBruto; //valor sem impostos
		int m_imposto; //em porcentagem
	public:
		ingresso (float, int);
		float getTotal ();
		float getBruto ();
		int getImposto();

};

#endif
