#include <fstream>
#include <iostream>

using namespace std;


int main() {
char text [100];
int Age; char FileName[20];

	cout << "Masukkan Isi Text: "; cin >> text;
	cout << "\nMasukan Nama File Yang Ingin Kalian Buat: ";
	cin >> FileName;
	ofstream Students(FileName, ios::out);
	Students  << "\n" << text;
	cout << "\n\n";
	
return 0;
}
