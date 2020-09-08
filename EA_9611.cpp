//#include <iostream>
//#include <cstring>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int N;
//int number[10];
//
//void solve()
//{
//	cin >> N;
//
//	int A, B, C, D;
//	string s;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> A >> B >> C >> D;
//		cin >> s;
//
//		if (s == "YES")
//		{
//			number[A]++;
//			number[B]++;
//			number[C]++;
//			number[D]++;
//		}
//		else
//		{
//			number[A]--;
//			number[B]--;
//			number[C]--;
//			number[D]--;
//		}
//	}
//
//	int ans, MAX = -987654321;
//	for (int i = 0; i < 10; i++)
//	{
//		if (MAX < number[i])
//		{
//			MAX = number[i];
//			ans = i;
//		}
//	}
//
//	cout << ans << endl;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(number, 0, sizeof(number));
//
//		cout << "#" << num << " ";
//		solve();
//	}
//
//	return 0;
//}