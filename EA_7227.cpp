//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int N;
//int Array[20][2] = { 0, };
//
//int minV(int n)
//{
//	if (Array[n][0] == 0) return 0;
//	int X = Array[n][0];
//	int Y = Array[n][1];
//
//	int temp = 0;
//	int minimum = 9999;
//	int index = 0;
//
//	//브루트 포스
//	for (int i = 0; i < N; i++)
//	{
//		if (i == n) continue;
//		if (Array[i][0] == 0) continue;
//
//		temp = (X - Array[i][0]) * (X - Array[i][0]) + (Y - Array[i][1]) * (Y - Array[i][1]);
//
//		if (temp < minimum)
//		{
//			minimum = temp;
//			index = i;
//		}
//	}
//
//	Array[index][0] = 0;
//	Array[n][0] = 0;
//
//	return minimum;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//
//	for (int num = 1; num < T + 1; num++)
//	{
//		cin >> N;
//
//		for (int i = 0; i < N; i++)
//		{
//			int x, y;
//			cin >> x >> y;
//			Array[i][0] = x;
//			Array[i][1] = y;
//		}
//
//	}
//
//	int sum = 0;
//	for (int i = 0; i < N; i++)
//	{
//		int t = minV(i);
//		sum += t;
//	}
//
//	cout << sum;
//
//	return 0;
//}