//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int T;
//	cin >> T;
//
//	for (int num = 1; num < T+1; num++)
//	{
//		int x1, y1, x2, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//
//		int cnt = 1;
//
//		while (!(x1 == x2 && y1 == y2))
//		{
//			y1++;
//			cnt++;
//			if (x1 == 2 && y1 == 29)
//			{
//				x1++;
//				y1 = 1;
//			}
//
//			if (y1 == 31)
//			{
//				if (x1 == 4 || x1 == 6 || x1 == 9 || x1 == 11)
//				{
//					x1++;
//					y1 = 1;
//				}
//			}
//
//			if (y1 == 32)
//			{
//				if (x1 == 1 || x1 == 3 || x1 == 5 || x1 == 7 || x1 == 8 || x1 == 10)
//				{
//					x1++;
//					y1 = 1;
//				}
//				else if (x1 == 12)
//				{
//					x1 = 1;
//					y1 = 1;
//				}
//			}
//		}
//
//		cout << "#" << num << " ";
//		cout << cnt << "\n";
//	}
//
//	return 0;
//}