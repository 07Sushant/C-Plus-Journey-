#include <iostream>
#include <fstream>

using namespace std;

class student {
    char name[30];
    int roll_no;
    float marks;

public:
    void getdata() {
        cout << "Enter name: ";
        cin.ignore(); .
        cin.getline(name, 30); // Use getline to read the entire name.
        cout << "Enter rollno: ";
        cin >> roll_no;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void putdata() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    student ob1, ob2;
    ob1.getdata();
    
    fstream file;
    file.open("data", ios::in | ios::out | ios::binary); // Open in binary mode.

    if (!file) {
        cerr << "Error opening the file!" << endl;
        return 1;
    }

    file.write(reinterpret_cast<char*>(&ob1), sizeof(ob1));
    file.seekg(0); // Reset the file pointer to the beginning of the file.
    file.read(reinterpret_cast<char*>(&ob2), sizeof(ob2));

    ob2.putdata();

    file.close();

    return 0;
}
