//#include <iostream>
//using namespace std;
//#define endl "\n"
//
////¸øÇ°
//
//int T;
//int Array[11][11] = { 0, };
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		int N;
//		cin >> N;
//
//		int i = 0, j = 0;
//		int flag = 0;
//		int cnt = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0;
//		for (int k = 1; k < N*N + 1; k++)
//		{
//			if (k == N*N)	flag = 4;
//			switch (flag)
//			{
//			case 0:
//				Array[i][j] = k;
//				if (j < N)j++;
//				if (i == cnt && j == N - cnt)
//				{
//					i++;
//					j--;
//					flag = 1;
//					cnt++;
//				}
//				break;
//
//			case 1:
//				Array[i][j] = k;
//				if (i < N)	i++;
//				if (i == N - cnt1 && j == N - cnt)
//				{
//					i--;
//					j--;
//					flag = 2;
//					cnt1++;
//				}
//				break;
//
//			case 2:
//				Array[i][j] = k;
//				if (i > 0)	j--;
//				if (i == N - cnt && j == -cnt2)
//				{
//					i--;
//					j++;
//					flag = 3;
//					cnt2++;
//				}
//				break;
//
//			case 3:
//				Array[i][j] = k;
//				if (i > 0)	i--;
//				if (i == cnt - 1 && j ==  cnt3 - 1)
//				{
//					i++;
//					j++;
//					flag = 0;
//					cnt3++;
//				}
//				break;
//
//			case 4:
//				if ((N % 2) == 0) Array[N / 2][(N - 1) / 2] = k;
//				else Array[N / 2][N / 2] = k;
//				break;
//
//			default:
//				break;
//			}
//		}
//
//		cout << "#" << num << endl;
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < N; j++)
//				cout << Array[i][j] << " ";
//			cout << endl;
//		}
//	}
//	return 0;
//}