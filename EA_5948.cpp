//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <functional>
//using namespace std;
//
//int T;
//int Array[7] = { 0 };
//int Ans[298] = { 0 };
//
//int check(int x)
//{
//	for (int i = 0; i < 35; i++)
//		if (Ans[i] == x) return 1;
//
//	return 0;
//}
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		cin.tie(NULL);
//		cout.tie(NULL); //cout tie가 효과 젤 좋음 cin은 횟수가 적어서 별 효과 없는듯?
//
////		memset(Array, 0, sizeof(Array));
//		memset(Ans, 0, sizeof(Ans));
//
//		for (int i = 0; i < 7; i++)
//			cin >> Array[i];
//		
//
//		sort(Array, Array + 7, greater<int>());
//
//		int cnt = 0;
//
//		for (int i = 0; i < 7; i++)
//		{
//			for (int j = i+1; j < 7; j++)
//			{
//				for (int k = j+1; k < 7; k++)
//				{
//					Ans[Array[i] + Array[j] + Array[k]]++;
//				}
//			}
//		}
//
////		sort(Ans, Ans + cnt, greater<int>());
//
//		cout << "#" << num << " ";
//
//		for (int i = Array[0]+Array[1]+Array[2]; i > 0; i--)
//		{
//			if (Ans[i] >= 1) cnt++;
//			if (cnt == 5)
//			{
//				cout << i << "\n";
//				break;
//			}
//		}
//		
//	}
//
//	return 0;
//}