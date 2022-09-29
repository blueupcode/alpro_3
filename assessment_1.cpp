#include <iostream>

using namespace std;

int main() {
  int index = 1;
  int jumlahPerulangan;

  // Memasukkan jumlah perulangan
  cout << "Masukkan jumlah perulangan: ";
  cin >> jumlahPerulangan;
  cout << "==============================" << endl;

  // Melakukan perulangan sejumlah angka yang dimasukkan
  while (index <= jumlahPerulangan) {

    // Memasukkan angka yang akan dibandingkan
    cout << "Perulangan angka ke-" << index << endl;

    // Menambah index 
    index++;
  }
}