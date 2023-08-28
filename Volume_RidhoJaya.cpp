#include <iostream>
using namespace std;

int main()  {
    int p,l,t,v;
    string dimensi;
      cout << "Masukan panjang:";
       cin >> p;
      cout << "Masukan lebar:";
       cin >> l;
      cout << "Masukan tinggi";
       cin >> t;
      cout << "Masukan satuan (mm/cm/m):";
       cin >> dimensi;
      cout <<endl;
      v = p*l*t;
      cout << "Volume balok" <<v<<""<<dimensi<<"3";
       return 0;
}