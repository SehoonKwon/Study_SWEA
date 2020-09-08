//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int T, N;
//int Array[1001] = { 0 };
//int check[10000] = { 0 };
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(Array, 0, sizeof(Array));
//		memset(check, 0, sizeof(check));
//
//		cin >> N;
//		for (int i = 0; i < N; i++)
//			cin >> Array[i];
//
//		//1의 자리 체크
//		for (int i = 0; i < N; i++)
//			check[Array[i]]++;
//
//		//10의 자리 체크
//		for (int i = 0; i < N - 1; i++)
//		{
//			check[10 * Array[i] + Array[i + 1]]++;
//		}
//
//		//100의 자리 체크
//		for (int i = 0; i < N - 2; i++)
//		{
//			check[100 * Array[i] + 10 * Array[i + 1] + Array[i + 2]]++;
//		}
//
//		cout << "#" << num << " ";
//		for (int i = 0; i < 10000; i++)
//		{
//			if (check[i] == 0)
//			{
//				cout << i << "\n";
//				break;
//			}
//		}
//	}
//
//	return 0;
//}