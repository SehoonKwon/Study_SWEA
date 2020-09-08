//#include <iostream>
//#include <cstring>
//using namespace std;
//
//#define endl "\n"
//
//int T, N, K;
//int Array[21];
//
//void input()
//{
//	cin >> N >> K;
//}
//
//void solve()
//{
//	for (int i = 1; i < N + 1; i++)
//	{
//		//정방향
//		if ((i % 2) == 1)
//		{
//			for (int j = 1; j < K + 1; j++)
//			{
//				Array[j] += j + ( K * (i - 1 ) );
//			}
//		}
//
//		//역순
//		else
//		{
//			for (int j = 1; j < K + 1; j++)
//			{
//				Array[j] += (K + 1 - j) + (K * (i - 1));
//			}
//		}
//	}
//
//	for (int i = 1; i < K + 1; i++)
//		cout << Array[i] << " ";
//	cout << endl;
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
//
//		input();
//
//		cout << "#" << num << " ";
//		solve();
//	}
//
//	return 0;
//}