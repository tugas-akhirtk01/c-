#include <iostream>
using namespace std;

int main()
{
   int i, x;
   char str[100];

   cout << "silahkan masukkan kalimat:\t";
   cin >> str;

   cout << "\nsilahkan pilih salah satu:\n";
   cout << "1 = Enkripsi.\n";
   cout << "2 = Dekripsi.\n";
   cin >> x;

   switch(x)
   {

      case 1:
         for(i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] + 3; 

         cout << "\nEnkripsi kalimat: " << str << endl;
         break;

      
      case 2:
         for(i = 0; (i < 100 && str[i] != '\0'); i++)
         str[i] = str[i] - 3; 

      cout << "\nDekripsi kalimat: " << str << endl;
      break;

      default:
         cout << "\nError!!!\n";
   }
   return 0;
}