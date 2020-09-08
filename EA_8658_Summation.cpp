//#include <iostream>
//#include <vector>
//#include <string>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//#define endl "\n"
//
//int N;
//string s;
//int Array[10];
//
//void input()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> s;
//
//		for (int j = 0; j < s.size(); j++)
//			Array[i] += (s[j] - 48);
//	}
//	
//}
//
//void solve()
//{
//	int MAX = 0, MIN = 987654321;
//	for (int i = 0; i < 10; i++)
//	{
//		MAX = max(MAX, Array[i]);
//		MIN = min(MIN, Array[i]);
//	}
//
//	cout << MAX << " " << MIN << endl;
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int T;
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(Array, 0, sizeof(Array));
//		input();
//
//		cout << "#" << num << " ";
//		solve();
//	}
//
//	return 0;
//}