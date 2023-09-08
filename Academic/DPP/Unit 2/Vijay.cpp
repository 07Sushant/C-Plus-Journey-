#include <iostream>
using namespace std;

int main() {
    int M;
    cin >> M;

    int A[10][10], B[10][10], C[10][10];

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            C[i][j] = 0;
            for (int k = 0; k < M; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "The product of the two matrices is:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}


//Sushant