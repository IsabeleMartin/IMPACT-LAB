#include <iostream> //biblioteca utilizada para fazer fun��e de entrada e sa�da 

int Loop() {

	int valor;
	int meta = 50;
	int total = 0;
	int days = 0;

	std::cout << "insira o valor que ser� armazenado: ";
	std::cin >> valor;


	while (total < meta) {
		total += valor;
		std::cout << "Insira o valor que ser� armazenado: ";
		std::cin >> valor;
		days++;

	}

	std::cout << "Meta batida em " << days << "dias." << std::endl;
	return 0;
}