// Luas dan Keliling Lingkaran.cpp

#include <iostream>
#include <cmath> // Untuk menggunakan fungsi pow dan M_PI
#define _USE_MATH_DEFINES
#include <math.h>

// Mendefinisikan fungsi untuk menghitung luas lingkaran
double hitungLuasLingkaran(double radius) {
    return M_PI * pow(radius, 2);
}

// Mendefinisikan fungsi untuk menghitung keliling lingkaran
double hitungKelilingLingkaran(double radius) {
    return 2 * M_PI * radius;
}

int main() {
    // Mendeklarasikan variabel
    double radius;

    // Meminta pengguna memasukkan radius
    std::cout << "Masukkan panjang radius lingkaran: ";
    std::cin >> radius;

    // Memanggil fungsi untuk menghitung luas dan keliling
    double luas = hitungLuasLingkaran(radius);
    double keliling = hitungKelilingLingkaran(radius);

    // Menampilkan hasil
    std::cout << "\nHasil Perhitungan:\n";
    std::cout << "Luas Lingkaran     : " << luas << std::endl;
    std::cout << "Keliling Lingkaran : " << keliling << std::endl;

    return 0;
}
