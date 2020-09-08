//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int T, N;
//int Array[8] = { 0 };
//
//int check_R(int x)
//{	
//	return x % 10;
//}
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(Array, 0, sizeof(Array));
//		cin >> N;
//
//		//1의 자리수 없애기
//		int r = check_R(N);
//		N = N - r;
//
//		while (N != 0)
//		{
//			if (N >= 50000)
//			{
//				Array[0]++;
//				N -= 50000;
//			}
//
//			else if (N >= 10000)
//			{
//				Array[1]++;
//				N -= 10000;
//			}
//
//			else if (N >= 5000)
//			{
//				Array[2]++;
//				N -= 5000;
//			}
//			else if (N >= 1000)
//			{
//				Array[3]++;
//				N -= 1000;
//			}
//			else if (N >= 500)
//			{
//				Array[4]++;
//				N -= 500;
//			}
//			else if (N >= 100)
//			{
//				Array[5]++;
//				N -= 100;
//			}
//			else if (N >= 50)
//			{
//				Array[6]++;
//				N -= 50;
//			}
//			else if (N >= 10)
//			{
//				Array[7]++;
//				N -= 10;
//			}
//		}
//
//		cout << "#" << num << "\n";
//		for (int i = 0; i < 8; i++)
//			cout << Array[i] << " ";
//		cout << "\n";
//	}
//
//	return 0;
//}