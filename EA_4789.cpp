//#include <iostream>
//#include <string>
//using namespace std;
//
//#define endl "\n"
//
//int T;
//int cnt, add_cnt;
//string s;
//
//void input()
//{
//	cin >> s;
//}
//
//void solve()
//{
//	cnt = s[0] - 48; //cnt = 현재 박수칠 사람의 수
//	
//	for (int i = 1; i < s.size(); i++)
//	{
//		if (cnt >= i ) cnt += s[i] - 48;
//		else
//		{
//			if (s[i] == '0') continue;
//			int d = i - cnt;
//			add_cnt += d;
//			cnt = cnt + d + (s[i] - 48);
//		}
//	}
//
//	cout << add_cnt << endl;
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
//		add_cnt = 0;
//
//		input();
//
//		cout << "#" << num << " ";
//		solve();
//	}
//
//	return 0;
//}