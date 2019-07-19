#include <fstream>
#include <iostream>

using namespace std;


int main() {
char text [100];								//untuk mendeskripsikan karakter yang digunakan
char FileName[20];								//untuk mendeskripsikan karakter yang digunakan

	cout << "Masukkan Isi Text: "; cin >> text;				//menampilkan suatu kalimat/data ke layar
	cout << "\nMasukan Nama File Yang Ingin Kalian Buat: ";
	cin >> FileName;							//mendapatkan masukkan / input dari user
	ofstream Students(FileName, ios::out);					//untuk melakukan penulisan ke dalam file
	Students  << "\n" << text;
	cout << "\n\n";
	
return 0;
}
