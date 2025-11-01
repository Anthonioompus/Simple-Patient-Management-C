#include <iostream>
#include <string>
using namespace std;

struct Pasien {
    string nama;
    string jenisPenyakit;
    string alamat;
    double biayaPerawatan;
};

int main() {
    int jumlahPasien;
    
    cout << "  SISTEM DATA PASIEN RUMAH SAKIT ANTHORMX" << endl;
    cout << "========================================" << endl;
    
    cout << "\nMasukkan jumlah pasien: ";
    cin >> jumlahPasien;
    
    Pasien dataPasien[jumlahPasien];
    
    for (int i = 0; i < jumlahPasien; i++) {
        cout << "\n--- DATA PASIEN KE-" << (i + 1) << " ---" << endl;
        
        cout << "Nama Pasien    : ";
        cin.ignore();
        getline(cin, dataPasien[i].nama);
        
        cout << "Jenis Penyakit : ";
        getline(cin, dataPasien[i].jenisPenyakit);
        
        cout << "Alamat         : ";
        getline(cin, dataPasien[i].alamat);
        
        cout << "Biaya Perawatan: Rp ";
        cin >> dataPasien[i].biayaPerawatan;
    }
    
    cout << "\n\n========================================" << endl;
    cout << "        DAFTAR SELURUH PASIEN ANTHORMX" << endl;
    cout << "========================================" << endl;
    
    double totalBiaya = 0;
    
    for (int i = 0; i < jumlahPasien; i++) {
        cout << "\nPasien ke-" << (i + 1) << endl;
        cout << "Nama           : " << dataPasien[i].nama << endl;
        cout << "Jenis Penyakit : " << dataPasien[i].jenisPenyakit << endl;
        cout << "Alamat         : " << dataPasien[i].alamat << endl;
        cout << "Biaya Perawatan: Rp " << dataPasien[i].biayaPerawatan << endl;
        cout << "----------------------------------------" << endl;
        
        totalBiaya += dataPasien[i].biayaPerawatan;
    }
    
    cout << "\n========================================" << endl;
    cout << "Total Biaya Seluruh Pasien: Rp " << totalBiaya << endl;
    cout << "========================================" << endl;
    
    return.0;
}