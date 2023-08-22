// You are using GCC
#include <iostream>
using namespace std;

int factorial(int n) {
        if (n == 0 || n == 1) {
                    return 1;
        }
            return n * factorial(n - 1);
}

int main() {
        int num;
                cin >> num;
                
                    int result = factorial(num);
                        cout << num  << result << endl;
                        
                            return 0;
}
