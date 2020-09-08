//#include <iostream>
//using namespace std;
//
//int mypow(int x, int y)
//{
//	if (x == 1) return 1;
//	if (y == 1) return x;
//	if (y == 0) return 1;
//
//	return x*mypow(x, y - 1);
//}
//
//int main()
//{
//	for (int k = 0; k < 10; k++)
//	{
//		int num, X, Y;
//		cin >> num >> X >> Y;
//
//		int ans = 0;
//		ans = mypow(X, Y);
//
//		cout << "#" << num << " ";
//		cout << ans << "\n";
//	}
//
//	return 0;
//}