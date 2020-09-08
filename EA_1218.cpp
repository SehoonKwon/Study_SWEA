//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//
//int N;
//int cnt[4];
//vector<char> v;
//
//void input()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		char X;
//		cin >> X;
//		v.push_back(X);
//	}
//}
//
//void solve()
//{
//	for (int i = 0; i < N; i++)
//	{
//		if (v[i] == '(') cnt[0]++;
//		else if (v[i] == ')') cnt[0]--;
//		else if (v[i] == '{') cnt[1]++;
//		else if (v[i] == '}') cnt[1]--;
//		else if (v[i] == '[') cnt[2]++;
//		else if (v[i] == ']') cnt[2]--;
//		else if (v[i] == '<') cnt[3]++;
//		else if (v[i] == '>') cnt[3]--;
//	}
//
//	int ans = 1;
//	for (int i = 0; i < 4; i++)
//		if (cnt[i] != 0) ans = 0;
//
//	cout << ans << endl;
//}
//
//int main()
//{
//	for (int num = 1; num < 11; num++)
//	{
//		v.clear();
//		memset(cnt, 0, sizeof(cnt));
//
//		input();
//		cout << "#" << num << " ";
//		solve();
//	}
//
//	return 0;
//}