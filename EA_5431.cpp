//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//int T, N, K;
//int Array[101] = { 0 };
//int Ans[101] = { 0 };
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(Array, 0, sizeof(Array));
//		memset(Ans, 0, sizeof(Ans));
//
//		cin >> N >> K;
//
//		int x;
//		for (int i = 0; i < K; i++)
//		{
//			cin >> x;
//			Array[x]++;
//		}
//
//		int cnt = 0;
//		for (int i = 1; i < N+1; i++)
//		{
//			if (Array[i] == 0)
//			{
//				Ans[cnt] = i;
//				cnt++;
//			}
//		}
//
//		sort(Ans, Ans + cnt);
//
//		cout << "#" << num << " ";
//		for (int i = 0; i < cnt; i++)
//		{
//			cout << Ans[i] << " ";
//		}
//		cout << "\n";
//	}
//
//	return 0;
//}