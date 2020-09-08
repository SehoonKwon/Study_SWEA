//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int T, N, K;
//int Array[21];
//int ans = 0;
//
//void DFS(int a, int sum)
//{
//	sum += Array[a];
//	if (sum > K) return;
//	else if (sum == K)
//	{
//		ans++;
//		return;
//	}
//
//	else if (sum < K)
//	{
//		for (int i = a + 1; i < N; i++)
//		{
//			DFS(i, sum);
//		}
//	}
//}
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		ans = 0;
//		memset(Array, 0, sizeof(Array));
//
//		cin >> N >> K;
//		for (int i = 0; i < N; i++)
//			cin >> Array[i];
//
//		for (int i = 0; i < N; i++)
//			DFS(i, 0);
//
//		cout << "#" << num << " ";
//		cout << ans << "\n";
//	}
//
//	return 0;
//}