// Buatlah sebuah program yang berisi 2 class dimana terdapat class Layang-Layang, Belah Ketupat.
// Di setiap class nya berisikan luas dan keliling serta input dan output.
// Setiap variable memiliki akses private, BangunDatar Belah Ketupat merupakan friend function keliling dari Layang-Layang, dan 
// semua class hanya dapat diakses menggunakan object.


#include <iostream>
#include <cmath>
using namespace std;

class BelahKetupat;
class LayangLayang
{
private:
    double d1, d2;
    double sisi1, sisi2;

public:
    void inputData()
        {
            cout << "=== Input Layang-Layang ===" << endl;
            cout << "Masukkan diagonal 1 (d1): ";
            cin >> d1;
            cout << "Masukkan diagonal 2 (d2): ";
            cin >> d2;
            cout << "Masukkan sisi 1        : ";
            cin >> sisi1;
            cout << "Masukkan sisi 2        : ";
            cin >> sisi2;
        }


    double hitungLuas()
    {
        return 0.5 * d1 * d2;
    }
    
        double hitungKeliling()
        {
            return 2 * (sisi1 + sisi2);
        }

};

class BelahKetupat
{
    
};