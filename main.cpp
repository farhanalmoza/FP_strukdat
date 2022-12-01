/*
 * jika ingin menambahkan library, silakan letakkan di bawah komentar
 * yang sesuai dengan nama masing-masing library
 * agar tidak terjadi konflik
 */

// farhan library
#include "iostream"
#include <string.h>
// end farhan library

// kuncoro library

// end kuncoro library

// azka library

// end azka library

using namespace std;

// inisialisasi node beserta variabel yang dibutuhkan
struct node {
    int kode_komik, tahun;
    char judul[50], penerbit[50], pengarang[50];
    int height;
    struct node *left, *right;
};

typedef struct node *mynode;

// ================== START INSERT ==================

// =================== END INSERT ===================


// ================== START SHOW ALL ==================

// =================== END SHOW ALL ===================


// ================== START DELETE ==================

// =================== END DELETE ===================


// ================== START SEARCH ==================

// =================== END SEARCH ===================


// FUNGSI MAIN
int main() {
    int pilihan;
    
    cout << "===============================" << endl;
	cout << "=== Program Pendataan Komik ===" << endl; 
	cout << "===============================" << endl << endl;
	
	cout << "DISUSUN OLEH KELOMPOK 5 " << endl;
	cout << "Azka Avicenna Rasjid	[20081010115]" << endl;
	cout << "Farkhan			[20081010060]" << endl;
	cout << "Kuncoro Ariadi		[20081010096]" << endl << endl;
	
    cout << "Pilihan menu yang tersedia : " << endl;
    cout << "1. Tambah Komik" << endl;
    cout << "2. Tampil Komik di Gudang" << endl;
    cout << "3. Cari Komik di Gudang" << endl;
    cout << "4. Hapus Komik di Gudang" << endl;
    cout << "5. Keluar" << endl << endl;
    cout << ">> Masukkan Pilihan : "; cin >> pilihan;
    
    return 0;
}