//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//#define endl "\n"
//
//int P;
//vector<int> v;
//
//void input()
//{
//	cin >> P;
//	for (int i = 0; i < P; i++)
//	{
//		int x;
//		cin >> x;
//		v.push_back(x);
//	}
//}
//
//void solve()
//{
//	sort(v.begin(), v.end());
//
//	int ans = v[0] * v[v.size() - 1];
//
//	cout << ans << endl;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		v.clear();
//		input();
//
//		cout << "#" << num << " ";
//		solve();
//	}
//
//	return 0;
//}