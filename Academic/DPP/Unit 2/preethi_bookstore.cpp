#include <iostream>
#include <vector>
using namespace std;

int main(){
    int size1;
    cin>>size1;
    
    int arr1[size1];
    for(int i=0; i<size1; i++){
        cin>>arr1[i];
    }
    
    int size2;
    cin>>size2;
    vector <int> final;
    
    for(int i=0; i<size2; i++){
        int temp;
        cin>>temp;
        
        bool in=false;
        for(int j=0; j<size1; j++){
            if(arr1[j]==temp) in=true;
        }
        
        if(in) final.push_back(temp);
    }
    
    if (final.size()>=1){
        for(int i=0; i<final.size(); i++){
            cout<<final[i]<<" ";
        }
    }
    else {
        cout<<"No common IDs found."<<endl;
    }
    
    return 0;
    
}

//adil
