// ENTRADA E SAÍDO DO CONSOLE E CONDICIONAIS IF-ELSE e SWITCH
#include <iostream>

void while_f() {

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
}

void for_fu() {
	int fibonatti = 0;
	int num, a = 0, b = 1;

	std::cout << "Num: ";
	std::cin >> num;


	for (int i = 1; i < num; i++) {
		fibonatti = a + b;
		a = b;
		b = fibonatti;
	}
	std::cout << " fibonatti de " << num << " e " << fibonatti << std::endl;
}

int main() {

	int idade;
	// Write something to console
	std::cout << "Hello" << std::endl;

	// Read something to console
	std::cout << "Digite a idade: ";
	std::cin >> idade;

	if (idade < 18 && idade > 0) {
		std::cout << "Você é menor de idade." << std::endl; // Escreve a string e pula uma linha "\n"
	}
	else if (idade >= 18 && idade < 60) {
		std::cout << "Você é adulto." << std::endl;
	}
	else {
		std::cout << "Você é idoso." << std::endl;
	}


	int op;
	std::cout << "Escolha 1, 2 ou 3: ";
	std::cin >> op;

	switch (op) {
	case 1:
		while_f();
		break;
	case 2:
		for_fu();
		break;
	case 3:
		std::cout << "Op 3" << std::endl;
		break;
	default:
		std::cout << "Op n existe" << std::endl;
		break;
	}
}

