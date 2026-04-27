#include <iostream>
using namespace std;
class mahasiswa
{
   public:
    int nim;
    void showNim(){
        cout << "No Induk = "<<nim<<endl;
    }
};
int main (){
    mahasiswa Mhs{1}; //Object mhs
    Mhs.showNim(); //Member Access Operator

    mahasiswa &refMhs = Mhs; //Pointer Reference refMhs
    refMhs.nim = 2; //Member Access Operator
    Mhs.showNim();

    mahasiswa *pMhs = &Mhs; //Pointer Dereferene pMhs
    pMhs->nim = 3; //Arrow Operator
    pMhs->showNim();
    return 0;
}