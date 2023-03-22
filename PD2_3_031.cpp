#include <iostream>
using namespace std;

int main()
{
	int a[5];
	cout << "Mengisi array" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "masukan data ke- " << (i + 1) << ": ";
		cin >> a[i];
	}
	cout << "Membaca array" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "masukan data ke-" << (i + 1) << ": " << a[i];
	}
}