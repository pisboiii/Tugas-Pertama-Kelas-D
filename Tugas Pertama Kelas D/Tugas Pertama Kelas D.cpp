#include <iostream>
using namespace std;

int main()
{//begin
	//Numeric nAlas, nTinggi, nLuas
	//display 'Masukkan Alasnya= '
	//accept nAlas
	//display 'Masukkan Tingginya= '
	//accept nTinggi
	//compute nLuas = 1/2 * nAlas * nTinggi
	//display 'Luasnya adalah = ' +nLuas

	int nAlas, nTinggi;
	double nLuas;
	cout << "Masukkan Alasnya= ";
	cin >> nAlas;
	cout << "Masukkan Tingginya= ";
	cin >> nTinggi;
	nLuas = 0.5 * nAlas * nTinggi;
	cout << "Luasnya Adalah= " << nLuas << endl;

	int panjang, lebar, tinggi;

		system("pause");
}//end