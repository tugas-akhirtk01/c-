#include <iostream>
#include <fstream>
#include <string.h>
#include <cstring>


using namespace std;

int mod(int x, int y);
void encryption(char input[], int key);
void decryption(char input[], int key);

int main() {
	string temp = "";		//untuk mencetak file
	string dir = "";		//untuk memasukan directory file
	ifstream myfile;		//untuk membaca file

	int key = 0;			//kunci untuk enkripsi dan dekripsi

	cout << "Shift Cipher" << endl << endl;

	cout << "masukan nama file/directory : ";
	getline(cin, dir);
	cout << "masukkan kunci : ";
	cin >> key;


	myfile.open (dir.c_str());

	if(myfile.is_open()) {
		while(!myfile.eof()) {
			getline(myfile, temp, '\0');
			cout << temp;
		}
	}
	cout << endl;

	myfile.close();

	char* c = new char[temp.length()+1];
	memcpy(c, temp.c_str(), temp.length()+1);

	cout << endl;
	
	cout << "konversi ke char ..." << endl;
	cout << endl;

	cout << "hasil enkripsi : "  << endl;
	encryption(c, key);
	cout << c;
	cout << endl;
	cout << "hasil dekripsi : " << endl;
	decryption(c, key);
	cout << c;
	cout << endl;
	return 0;
}

//Used Functions
int mod(int x, int y) {
	return ((x % y) + y) % y;
}
void encryption(char input[], int key) {
	for(int i = 0; i < 200; i++) {
		if(input[i] != '\0') {
			char buffer;
			if(input[i] >= 'A' && input[i] <= 'Z') {
				buffer = mod((int)((input[i] - 'A') + key), 26);
				input[i] = buffer + 'A';
			}
			if(input[i] >= 'a' && input[i] <= 'z') {
				buffer = mod((int)((input[i] - 'a') + key), 26);
				input[i] = buffer + 'a';
			}
			else {
				continue;
			}
		}
		else {
			continue;
		}
	}
}
void decryption(char input[], int key) {
	for(int i = 0; i < 200; i++) {
		if(input[i] != '\0') {
			char buffer;
			if(input[i] >= 'A' && input[i] <= 'Z') {
				buffer = mod((int)((input[i] - 'A') - key), 26);
				input[i] = buffer + 'A';
			}
			if(input[i] >= 'a' && input[i] <= 'z') {
				buffer = mod((int)((input[i]- 'a') - key), 26);
				input[i] = buffer + 'a';
			}
			else {
				continue;
			}
		}
		else {
			continue;
		}
	}
}
