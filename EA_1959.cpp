//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int T, N, M;
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		cin >> N >> M;
//
//		int *A, *B;
//
//		if (N > M)
//		{
//			int temp = M;
//			M = N;
//			N = temp;
//
//			A = new int[N];
//			B = new int[M];
//
//			for (int i = 0; i < M; i++)
//				cin >> B[i];
//			for (int j = 0; j < N; j++)
//				cin >> A[j];
//		}
//
//		else
//		{
//			A = new int[N];
//			B = new int[M];
//
//			for (int i = 0; i < N; i++)
//				cin >> A[i];
//			for (int j = 0; j < M; j++)
//				cin >> B[j];
//		}
//
//		int maxV = 0;
//		int Sum = 0;
//
//		for (int i = 0; i + N <= M; i++)
//		{
//			Sum = 0;
//			for (int j = 0; j < N; j++)
//			{
//				Sum = Sum + (A[j] * B[i + j]);
//			}
//
//			maxV = max(Sum, maxV);
//		}
//
//		cout << "#" << num << " ";
//		cout << maxV << "\n";
//
//		delete[] A;
//		delete[] B;
//
//		A = NULL;
//		B = NULL;
//	}
//
//	return 0;
//}