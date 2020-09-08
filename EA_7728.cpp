//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//#define endl "\n"
//
//int T;
//int cnt[10];
//
//string s;
//
//void input()
//{
//	cin >> s;
//}
//
//void solve()
//{
//	for (int i = 0; i < s.size(); i++)
//	{
//		int x = s[i] - 48;
//		cnt[x]++;
//	}
//
//	int ans = 0;
//	for (int i = 0; i < 10; i++)
//		if (cnt[i] != 0) ans++;
//
//	cout << ans << endl;
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> T;
//
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(cnt, 0, sizeof(cnt));
//
//		input();
//
//		cout << "#" << num << " ";
//		solve();
//	}
//
//	return 0;
//}