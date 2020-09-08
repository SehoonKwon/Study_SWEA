//#include <iostream>
//using namespace std;
//
//int T, N;
//
//int main()
//{
//	cin >> T;
//
//	for (int num = 1; num < T + 1; num++)
//	{
//		cin >> N;
//
//		int flag2 = 0, flag3 = 0, flag5 = 0, flag7 = 0, flag11 = 0;
//		int cnt2 = 0, cnt3 = 0, cnt5 = 0, cnt7 = 0, cnt11 = 0;
//
//		while (flag2 + flag3 + flag5 + flag7 + flag11 != 5) //모두 1이 될 때까지 ( 모두 1이되면 합이 5 )
//		{
//			if ((N % 2) == 0)
//			{
//				N = N / 2;
//				flag2 = 0;
//				cnt2++;
//			}
//			else flag2 = 1;
//
//			if ((N % 3) == 0)
//			{
//				N = N / 3;
//				flag3 = 0;
//				cnt3++;
//			}
//			else flag3 = 1;
//
//			if ((N % 5) == 0)
//			{
//				N = N / 5;
//				flag5 = 0;
//				cnt5++;
//			}
//			else flag5 = 1;
//
//			if ((N % 7) == 0)
//			{
//				N = N / 7;
//				flag7 = 0;
//				cnt7++;
//			}
//			else flag7 = 1;
//
//			if ((N % 11) == 0)
//			{
//				N = N / 11;
//				flag11 = 0;
//				cnt11++;
//			}
//			else flag11 = 1;
//		}
//
//		cout << "#" << num << " ";
//		cout << cnt2 << " " << cnt3 << " " << cnt5 << " " << cnt7 << " " << cnt11 << "\n";
//	}
//	return 0;
//}