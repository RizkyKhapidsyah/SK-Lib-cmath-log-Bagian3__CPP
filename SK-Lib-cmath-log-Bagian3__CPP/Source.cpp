// CPP program to find Nth polite number
#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

using namespace std;

// function to evaluate n-th polite number
double polite(double n) {
	n += 1;
	double base = 2;
	return n + (log((n + (log(n) / log(base))))) / log(base);
}

// driver code
int main() {
	double n = 7;
	cout << (int)polite(n);

	_getch();
	return 0;
}
