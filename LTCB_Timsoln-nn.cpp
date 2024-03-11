#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "Nhap a:"; cin >> a;
	cout << "Nhap b:"; cin >> b;
	cout << "Nhap c:"; cin >> c;
	cout << "So lon nhat va nha nhat trong 3 so nguyen:";
	int max = a;
	if (b > a) {
		max = b;
	}
	if (c > b){
		max = c;
	}
	int min = a;
	if (b < a) {
		min = b;
	}
	if (c < a) {
		min = c;
	}
	cout << "So lon nhat la: " << max << endl;
	cout << "So nho nhat la: " << min << endl;
	return 0;
}