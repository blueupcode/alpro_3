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

    // Menampilkan hasil perulangan
    cout << "Perulangan ke-" << index << endl;

    // Menambah index 
    index++;
  }
}