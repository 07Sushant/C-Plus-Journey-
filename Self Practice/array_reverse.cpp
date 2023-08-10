#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int* array = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << array[i] << " ";
    }

    delete[] array;
    
    return 0;
}





# include <stdio.h>
int main
()
{
    int a[20], i, b;
    scanf("%d",&b);
    printf("Enter the element of array: ");
    for(i = 0; i<=b; i++)
}