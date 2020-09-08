//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int table[1001][1001] = { 0, };
//
//int main()
//{
//	int cnt = 1;
//	int size_i, size_j;
//
//	//cnt의 범위를 어디까지로하는게 가장 효율적일까?
//	for (int i = 1; cnt < 100001; i++)
//	{
//		for (int j = i, ii = 1; ii < i + 1; j--, ii++) //i로 하면 위에 i도 줄어들어서 반복문이 이상해지므로 새로운 i생성, 여기 반복문 이해가 핵심
//		{
//			table[ii][j] = cnt;
//			cnt++;
//			size_i = max(size_i, i);
//			size_j = max(size_j, j);
//		}
//	}
//
//	int T;
//	cin >> T;
//
//	for (int num = 1; num < T + 1; num++)
//	{
//
//		int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
//		int X, Y;
//
//		cin >> X >> Y;
//
//		for (int i = 1; i < 151; i++)
//			for (int j = 1; j < 151; j++)
//			{
//				if (table[i][j] == X)
//				{
//					x1 = j;
//					y1 = i;
//				}
//
//				if (table[i][j] == Y)
//				{
//					x2 = j;
//					y2 = i;
//				}
//
//				if (x1 != 0 && x2 != 0) break;
//			}
//
//		int nx = x1 + x2;
//		int ny = y1 + y2;
//
//		cout << "#" << num << " ";
//		cout << table[ny][nx] << "\n";
//	}
//
//	return 0;
//}