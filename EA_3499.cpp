//#include <iostream>
//#include <cstring>
//#include <string>
//using namespace std;
//
//int T, N;
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		string str[1001];
//		string str2[501];
//
//		cin >> N;
//		for (int i = 0; i < N; i++)
//			cin >> str[i];
//
//		if ((N % 2) == 1)
//		{
//			for (int i = 0; i < N / 2; i++)
//				str2[i] = str[N / 2 + 1 + i];
//		}
//
//		else
//		{
//			for (int i = 0; i < N / 2; i++)
//				str2[i] = str[N / 2 + i];
//		}
//
//		cout << "#" << num << " ";
//		for (int i = 0; i < N / 2; i++)
//		{
//			cout << str[i] << " ";
//			cout << str2[i] << " ";
//		}
//		if ((N % 2) == 1) cout << str[N / 2];
//		cout << "\n";
//	}
//
//	return 0;
//}