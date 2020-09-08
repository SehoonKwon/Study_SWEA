//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int T;
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		int M, D;
//		cin >> M >> D;
//
//		int cnt = 0;
//		for (int i = 1; i < M; i++)
//		{
//			if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
//				cnt += 31;
//			else if (i == 2)
//				cnt += 29;
//			else
//				cnt += 30;
//		}
//
//		cnt += D;
//
//		cnt %= 7;
//
//		int ans = 3 + cnt;
//		if (ans > 6) ans -= 7; //0이 월요일
//
//		cout << "#" << num << " ";
//		cout << ans << "\n";
//	}
//
//	return 0;
//}