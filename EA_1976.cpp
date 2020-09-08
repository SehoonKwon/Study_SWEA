//#include <iostream>
//using namespace std;
//
//int T;
//int x, y, dx, dy;
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		cin >> x >> y >> dx >> dy;
//
//		x = x + dx;
//		if (x > 12) x = x - 12;
//
//		y = y + dy;
//		if (y > 60)
//		{
//			x++;
//			y = y - 60;
//		}
//
//		cout << "#" << num << " ";
//		cout << x << " " << y << "\n";
//	}
//
//	return 0;
//}