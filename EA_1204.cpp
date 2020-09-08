//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int T;
//int cnt[101] = { 0 };
//int x[1000] = { 0 };
//pair<int, int> p[1000];
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(cnt, 0, sizeof(cnt));
//
//		int a;
//		cin >> a;
//
//		for (int i = 0; i < 1000; i++)
//		{
//			cin >> x[i];
//			cnt[x[i]]++;
//		}
//
//		for (int i = 0; i < 1000; i++)
//		{
//			p[i] = make_pair(cnt[x[i]], x[i]);
//		}
//
//		sort(p, p + 1000);
//
//		cout << "#" << num << " " << p[999].second << "\n";
//	}
//
//	return 0;
//}