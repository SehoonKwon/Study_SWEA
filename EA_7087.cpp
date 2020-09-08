//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//int T, N;
//string str[100];
//int Array[28];
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(Array, 0, sizeof(Array));
//		cin >> N;
//		
//		for (int i = 0; i < N; i++)
//			cin >> str[i];
//
//		for (int i = 0; i < N; i++)
//		{
//			Array[str[i][0] - 65]++;
//		}
//
//
//		int ans = 0;
//		for (int i = 0; i < 28; i++)
//		{
//			if (Array[i] == 0)
//			{
//				ans = i;
//				break;
//			}
//		}
//
//		cout << "#" << num << " ";
//		cout << ans << "\n";
//	}
//
//	return 0;
//}