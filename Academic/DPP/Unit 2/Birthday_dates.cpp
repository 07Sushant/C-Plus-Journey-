#include <iostream>
using namespace std;

int main(){
    int date,month,year;
    cin>>date>>month>>year;
    
    int *ptr=&date;
    
    cout<<"The date is ";
    cout<<date<<"/"<<month<<"/"<<year<<endl;
    return 0;
}
