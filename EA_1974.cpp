//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int T;
//int Array[9][9] = { 0, };
//int check[10] = { 0 };
//
//int checkRow(int x)
//{
//	for (int i = 0; i < 9; i++)
//	{
//		check[Array[x][i]]++;
//		if (check[Array[x][i]] == 2) return -1;
//	}
//
//	for (int i = 1; i < 10; i++)
//		if (check[i] == 0) return -1;
//
//	return 0;
//}
//
//int checkCol(int x)
//{
//	for (int i = 0; i < 9; i++)
//	{
//		check[Array[i][x]]++;
//		if (check[Array[i][x]] == 2) return -1;
//	}
//
//	for (int i = 1; i < 10; i++)
//		if (check[i] == 0) return -1;
//
//	return 0;
//}
//
//int checkBox(int y, int x)
//{
//	for (int i = y; i < y + 3; i++)
//		for (int j = x; j < x + 3; j++)
//		{
//			check[Array[i][j]]++;
//			if (check[Array[i][j]] == 2) return -1;
//		}
//
//	for (int i = 1; i < 10; i++)
//		if (check[i] == 0) return -1;
//
//	return 0;
//
//}
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		for (int i = 0; i < 9; i++)
//			for (int j = 0; j < 9; j++)
//				cin >> Array[i][j];
//
//		int checkR, checkC, checkB;
//		int flag = 1;
//
//		for (int i = 0; i < 9; i++)
//		{
//			memset(check, 0, sizeof(check));
//			checkR = checkRow(i);
//
//			memset(check, 0, sizeof(check));
//			checkC = checkCol(i);
//
//			if ((checkR != 0) || (checkC != 0)) flag = 0;
//		}
//
//		for (int i = 0; i < 7; i++)
//			for (int j = 0; j < 7; j++)
//			{
//				memset(check, 0, sizeof(check));
//
//				if (i == 0 && (j == 0 || j == 3 || j == 6))
//					checkB = checkBox(i, j);
//
//				else if (i == 3 && (j == 0 || j == 3 || j == 6))
//					checkB = checkBox(i, j);
//
//				else if (i == 6 && (j == 0 || j == 3 || j == 6))
//					checkB = checkBox(i, j);
//
//				if (checkB != 0) flag = 0;
//			}
//
//		cout << "#" << num << " ";
//		cout << flag << "\n";
//	}
//
//	return 0;
//}