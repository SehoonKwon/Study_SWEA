//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int T, N;
//char Array[8][8] = { 0, };
//
//int Check_R(int y, int x)
//{
//	int flag = 1;
//	int j = x + N - 1;
//	for (int i = 0; i < N / 2; i++)
//	{
//		if (Array[y][x] != Array[y][j]) flag = 0;
//		x++;
//		j--;
//	}
//
//	return flag;
//}
//
//int Check_C(int y, int x)
//{
//	int flag = 1;
//	int j = y + N - 1;
//	for (int i = 0; i < N / 2; i++)
//	{
//		if (Array[y][x] != Array[j][x]) flag = 0;
//		y++;
//		j--;
//	}
//
//	return flag;
//}
//
//int main()
//{
//	for (int num = 1; num < 11; num++)
//	{
//		memset(Array, 0, sizeof(Array));
//
//		cin >> N;
//		for (int i = 0; i < 8; i++)
//			for (int j = 0; j < 8; j++)
//				cin >> Array[i][j];
//
//		int isOK = 0;
//		int cnt = 0;
//		int k = 0;
//
//		for (int i = 0; i < 8; i++)
//		{
//			for (int j = 0; j + N <= 8; j++)
//			{
//				isOK = Check_R(i, j);
//				k = Check_C(j, i);
//				cnt += isOK;
//				cnt += k;
//			}
//		}
//
//		cout << "#" << num << " ";
//		cout << cnt << "\n";
//	}
//
//	return 0;
//}