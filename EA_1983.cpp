//#include <iostream>
//#include <string>
//using namespace std;
//
//int T, N, K;
//float Array[100] = { 0 };
//string Level[10] = { "A+","A0","A-","B+","B0","B-","C+","C0","C-","D0" };
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		cin >> N >> K;
//
//		int M, F, H;
//		for (int i = 0; i < N; i++)
//		{
//			cin >> M >> F >> H;
//			Array[i] = M*0.35 + F*0.45 + H*0.2;
//		}
//
//		int cnt = 0;
//		int Level_index = 0;
//		for (int i = 0; i < N; i++)
//		{
//			if (Array[K - 1] < Array[i]) cnt++;
//			if (cnt == (N / 10))
//			{
//				cnt = 0;
//				Level_index++;
//			}
//		}
//
//		cout << "#" << num << " ";
//		cout << Level[Level_index] << "\n";
//	}
//
//	return 0;
//}