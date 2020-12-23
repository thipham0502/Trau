//#include <iostream>
//using namespace std;
//
//void add(float a, float b) {
//	cout << "Result: " << a + b << endl;
//}
//void subtract(int a, int b) {
//	cout << "Result: " << a - b << endl;
//}
//void multiply(int a, int b) {
//	cout << "Result: " << a * b << endl;
//}
//void divide(int a, int b) {
//	cout << "Result: " << a / b << endl;
//}
//void modulus(int a, int b) {
//	cout << "Result: " << a % b << endl;
//}
//int main() {
//	int n;
//	char c;
//	int a, b;
//	while (true) {
//		cout << "Enter your choice: ";
//		cin >> n;
//		cout << "Enter your two numbers: ";
//		cin >> a >> b;
//		switch (n) {
//		case 1:
//			add(a, b);
//			break;
//		case 2:
//			subtract(a, b);
//			break;
//		case 3:
//			multiply(a, b);
//			break;
//		case 4:
//			divide(a, b);
//			break;
//		case 5:
//			modulus(a, b);
//			break;
//		}
//		cout << "Continue? ";
//		cin >> c;
//		if (c != 'Y' && c != 'y')
//			break;
//	}
//	return 0;
//}