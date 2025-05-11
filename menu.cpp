#include <iostream>
#include <conio.h>
using namespace std;

int aray[32];
int n=5;
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

void dataArray(int aray[],int n){
  system("cls");
  cout << "Input " << n << " angka" << endl;
  for(int i = 0; i < n; i++) {
    cout << "Angka ke  " << (i + 1) << ": ";
    cin >> aray[i];
  }
getch();
}

void OutputArr(){
  system("cls");
  cout << "Berikut Array yang telah di input" << endl;
  for(int i = 0 ; i < n; i++){
    cout << aray[i] << " ";
  }
  getch();
}

void InsertionSort(int aray[], int n, bool ascending) {
  for (int i = 1; i < n; i++) {
    int temp = aray[i];
    int j = i - 1;
    while (j >= 0 && ((ascending && aray[j] > temp) || (!ascending && aray[j] < temp))) {
      aray[j + 1] = aray[j];
      j--;
    }
    aray[j + 1] = temp;
  }
}

void SortMenu() {
  system("cls");
  char pilihSort;
  cout << "Pilih metode pengurutan:\n";
  cout << "1. Ascending (Naik)\n";
  cout << "2. Descending (Turun)\n";
  cout << "Masukkan pilihan: ";
  pilihSort = getch();

  if (pilihSort == '1') {
    InsertionSort(aray, n, true);
    cout << "\nData berhasil diurutkan secara ASCENDING.";
  } else if (pilihSort == '2') {
    InsertionSort(aray, n, false);
    cout << "\nData berhasil diurutkan secara DESCENDING.";
  } else {
    cout << "\nPilihan tidak valid!";
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
    dataArray(aray,n);
    break;
   case '2':
    OutputArr();
    /* code */ 
    break;  
   case '3':
    SortMenu();
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