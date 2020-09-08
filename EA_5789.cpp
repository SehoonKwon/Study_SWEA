//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int T, N, Q;
//int Array[1001] = { 0 };
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(Array, 0, sizeof(Array));
//
//		cin >> N >> Q;
//
//		int L, R, cnt = 1;
//		for (int i = 0; i < Q; i++)
//		{
//			cin >> L >> R;
//
//			for (int i = L; i < R + 1; i++)
//				Array[i] = cnt;
//			cnt++;
//		}
//
//		cout << "#" << num << " ";
//		for (int i = 1; i < N + 1; i++)
//			cout << Array[i] << " ";
//		cout << "\n";
//	}
//
//	return 0;
//}