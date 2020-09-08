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
//		int sum = 0;
//		int flag = 0;
//		for (int i = 1; i < N + 1; i++)
//		{
//			if (flag == 0)
//			{
//				sum += i;
//				flag = 1;
//			}
//			else
//			{
//				sum -= i;
//				flag = 0;
//			}
//		}
//		
//		cout << "#" << num << " ";
//		cout << sum << "\n";
//	}
//
//	return 0;
//}