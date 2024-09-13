#include <iostream> //biblioteca utilizada para fazer funçõe de entrada e saída 

int Loop() {

	int valor;
	int meta = 50;
	int total = 0;
	int days = 0;

	std::cout << "insira o valor que será armazenado: ";
	std::cin >> valor;


	while (total < meta) {
		total += valor;
		std::cout << "Insira o valor que será armazenado: ";
		std::cin >> valor;
		days++;

	}

	std::cout << "Meta batida em " << days << "dias." << std::endl;
	return 0;
}