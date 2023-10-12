#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  int inum;
  float dnum;
  string str;

  cin >> inum;

  cin >> dnum;

  cin >> str;

  ofstream outfile("test.txt");
  if (!outfile.is_open()) {
    cout << "Cannot open file." << endl;
    return 1;
  }

  outfile << inum << endl;
  outfile << dnum << endl;
  outfile << str << endl;

  outfile.close();

  ifstream infile("test.txt");
  if (!infile.is_open()) {
    cout << "Cannot open file." << endl;
    return 1;
  }

  string line;
  getline(infile, line);
  inum = stoi(line);

  getline(infile, line);
  dnum = stof(line);

  getline(infile, line);
  str = line;

  infile.close();

  cout << inum << endl;
  cout << dnum << endl;
  cout << str << endl;
  cout << "Sum of integer and float: " << inum + dnum << endl;

  return 0;
}
