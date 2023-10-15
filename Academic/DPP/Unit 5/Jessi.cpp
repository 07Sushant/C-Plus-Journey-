#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
  if (n <= 1) {
    return false;
  }
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  cin >> n;

  int* primeFactors = new int[n];
  int primeFactorsCount = 0;

  for (int i = 2; i <= n; i++) {
    if (isPrime(i) && n % i == 0) {
      primeFactors[primeFactorsCount] = i;
      primeFactorsCount++;
    }
  }

  if (n < 2) {
    cout << "No prime factors found for " << n << endl;
    return 0;
  }

  cout << "Prime factors of " << n << " are: ";
  for (int i = 0; i < primeFactorsCount; i++) {
    cout << primeFactors[i] << " ";
  }
  cout << endl;

  int largestPrimeFactor = primeFactors[primeFactorsCount - 1];
  cout << "Largest prime factor of " << n << " is: " << largestPrimeFactor << endl;

  delete[] primeFactors;

  return 0;
}

