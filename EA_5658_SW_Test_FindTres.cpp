//#include <iostream>
//#include <string>
//#include <cstring>
//#include <algorithm>
//#include <math.h>
//#include <functional>
//using namespace std;
//
//int T, N, K;
//string str;
//char S[4][7] = { 0, };
//int Array[100] = { 0 };
//int cnt = 0;
//
//int check(int X)
//{
//	for (int i = 0; i < cnt; i++)
//	{
//		if (Array[i] == X) return 1;
//	}
//
//	return 0;
//}
//
//int H2D(int num)
//{
//	int sum = 0;
//	for (int i = 0; i < N / 4; i++)
//	{
//		int A = 0;
//		if (S[num][i] >= '0' && S[num][i] <= '9')
//		{
//			A = S[num][i] - 48;
//		}
//
//		else if (S[num][i] >= 'A' && S[num][i] <= 'F')
//		{
//			A = S[num][i] - 65 + 10;
//		}
//
//		A = A * pow(16, N / 4 - 1 - i);
//		sum += A;
//	}
//
//	return sum;
//}
//
//void rotate()
//{
//	char temp1, temp2, temp3, temp4;
//	temp1 = S[0][N / 4 -1];
//	temp2 = S[1][N / 4 -1];
//	temp3 = S[2][N / 4 -1];
//	temp4 = S[3][N / 4 -1];
//	
//	for (int i = N / 4 - 1; i > 0; i--)
//	{
//		S[0][i] = S[0][i-1];
//		S[1][i] = S[1][i-1];
//		S[2][i] = S[2][i-1];
//		S[3][i] = S[3][i-1];
//	}
//	
//	S[0][0] = temp4;
//	S[1][0] = temp1;
//	S[2][0] = temp2;
//	S[3][0] = temp3;
//}
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(Array, 0, sizeof(Array));
//		memset(S, 0, sizeof(S));
//		cnt = 0;
//
//		cin >> N >> K;
//		cin >> str;
//
//		for (int i = 0; i < 4; i++)
//		{
//			for (int j = 0; j < N / 4; j++)
//			{
//				S[i][j] = str[j];
//			}
//			str.erase(0, N / 4);
//		}
//
//		//회전 시키기
//		for (int i = 0; i < (N / 4); i++)
//		{
//			for (int j = 0; j < 4; j++)
//			{
//				int X = H2D(j);
//				int c = check(X);
//				if (c == 1) continue; //중복 넘어가기
//				Array[cnt] = X;
//				cnt++;
//			}
//			rotate();
//		}
//
//		sort(Array, Array + cnt, greater<int>());
//
//		cout << "#" << num << " ";
//		cout << Array[K - 1] << "\n";
//	}
//
//	return 0;
//}