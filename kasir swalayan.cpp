#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  int kode_barang;
  string nama_barang;
  int jumlah_barang;
  int harga_satuan;
  float total_harga, uang_bayar, kembalian;

  // Menampilkan judul program
  cout << "Program Kasir Sederhana" << endl;

  // Input kode barang
  cout << "Masukkan kode barang: ";
  cin >> kode_barang;

  // Input nama barang
  cout << "Masukkan nama barang: ";
  cin >> nama_barang;

  // Input jumlah barang
  cout << "Masukkan jumlah barang: ";
  cin >> jumlah_barang;

  // Input harga satuan
  cout << "Masukkan harga: ";
  cin >> harga_satuan;

  // Menghitung total harga
  total_harga = jumlah_barang * harga_satuan;

  // Input uang bayar
  cout << "Masukkan uang bayar: ";
  cin >> uang_bayar;

  // Menghitung kembalian
  kembalian = uang_bayar - total_harga;

  // Menampilkan hasil perhitungan
  cout << "Total harga: Rp" << total_harga << endl;
  cout << "Uang bayar: Rp" << uang_bayar << endl;
  cout << "Kembalian: Rp" << kembalian << endl;

  return 0;
}
