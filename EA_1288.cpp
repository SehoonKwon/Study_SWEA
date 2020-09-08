//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int Array[10] = { 0 };
//
//int check()
//{
//	int flag = 1;
//	for (int i = 0; i < 10; i++)
//	{
//		flag *= Array[i];
//	}
//
//	return flag;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(Array, 0, sizeof(Array));
//
//		int N;
//		cin >> N;
//
//		int cnt = 1;
//		int isOK = 0;
//
//		for (int i = 1; ; i++)
//		{
//			int NN = i*N;
//			while (NN != 0)
//			{
//				Array[NN % 10]++;
//				NN /= 10;
//			}
//			isOK = check();
//			if (isOK != 0) break;
//			cnt++;
//		}
//
//		cout << "#" << num << " ";
//		cout << cnt*N << "\n";
//	}
//
//	return 0;
//}