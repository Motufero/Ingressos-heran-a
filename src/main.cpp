#include <iostream>

#include "ingresso.h"
#include "ingressoVip.h"

int main(){
	ingresso I1 (20, 5);

	std::cout << " Atributos do ingresso comun: " << std::endl;
	std::cout << "Valor Total: "<< I1.getTotal() << std::endl;
	std::cout << "Imposto: "<<I1.getImposto()<< "%" <<std::endl;
	std::cout << "Valor bruto: "<<I1.getBruto()<<std::endl;

	ingressoVip I2 (20, 10, 5);

	std::cout << " Atributos do ingresso VIP: " << std::endl;
    std::cout << "Valor Total: "<< I2.getTotal() << std::endl;
    std::cout << "Imposto: "<<I2.getImposto()<< "%" <<std::endl;
    std::cout << "Valor bruto: "<<I2.getBruto()<<std::endl;
	std::cout << "Adicional: "<<I2.getAdicional()<<std::endl;

	return 0;
}
