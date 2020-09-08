//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//int T, N, M;
//int sum = 0;
//int maxV = 0;
//int Array[15][15] = { 0, };
//
//void check(int y, int x)
//{
//	sum = 0;
//	for (int i = y; i < y + M; i++)
//		for (int j = x; j < x + M; j++)
//			sum += Array[i][j];
//}
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		maxV = 0;
//
//		cin >> N >> M;
//		for (int i = 0; i < N; i++)
//			for (int j = 0; j < N; j++)
//				cin >> Array[i][j];
//
//		for (int i = 0; i + M <= N; i++)
//			for (int j = 0; j + M <= N; j++)
//			{
//				check(i, j);
//				maxV = max(maxV, sum);
//			}
//		cout << "#" << num << " ";
//		cout << maxV << "\n";
//	}
//
//	return 0;
//}