//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int T, N;
//int Array[101] = { 0 };
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		cin >> N;
//		for (int i = 0; i < N; i++)
//			cin >> Array[i];
//
//		int Upmax = 0, Downmax = 0;
//
//		for (int i = 0; i < N - 1; i++)
//		{
//			//올라가는 경우
//			if (Array[i] <= Array[i + 1])
//			{
//				Upmax = max(Upmax, Array[i + 1] - Array[i]);
//			}
//
//			//내려가는 경우
//			if (Array[i] >= Array[i + 1])
//			{
//				Downmax = max(Downmax, Array[i] - Array[i + 1]);
//			}
//		}
//
//		cout << "#" << num << " ";
//		cout << Upmax << " " << Downmax << "\n";
//	}
//
//	return 0;
//}