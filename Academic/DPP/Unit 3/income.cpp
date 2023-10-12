#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n;
    float monthly_income;

    cin >> n;

    if (n > 50) {
        cout << "Exceeding limit!" << endl;
        return 1;
    }

    ofstream income_file("income.txt");
    std::vector<float> monthly_incomes(n);

    if (!income_file) {
        cerr << "Failed to open the file for writing." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cin >> fixed >> setprecision(2) >> monthly_income; 
        monthly_incomes[i] = monthly_income;
        income_file << monthly_income << endl;
    }

    income_file.close();

    ifstream income_file_read("income.txt");

    if (!income_file_read) {
        cerr << "Failed to open the file for reading." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        income_file_read >> monthly_income;

        float annual_income = monthly_income * 12;

        cout << fixed << setprecision(1) << annual_income << endl;
    }

    income_file_read.close();

    return 0;
}
