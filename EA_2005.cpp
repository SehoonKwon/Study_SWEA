//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int T, N;
//int Array[10][10] = { 0, };
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		cin >> N;
//
//		for (int i = 0; i < N; i++)
//		{
//			Array[i][0] = 1;
//			Array[i][i] = 1;
//		}
//
//		for (int i = 2; i < N; i++)
//			for (int j = 1; j < i; j++)
//			{
//				Array[i][j] = Array[i - 1][j - 1] + Array[i - 1][j];
//			}
//
//		cout << "#" << num << "\n";
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < N; j++)
//			{
//				if (Array[i][j] != 0) cout << Array[i][j] << " ";
//			}
//			cout << "\n";
//		}
//	}
//
//	return 0;
//}