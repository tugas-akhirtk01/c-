#include <iostream>
#include <iostream>
#include <conio.h>
using namespace std;

int pilihan;
string text;

int main()

 {    
   string username;    
   int password;    
   int i;    
   cout << "------------------------------------------\n";    
   cout << "Selamat Datang Di Aplikasi Saya Silahkan Login \n";    
   cout << "------------------------------------------\n\n";           
   string user ="project";    
   int pass = 12345;    
   int login=0;    
   i = 1;    
   
   
   do {        
       cout << "Username : "; cin >> username;        
       cout << "Password : "; cin >> password;        
       if (username ==user && password == pass) {            
           cout << "\n--------------------\n";            
           cout << "Anda Berhasil Login" << endl;            
           cout << "--------------------\n\n";            
           i=4;            
           login=1;        } 
		   
       else {            
           cout << "\n\n";            
           cout << "Maaf ID & PASSWORD Salah!" << endl;                         
		   cout << "\n\n";            
           i = i +1; 		   
       }   
    }while (i <= 3);       
    if(login != 1){
       cout<<"Anda Telah 3x Memasukan ID & PASSWORD Yang Salah\n";       
       cout << "Mohon Maaf Akun Anda Kami Blockir, Terima Kasih..";      
	   }  
	pilihan:
 cout << "Daftar bahasa pemrograman:\n";
 cout <<"\n1. Enkripsi \n2. Dekripsi\n";

 ulangi:

 cout << "Masukan pilihan anda (1-3): ";

 cin >> pilihan;


 switch(pilihan){
  case 1:
   {
    int a, b;
    printf("masukkan jumlah karakter pesan rahasia: ");
    scanf("%d", &a);

    char text[a];

    printf("Masukkan %d karakter huruf : ", a);
    //scanf("%d", &a);

    for(b = 0; b < a + 1; b++)
    {
        scanf("%c", &text[b]);
    }

    for(b = 0; b < a + 1; b++)
    {
        if(text[b]=='a')  {printf("00001 ");}
        else if(text[b] == 'b'){printf("00010 ");}
        else if(text[b] == 'c'){printf("00011 ");}
        else if(text[b] == 'd'){printf("00100 ");}
        else if(text[b] == 'e'){printf("00101 ");}
        else if(text[b] == 'f'){printf("00110 ");}
        else if(text[b] == 'g'){printf("00111 ");}
        else if(text[b] == 'h'){printf("01000 ");}
        else if(text[b] == 'i'){printf("01001 ");}
        else if(text[b] == 'j'){printf("01010 ");}
        else if(text[b] == 'k'){printf("01011 ");}
        else if(text[b] == 'l'){printf("01100 ");}
        else if(text[b] == 'm'){printf("01101 ");}
        else if(text[b] == 'n'){printf("01110 ");}
        else if(text[b] == 'o'){printf("01111 ");}
        else if(text[b] == 'p'){printf("10000 ");}
        else if(text[b] == 'q'){printf("10001 ");}
        else if(text[b] == 'r'){printf("10010 ");}
        else if(text[b] == 's'){printf("10011 ");}
        else if(text[b] == 't'){printf("10100 ");}
        else if(text[b] == 'u'){printf("10101 ");}
        else if(text[b] == 'v'){printf("10110 ");}
        else if(text[b] == 'w'){printf("10111 ");}
        else if(text[b] == 'x'){printf("11000 ");}
        else if(text[b] == 'y'){printf("11001 ");}
        else if(text[b] == 'z'){printf("11010 ");}
        else if(text[b] == ' '){printf("-  ");}
		
    }

}

  break;
  case 2:
   text="Anda memilih Pemrograman PHP";
  break;
  default:
   goto ulangi;
 }

 cout << text;
}