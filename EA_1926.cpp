//#include <iostream>
//using namespace std;
//
//int T, N;
//int cnt = 0;
//
//int check_i(int x)
//{
//	int cnt = 0;
//	int r = 0;
//	if (x > 9)
//	{
//		while ((x != 0))
//		{
//			r = x % 10;
//			x /= 10;
//			if (r == 3 || r == 6 || r == 9)
//				cnt++;
//		}
//	}
//
//	else
//	{
//		r = x % 10;
//		if (r == 3 || r == 6 || r == 9)
//			cnt++;
//	}
//
//	if (cnt != 0) return cnt;
//	return 0;
//}
//
//int main()
//{
//	cin >> N;
//	for (int i = 1; i < N+1; i++)
//	{
//		cnt = check_i(i);
//		if (cnt == 0)
//		cout << i << " ";
//		else
//		{
//			for (int j = 0; j < cnt; j++)
//				cout << "-";
//			cout << " ";
//		}
//	}
//
//	return 0;
//}