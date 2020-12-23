//#include <iostream>
//#include <iomanip>
//#include <stdlib.h>
//#include <math.h>
//using namespace std;
//
//int* findMaxMin(double num[], int n) {
//	int i, result[2], max, min;
//
//	max = num[0];
//	min = num[0];
//	for (i = 1; i < n; i++)
//	{
//		if (max < num[i])
//			max = num[i];
//		if (min > num[i])
//			min = num[i];
//	}
//
//	result[0] = max;
//	result[1] = min;
//	return result;
//}
//int main()
//{
//	int n, i;
//	double num[100], max, min;
//	cin >> n;
//	if (n > 0)
//	{
//		for (i = 0; i < n; i++)
//		{
//			cin >> num[i];
//		}
//		int* result = findMaxMin(num, n);
//		cout << "Max = " << result[0] << "\nMin = " << result[1];
//	}
//	return 0;
//}