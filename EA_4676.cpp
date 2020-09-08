//#include <iostream>
//#include <string>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//int H[100] = { 0 };
//int T;
//string str;
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(H, 0, sizeof(H));
//
//		cin >> str;
//
//		int N, K=0;
//		cin >> N;
//		for (int i = 0; i < N; i++)
//		{
//			int x;
//			cin >> x;
//			H[x]++;
//			K = max(K, x);
//		}
//
//		int cnt = 0;
//		for (int i = 0; i < K+1; i++)
//		{
//			if (H[i] != 0)
//			{
//				for (int j = 0; j < H[i]; j++)
//				{
//					str.insert(i + cnt, "-");
//					cnt++;
//				}
//			}
//		}
//
//		cout << "#" << num << " ";
//		cout << str << "\n";
//
//	}
//
//	return 0;
//}