//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int Array[1000] = { 0 };
//
//int main()
//{
//	for (int num = 1; num < 11; num++)
//	{
//		int N;
//		cin >> N;
//
//		for (int i = 0; i < N; i++)
//			cin >> Array[i];
//
//		int cnt = 0;
//		for (int i = 2; i < N - 2; i++)
//		{
//			int l1, l2, r1, r2, c;
//			l1 = Array[i - 2];
//			l2 = Array[i - 1];
//			r1 = Array[i + 1];
//			r2 = Array[i + 2];
//			c = Array[i];
//
//			int H = 0;
//			if (c - l1 >= 1 && c - l2 >= 1 && c - r1 >= 1 && c - r2 >= 1)
//			{
//				H = c - l1;
//				H = min(H, c - l2);
//				H = min(H, c - r1);
//				H = min(H, c - r2);
//			}
//
//			cnt += H;
//		}
//
//		cout << "#" << num << " ";
//		cout << cnt << "\n";
//
//	}
//
//	return 0;
//}