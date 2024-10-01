#include <iostream>
#include <string>

using namespace std;

int gajiPokok(int jamKerja) {
    int gajiPokokPerJam = 7500;
    return jamKerja * gajiPokokPerJam;
}

int gajiLembur(int jamKerja) {
    if (jamKerja > 8) { //lembur= jam kerja > 8
        int lemburJam = jamKerja - 8;
        int gajiPokokPerJam = 7500;
        return lemburJam * (gajiPokokPerJam * 1.5);
    }
    return 0;
}

int gajiMakan(int jamKerja) {
    if (jamKerja >= 9) {
        return 10000;
    }
    return 0;
}

int gajiTransport(int jamKerja) {
    if (jamKerja >= 10) {
        return 13000;
    }
    return 0;
}

int main() {
    string nip, nama;
    int jamKerja;

    cout << "Tolong masukan identitas anda terlebih dahulu :)" << endl;
    cout << "-------------------------------" << endl;
    cout << "Masukkan NIP: ";
    cin >> nip;
    cout << "Masukkan Nama: ";
    cin.ignore();
    getline(cin, nama);
    cout << "Masukkan Jumlah Jam Kerja: ";
    cin >> jamKerja;

    int totalGajiPokok = gajiPokok(jamKerja);
    int totalGajiLembur = gajiLembur(jamKerja);
    int totalGajiMakan = gajiMakan(jamKerja);
    int totalGajiTransport = gajiTransport(jamKerja);

    int totalGaji = totalGajiPokok + totalGajiLembur + totalGajiMakan + totalGajiTransport;

    cout << "\n=== Rincian Gaji Karyawan PT. XYZ ===" << endl;
    cout << "NIP: " << nip << endl;
    cout << "Nama: " << nama << endl;
    cout << "Jam Kerja: " << jamKerja << " jam" << endl;
    cout << "-------------------------------" << endl;
    cout << "Gaji Pokok         : Rp " << totalGajiPokok << "/hari" << endl;
    cout << "Lembur             : Rp " << totalGajiLembur << "/hari" <<endl;
    cout << "Uang Makan         : Rp " << totalGajiMakan << "/hari" <<endl;
    cout << "Uang Transport     : Rp " << totalGajiTransport << "/hari" << endl;\
    cout << "-------------------------------" << endl;
    cout << "Total Gaji         : Rp " << totalGaji << "/hari" << endl;

    return 0;
}
