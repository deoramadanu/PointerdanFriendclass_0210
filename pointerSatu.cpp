#include <iostream>
using namespace std;

int main()
{    //deference
    int a = 10;
    int b = 6;
    int y = 20;
    int *c = &a; //aristik c
    cout << "Alamat memori : " << c << endl;
    cout << "Nilai dari c : " << *c << endl;
    c = &y;
    cout << "Alamat memori : " << c << endl;
    cout << "Nilai dari c : " << *c << endl;
}
