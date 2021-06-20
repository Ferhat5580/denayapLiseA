#include <iostream>
using namespace std;
int main()
{
int x, y, z;
cout << "Birinci sayiyi girin: ";
cin >> x;
cout << "Ikinci sayiyi girin: ";
cin >> y;
z = !(x ^ y);
cout << "Sonuc: " << z << endl;
return 0;
}
