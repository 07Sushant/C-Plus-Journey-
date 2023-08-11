/*#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout<<"a";
    cout<<"b"<<ends;
    cout<< "c"<< endl;
    return 0;
}

int main(){
    cout<< setfill('x')<< setw(10);
    cout<< 24 <<endl;
    return 0;
}*/

#include <iostream>     // std::cout, std::endl  
#include <iomanip>      // std::setfill, std::setw  
using namespace std;  
  
int main () {  
  cout << setfill ('x') << setw (10);  
  cout << 24 << endl;  
  return 0;  
}  