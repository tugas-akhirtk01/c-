#include <fstream>
#include <iostream>

using namespace std;


int main() {
char text [100];
int Age; char FileName[20];

	cout << "Enter text: "; cin >> text;
	cout << "\nEnter the name of the file you want to create: ";
	cin >> FileName;
	ofstream Students(FileName, ios::out);
	Students  << "\n" << text;
	cout << "\n\n";
	
return 0;
}