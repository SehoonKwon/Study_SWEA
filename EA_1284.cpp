//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int T;
//	cin >> T;
//
//	for (int num = 1; num < T + 1; num++)
//	{
//		int P, Q, S, R, W;
//		cin >> P >> Q >> R >> S >> W;
//
//		int A = W*P;
//		int B;
//
//		if (W <= R)	B = Q;
//		else B = Q + (W - R) * S;
//
//		int minimum = min(A, B);
//
//		cout << "#" << num << " ";
//		cout << minimum << "\n";
//	}
//
//	return 0;
//}