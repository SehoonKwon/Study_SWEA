//#include <iostream>
//#include <algorithm>
//#include <functional>
//using namespace std;
//
//int T, N, L;
//int Array[10000];
//pair<int, int> p[20];
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		cin >> N >> L;
//		for (int i = 0; i < N; i++)
//			cin >> p[i].first >> p[i].second;
//
//		sort(p, p + N);
//
//		int cnt = 0;
//		for (int i = N-1; i > -1; i--)
//		{
//			int j = i - 1;
//			int over = p[i].second;
//			if (over > L) continue;
//			Array[cnt] = p[i].first;
//			while(over <= L)
//			{
//				over += p[j].second;
//				if (over <= L)
//					Array[cnt] += p[j].first;
//				j++;
//			}
//			cnt++;
//		}
//
//		sort(Array, Array + cnt, greater<int>());
//
//		cout << "#" << num << " ";
//		cout << Array[0]<<"\n";
//	}
//
//	return 0;
//}