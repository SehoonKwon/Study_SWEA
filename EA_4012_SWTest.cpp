//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//#define endl "\n"
//
//// 백준 스타트와 링크문제와 같음
//
//int N;
//int Array[21][21];
//int visit[21];
//int Total = 0;
//int ans = 9999;
//
//void input()
//{
//	cin >> N;
//	for (int i = 1; i < N + 1; i++)
//		for (int j = 1; j < N + 1; j++)
//			cin >> Array[i][j];
//}
//
//int sum()
//{
//	int S = 0;
//	for (int i = 1; i < N + 1; i++)
//		for (int j = 1; j < N + 1; j++)
//		{
//			if (visit[j] == true && visit[i] == true)
//			S = S + Array[i][j];
//		}
//
//	return S;
//}
//
//int sum2()
//{
//	int S = 0;
//	for (int i = 1; i < N + 1; i++)
//		for (int j = 1; j < N + 1; j++)
//		{
//			if (visit[j] == false && visit[i] == false)
//				S = S + Array[i][j];
//		}
//
//	return S;
//}
//
//void DFS(int idx, int cnt)
//{
//	if (cnt == N / 2)
//	{
//		int Total_A = sum();
//		int Total_B = sum2();
//		int Total_C = abs(Total_A - Total_B);
//		ans = min(ans, Total_C);
//	}
//
//	for (int i = idx; i < N + 1; i++)
//	{
//		if (visit[i] == true) continue;
//		visit[i] = true;
//		DFS(i, cnt + 1);
//		visit[i] = false;
//
//	}
//}
//
//void solve()
//{
//	for (int i = 1; i < N + 1; i++)
//		DFS(i, 0);
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
//		memset(visit, 0, sizeof(visit));
//		memset(Array, 0, sizeof(Array));
//		ans = 9999;
//		Total = 0;
//
//		input();
//
//		cout << "#" << num << " ";
//		solve();
//	}
//
//	return 0;
//}