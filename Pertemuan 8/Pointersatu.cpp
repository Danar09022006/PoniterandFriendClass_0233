#include <iostream>
using namespace std;

class mahasiswa
{
public:
    int nim;
    void showNim()
    {
        cout << "No Induk = " << nim << endl;

    }
};
int main()
{
    
    
    

    mahasiswa &refmhs = mhs; // pointer reference reMhs
    refmhs.nim = 2;
    mhs.showNim();

    mahasiswa *pMhs =&mhs; // pointer dereference pMhs
    pMhs->nim = 3; // arrow operator
    pMhs->showNim();
    return 0;

}