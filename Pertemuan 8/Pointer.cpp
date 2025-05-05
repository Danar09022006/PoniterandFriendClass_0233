#include <iostream
using namespace std;

int main()
{
    // dereferences
    int a =10;
    int b = 6;
    int y = 20;
    int *c = &a;
    cout << "Alamat memory : " << c << endl;
    cout << "Nilai dari c : " << *c << endl;
    c = &y;
    cout << "Alamat memory : " << c << endl;
    cout << "Nilai dari c : " << *c << endl;


    // references
    int &d = b;
    cout << "Nilai " << d << endl;
    cout << "references " << &d << endl;

    int f = 5;
    int g = f;
    
}

