// BIBLIOTECAS
#include <iostream> // Funções de leitura e print do teclado
#include <fstream>  // Funções para abrir e fechar aequivos


using namespace std;

int main() {

	ofstream image; // abre o objeto

	image.open("PPM_Images2.ppm");

	if (image.is_open()) {
		//Placa jeader info

		image << "P3" << endl;
		image << "252 252" << endl; // image size
		image << "255" << endl;		// Set RGB max

		// ESCREVE NO ARQUIVO A IMAGEM DE UM "+" COM AS EXTREMIDADES VERMELHAS E A ÁREA INTERNA AZUL

		for (int y = 0; y < 252; y++) {
			for (int x = 0; x < 252; x++) {
				if ((x < 84 && y < 84) || (x > 168 && y > 168) ||(x > 168 && y < 84) || (x < 84 && y > 168)) {
					int r = 255, g = 0, b = 0;
					image << r << " " << g << " " << b << " ";
				}
				else {
					int r = 0, g = 0, b = 255;
					image << r << " " << g << " " << b << " ";
				}


			}
			image << endl;
		}



		// ESCREVE NO ARQUIVO A IMAGEM DIVIDIDA AO MEIO NA VERTICAL, ONDE A PARTE ESQUERDA É VERMELHA E A DIREITA É AZUL


		for (int y = 0; y < 250; y++) {
			for (int x = 0; x < 250; x++) {
				if (x < 125) {
					int r = 250, g = 0, b = 0;
					image << r << " " << g << " " << b << " ";
				}
				else {
					int r = 0, g = 0, b = 250;
					image << r << " " << g << " " << b << " ";
				}


			}
			image << endl;
		}

		// ESCREVE NO ARQUIVO A IMAGEM DIVIDIDA AO MEIO NA VERTICAL, ONDE A PARTE ESQUERDA É PRETA E A DIREITA É BRANCA

		for (int y = 0; y < 250; y++) {
			for (int x = 0; x < 250; x++) {
				if (x < 125) {
					image << 0 << " " << 0 << " " << 0 << " ";
				}
				else {
					image << 250 << " " << 250 << " " << 250 << " ";
				}

			}
			image<<endl;
		}

	}

	image.close();


	return 0;
}*/