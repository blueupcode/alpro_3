#include <iostream>

using namespace std;

int main() {
  int index = 1;
  int angka, angkaTerbesar, angkaTerkecil, jumlahPerulangan;

  // Memasukkan jumlah perulangan
  cout << "Masukkan jumlah perulangan: ";
  cin >> jumlahPerulangan;
  cout << "==============================" << endl;

  // Melakukan perulangan sejumlah angka yang dimasukkan
  while (index <= jumlahPerulangan) {

    // Memasukkan angka yang akan dibandingkan
    cout << "Masukkan angka ke-" << index << ": ";
    cin >> angka;

    // Membandingkan dengan angka terbesar 
    if (angka > angkaTerbesar) {
      angkaTerbesar = angka;
    }

    // Membandingkan dengan angka terkecil 
    if (angka < angkaTerkecil){
      angkaTerkecil = angka;
    }

    // Menambah index 
    index++;
  }

  // Menampilkan hasil 
  cout << "==============================" << endl;
  cout << "Angka yang terbesar adalah: " << angkaTerbesar << endl;
  cout << "Angka yang terkecil adalah: " << angkaTerkecil << endl;
}