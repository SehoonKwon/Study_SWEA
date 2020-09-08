//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int T, N;
//int Array[1000] = { 0 };
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
//		int gap = 99999999;
//		int cnt = 0;
//
//		for (int i = 0; i < N; i++)
//		{
//			if (Array[i] < 0)	Array[i] = -Array[i];
//			if (gap > Array[i])
//			{
//				gap = Array[i];
//				cnt = 1;
//			}
//			else if (gap == Array[i]) cnt++;
//		}
//
//		cout << "#" << num << " ";
//		cout << gap << " " << cnt << "\n";
//	}
//
//	return 0;
//}