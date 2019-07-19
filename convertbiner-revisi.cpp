#include<iostream>
using namespace std;

int main()
{
    int a, b;                                                       //mendeklarasikan tipe data
    printf("jumlah karakter pesan rahasia: ");                      //untuk menampilkan jumlah keluaran data
    scanf("%d", &a);                                                //untuk membaca masukkan data

    char tulisan[a];                                                //untuk mendeskripsikan karakter yang digunakan

    printf("Masukkan %d karakter huruf : ", a);                     //untuk menampilkan jumlah keluaran data
    //scanf("%d", &a);

    for(b = 0; b < a + 1; b++)
    {
        scanf("%c", &tulisan[b]);
    }

    for(b = 0; b < a + 1; b++)
    {
        if(tulisan[b]=='a')  {printf("00001 ");}
        else if(tulisan[b] == 'b'){printf("00010 ");}
        else if(tulisan[b] == 'c'){printf("00011 ");}
        else if(tulisan[b] == 'd'){printf("00100 ");}
        else if(tulisan[b] == 'e'){printf("00101 ");}
        else if(tulisan[b] == 'f'){printf("00110 ");}
        else if(tulisan[b] == 'g'){printf("00111 ");}
        else if(tulisan[b] == 'h'){printf("01000 ");}
        else if(tulisan[b] == 'i'){printf("01001 ");}
        else if(tulisan[b] == 'j'){printf("01010 ");}
        else if(tulisan[b] == 'k'){printf("01011 ");}
        else if(tulisan[b] == 'l'){printf("01100 ");}
        else if(tulisan[b] == 'm'){printf("01101 ");}
        else if(tulisan[b] == 'n'){printf("01110 ");}
        else if(tulisan[b] == 'o'){printf("01111 ");}
        else if(tulisan[b] == 'p'){printf("10000 ");}
        else if(tulisan[b] == 'q'){printf("10001 ");}
        else if(tulisan[b] == 'r'){printf("10010 ");}
        else if(tulisan[b] == 's'){printf("10011 ");}
        else if(tulisan[b] == 't'){printf("10100 ");}
        else if(tulisan[b] == 'u'){printf("10101 ");}
        else if(tulisan[b] == 'v'){printf("10110 ");}
        else if(tulisan[b] == 'w'){printf("10111 ");}
        else if(tulisan[b] == 'x'){printf("11000 ");}
        else if(tulisan[b] == 'y'){printf("11001 ");}
        else if(tulisan[b] == 'z'){printf("11010 ");}
        else if(tulisan[b] == ' '){printf("-  ");}
    }

}


