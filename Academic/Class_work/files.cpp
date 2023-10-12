// #include <iostream>
// #include <fstream>

// int main()
// {
//     float height[4] = {17.5, 15.0, 3.8, 5.0};
//     ofstream outfile;
//     outfile.open("abc");
//     outfile.write((char *)height, sizeof(height));
//     outfile.close();

//     float p[4];
//     ifstream infile;
//     infile.open("abc");
//     infile.read((char *)p, 32);
//     cout << p[0] << p[1];

//     return 0;
// }



#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    float height[4] = {17.5, 15.0, 3.8, 5.0};
    ofstream outfile;
    outfile.open("abc.txt", ios::binary);
    outfile.write(reinterpret_cast<char *>(height), sizeof(height));
    outfile.close();

    float p[4];
    ifstream infile;
    infile.open("abc.txt", ios::binary);
    infile.read(reinterpret_cast<char *>(p), sizeof(p));

    if (!infile.eof())
    {
        cout << p[0] << " " << p[1] << endl;
    }
    else
    {
        cerr << "Error reading the file." << endl;
    }

    infile.close();

    return 0;
}
