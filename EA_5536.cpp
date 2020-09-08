//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//char Array[5][15] = { 0, };
//string str;
//
//int main()
//{
//	int T;
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(Array, 0, sizeof(Array));
//
//		for (int i = 0; i < 5; i++)
//		{
//			cin >> str;
//			for (int j = 0; j < str.size(); j++)
//				Array[i][j] = str[j];
//		}
//
//		cout << "#" << num << " ";
//		for (int j = 0; j < 15; j++)
//		{
//			for (int i = 0; i < 5; i++)
//			{
//				if (Array[i][j] == 0) continue;
//				cout << Array[i][j];
//			}
//		}
//		cout << "\n";
//	}
//
//	return 0;
//}