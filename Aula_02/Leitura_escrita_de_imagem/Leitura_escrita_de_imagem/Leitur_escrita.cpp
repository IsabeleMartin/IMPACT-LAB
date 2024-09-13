#include <iostream> // Funções de leitura e print do teclado
#include <fstream>  // Funções para abrir e fechar aequivos


using namespace std;

int main() {

	ifstream read_image; // abre o objeto
	ofstream write_image;

	read_image.open("image/landscape.ppm");

	if (!read_image) {
		cout << "Erro ao abrir o arquivo de entrada." << endl;
		return 1; // Encerra o programa em caso de erro
	}

	write_image.open("image/PPM_Imagemnew.ppm");
	if (!write_image) {
		cout << "Erro ao abrir o arquivo de entrada." << endl;
		return 1; 
	}


	string tipo = "", alt = "", lar = "", rgb = "";
	read_image >> tipo;
	read_image >> alt;
	read_image >> lar;
	read_image >> rgb;

	write_image << tipo << endl;
	write_image << alt << " " << lar << endl;
	write_image << rgb << endl;

	int intred = 0, intgreen = 0, intblue = 0;
	int cont = 0;

	while (read_image >> intred >> intgreen >> intblue) {

		write_image << intred << " " << intgreen << " " << intblue << " " << endl;

		

		cout << " Loop " << cont << " "<< intred << " " << intgreen << " " << intblue << " " << endl;

		
	}

	read_image.close();
	write_image.close();

	return 0;
}
