//#include <iostream>
//using namespace std;
//
//int T, N, M;
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		cin >> N >> M;
//
//		int Uni, Twin;
//		Twin = N / 2;
//
//		Uni = M - Twin;
//
//		while (Twin * 2 + Uni != N)
//		{
//			Twin--;
//			Uni++;
//		}
//
//		cout << "#" << num << " ";
//		cout << Uni << " " << Twin << "\n";
//	}
//
//	return 0;
//}