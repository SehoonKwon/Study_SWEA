//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <functional>
//using namespace std;
//
////pair 써서 인덱스까지 정렬 후 해봅시다. 왜냐면 3번째 케이스에서 3이 맥스값인데 파는 갯수는 앞에 2개만 가능~
//
//int N;
//int ans = 0;
//
//int Array[1000] = { 0 };
//int Array2[1000] = { 0 };
//int Buy[1000] = { 0 };
//int Sell[1000] = { 0 };
//
//int main()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//		cin >> Array[i];
//
//	//판매 하는 날 늘려나가기
//	for (int k = 0; k < N / 2; k++)
//	{
//		memcpy(Array2, Array, sizeof(Array));
//		sort(Array2+1, Array2 + N, greater<int>()); //첫날은 구매만 가능하니까 인덱스0은 제외
//		Buy[0] = Array2[0];
//		
//		for (int i = 0; i <= k; i++)
//		{
//			Sell[i] = Array2[1 + i];
//			Array2[1 + i] = 0;
//		}
//		int cnt_b = 1;
//		for (int i = 1; i < N; i++)
//		{
//			if (Array2[i] != 0)
//			{
//				Buy[i] = Array2[i];
//				cnt_b++;
//			}
//		}
//
//		int M = 0;
//		for (int i = 0; i < N; i++)
//		{
//			M -= Buy[i];
//			M = M + Sell[i] * cnt_b;
//		}
//		
//		ans = max(M, ans);
//		
//	}
//
//	if (ans < 0) cout << "0" << "\n";
//	else cout << ans << "\n";
//
//	return 0;
//}