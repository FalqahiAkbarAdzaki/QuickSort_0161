#include <iostream>
using namespace std;

int arr[20];
int cmp count = 0;
int n;

void input() {
	while (true)
	{
		cout << "masukkan panjang elemen array: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "Maksimum panjang array adalah 20" << endl;
	}
	cout << "\n------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n------------------" << endl;

}
