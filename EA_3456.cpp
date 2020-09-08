//#include <iostream>
//using namespace std;
//
//int T;
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		
//		int ans;
//
//		if (a == b && a == c) ans = a;
//		else
//		{
//			if (a == b) ans = c;
//			if (b == c) ans = a;
//			if (a == c) ans = b;
//		}
//
//		cout << "#" << num << " ";
//		cout << ans << "\n";
//	}
//
//	return 0;
//}