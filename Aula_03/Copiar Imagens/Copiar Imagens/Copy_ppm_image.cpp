#include <fstream>
#include <iostream>

using namespace std;


int main() {

	ifstream Image_read;
	Image_read.open("images/apollo.ppm");

	if (!Image_read) {
		cout << "Error read" << endl;

	}

	ofstream Image_write;
	Image_write.open("C:/Users/Usuario/source/repos/FOTOGRAFIA_COMPUTACIONAL_2024_Impact_Lab/Aula_03/Copiar Imagens/Copiar Imagens/images/output/apollo_copia.ppm");

	if (!Image_write)
		cout << "Error write" << endl;

	string type = "", width = "", heigth = "", RGBMax = "";

	Image_read >> type;
	Image_read >> width;
	Image_read >> heigth;
	Image_read >> RGBMax;

	Image_write << type << endl;
	Image_write << width << " " << heigth << endl;
	Image_write << RGBMax << endl;

	string r = "", g = "", b = "";

	while (!Image_read.eof()) {
		Image_read >> r;
		Image_read >> g;
		Image_read >> b;


		Image_write << r << " " << g << " " << b << " " << endl;
	}

	Image_read.close();
	Image_write.close();

	return 0;

}