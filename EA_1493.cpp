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
//	//cnt�� ������ ���������ϴ°� ���� ȿ�����ϱ�?
//	for (int i = 1; cnt < 100001; i++)
//	{
//		for (int j = i, ii = 1; ii < i + 1; j--, ii++) //i�� �ϸ� ���� i�� �پ�� �ݺ����� �̻������Ƿ� ���ο� i����, ���� �ݺ��� ���ذ� �ٽ�
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