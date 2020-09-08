//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int T, N;
//int Array[10001];
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(Array, 0, sizeof(Array));
//		int sum = 0;
//
//		cin >> N;
//		for (int i = 0; i < N; i++)
//		{
//			cin >> Array[i];
//			sum += Array[i];
//		}
//
//		int div = sum / N;
//
//		int ans = 0;
//		for (int i = 0; i < N; i++)
//		{
//			if (Array[i] < div)
//			{
//				ans += div - Array[i];
//			}
//		}
//
//		cout << "#" << num << " ";
//		cout << ans << "\n";
//	}
//
//	return 0;
//}