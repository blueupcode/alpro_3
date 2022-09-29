#include <iostream>

using namespace std;

int main() {
  int index = 1;
  int jumlahPerulangan = 10;
  int faktorPengali;

  // Memasukkan jumlah perulangan
  cout << "Masukkan angka pengali: ";
  cin >> faktorPengali;
  cout << "==============================" << endl;

  // Melakukan perulangan sejumlah angka yang dimasukkan
  while (index <= jumlahPerulangan) {

    // Menampilkan hasil perkalian
    cout << index << " * " << faktorPengali << " = " << index * faktorPengali << endl;

    // Menambah index 
    index++;
  }
}