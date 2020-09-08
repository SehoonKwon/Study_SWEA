//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int T, N;
//char Alpha[10] = { 0 };
//int Alpha_cnt[10] = { 0 };
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(Alpha, 0, sizeof(Alpha));
//		memset(Alpha_cnt, 0, sizeof(Alpha_cnt));
//
//		cin >> N;
//		for (int i = 0; i < N; i++)
//			cin >> Alpha[i] >> Alpha_cnt[i];
//
//		cout << "#" << num << "\n";
//
//		int cnt = 1;
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < Alpha_cnt[i]; j++)
//			{
//				cout << Alpha[i];
//				cnt++;
//				if (cnt > 10)
//				{
//					cnt = 1;
//					cout << "\n";
//				}
//			}
//		}
//		cout << "\n";
//	}
//
//	return 0;
//}