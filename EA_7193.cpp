//#include <iostream>
//#include <string>
//using namespace std;
//
//int T, N, X;
//string str;
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		cin >> N >> str;
//
//		int ans = 0;
//		for (int i = 0; i < str.size(); i++)
//		{
//			int temp = str[i] - 48;
//			temp %= (N - 1);
//			ans += temp;
//		}
//
//		while (ans > (N - 1))
//		{
//			ans -= (N - 1);
//		}
//
//		cout << "#" << num << " ";
//		cout << ans << "\n";
//	}
//
//	return 0;
//}