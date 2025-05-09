#include <iostream>
#include <conio.h>
using namespace std;

int aray[5];

void ingfo(){
  system("cls");
  cout<<"Indonesia Jaya,Poliban";
  getch();
}
void dMenu(){
system("cls");
cout<<"Aplikasi Tampilan Menu"<<"\n";       
cout<<"1. Input Data Array"<<"\n";            
cout<<"2. Output Data Array"<<"\n";            
cout<<"3. Insertion Sort"<<"\n";           
cout<<"4. Informasi"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        
}
void mPertama(string pesan){
system("cls");
cout<<"hallo saya menu "<<pesan;
getch();
}

void dataArray(int aray[]){
  system("cls");
  cout << "Input 5 angka" << endl;
  for(int i = 0; i < 5; i++) {
    cout << "Angka ke  " << (i + 1) << ": ";
    cin >> aray[i];
  }
getch();
}

int main() {
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    dataArray(aray);
    break;
   case '2':
    mPertama("ke- dua");
    /* code */ 
    break;  
   case '3':
    mPertama("ke- tiga");
    /* code */
    break;  
   case '4':
    ingfo();
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak ada";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}