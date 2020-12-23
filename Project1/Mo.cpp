//#include<iostream>
//#include<iomanip>
//#include<stdlib.h>
//
//using namespace std;
//int main()
//{
//    // TODO
//    int n, i, j, a[100][100], t[100][100];
//    cin >> n;
//    if (n > 0)
//    {
//        // input a
//        for (i = 0; i < n; i++)
//            for (j = 0; j < n; j++)
//                cin >> a[i][j];
//
//        // print a
//        //cout << "a:\n";
//        for (i = 0; i < n; i++) {
//            for (j = 0; j < n; j++) {
//                if (j == n - 1)
//                    cout << a[i][j];
//                else
//                    cout << a[i][j] << " ";
//            }
//            cout << endl;
//        }
//
//        // find t (tranpose)
//        for (i = 0; i < n; i++)
//            for (j = 0; j < n; j++)
//                t[j][i] = a[i][j];
//        
//        // print t
//        //cout << "transpose:\n";
//        for (i = 0; i < n; i++) {
//            for (j = 0; j < n; j++) {
//                if (j == n - 1)
//                    cout << t[i][j];
//                else
//                    cout << t[i][j] << " ";
//            }
//            cout << endl;
//        }
//    }
//        return 0;
//}