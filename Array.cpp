#include <iostream>
using namespace std;

int main(){
//Deklarasi Array dengan inisialisasi
int angka[5] = {10, 20, 30, 40, 50};
//deklarasi tanpa inisialisasi
int datamu[5];
int x;
//cara membaca array dataku
cout << "Data ke - 3 : " << dataku[2] << endl;

//Operasi Matematika 
x = dataku[2]*3;
//cara menulis ata mengisi array
dataku[2] = 600;
cout << "Data ke - 3 yang baru : " << dataku[2] << endl;

//mengisi array datamu satu per satu
cout << "Data Index ke - 0 : ";
cin >> dataku[0];
cout << "Data Index ke - 1 : "; 
cin >> dataku[1];
cout << "Data Index ke - 2 : ";
cin >> dataku[2];
cout << "Data Index ke - 3 : ";
cin >> dataku[3];
cout << "Data Index ke - 4 : ";
cin >> dataku[4];

//Tampilkan array datamu satu per satu 
cout << "Data ke - 1 : " << dataku[0] << endl;
cout << "Data ke - 2 : " << dataku[1] << endl;
cout << "Data ke - 3 : " << dataku[2] << endl;
cout << "Data ke - 4 : " << dataku[3] << endl;
cout << "Data ke - 5 : " << dataku[4] << endl;

cout << endl;

}