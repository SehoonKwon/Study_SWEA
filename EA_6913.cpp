//#include <iostream>
//using namespace std;
//
//int T, N, M;
//int Array[21][21] = { 0, };
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		cin >> N >> M;
//
//		for (int i = 0; i < N; i++)
//			for (int j = 0; j < M; j++)
//				cin >> Array[i][j];
//
//		int Hcnt = 0, Pcnt = 0, max = 0;
//
//		for (int i = 0; i < N; i++)
//		{
//			Pcnt = 0;
//			for (int j = 0; j < M; j++)
//				if (Array[i][j] == 1) Pcnt++;
//
//			if (max < Pcnt)
//			{
//				Hcnt = 1;
//				max = Pcnt;
//			}
//			else if (max == Pcnt) Hcnt++;
//		}
//
//		cout << "#" << num << " ";
//		cout << Hcnt << " " << max << "\n";
//	}
//
//	return 0;
//}