//#include <iostream>
//using namespace std;
//
//int Array[50][50] = { 0, };
//
//int T, N;
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		cin >> N;
//		for (int i = 0; i < N; i++)
//			for (int j = 0; j < N; j++)
//				scanf("%1d", &Array[i][j]);
//
//		int sum = 0;
//
//		for (int j = 0; j < N; j++)
//			sum += Array[N / 2][j];
//
//		int A = N / 2;
//
//		for (int i = 0; i < A; i++)
//		{
//			for (int j = N / 2 - i; j <= N / 2 + i; j++)
//			{
//				sum += Array[i][j];
//			}
//		}
//
//		int B = A-1;
//
//		for (int i = A+1; i < N; i++)
//		{
//			for (int j = N / 2 - B; j <= N / 2 + B; j++)
//			{
//				sum += Array[i][j];
//			}
//			B--;
//		}
//
//		cout << "#" << num << " ";
//		cout << sum << "\n";
//	}
//
//	return 0;
//}