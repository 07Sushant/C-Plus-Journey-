#include <iostream>     // std::cout, std::endl  
#include <iomanip>      // std::setw  
using namespace std;  
  
int main () {  
//  cout << setw(10)<<setiosflags(ios::left)<<"Hello";  
//  cout << 24 << endl;

    int p =1;
    int z= 0;
    int n = -1;
    cout<< showpos <<p<<'\t'<<z<<'\t'<<n<<'\t'<<'\n';
    cout<< noshowpos <<p<<'\t'<<z<<'\t'<<n<<'\t';

  return 0;  
}  