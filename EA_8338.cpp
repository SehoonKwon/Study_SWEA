//#include <iostream>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//#define endl "\n"
//
//int T, N;
//int Array[10];
//int MAX = 0;
//
//void input()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//		cin >> Array[i];
//}
//
//void DFS(int idx, int res)
//{
//	if (idx == N)
//	{
//		MAX = max(MAX, res);
//		return;
//	}
//
//	DFS(idx + 1, res + Array[idx + 1]);
//	DFS(idx + 1, res * Array[idx + 1]);
//}
//
//void solve()
//{
//	DFS(0, Array[0]);
//
//	cout << MAX << endl;
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(Array, 0, sizeof(Array));
//		MAX = 0;
//
//		input();
//
//		cout << "#" << num << " ";
//		solve();
//	}
//
//	return 0;
//}