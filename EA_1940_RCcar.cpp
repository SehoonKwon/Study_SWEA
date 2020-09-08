//#include <iostream>
//using namespace std;
//
//int T, N;
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		cin >> N;
//
//		int s = 0;
//		int v = 0;
//		for (int i = 0; i < N; i++)
//		{
//			int x, dv;
//			cin >> x;
//
//			if (x == 0) dv = 0;
//			else
//				cin >> dv;
//
//			if (x == 2)
//				dv = -dv;
//
//			v += dv;
//			if (v <= 0) v = 0;
//
//			s += v;
//		}
//
//		cout << "#" << num << " ";
//		cout << s << "\n";
//	}
//
//	return 0;
//}