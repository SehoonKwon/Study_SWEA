//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//int Array[10] = { 0 };
//int Array2[10] = { 0 };
//int T;
//string str, str2;
//
//int Same(int *Arr, int *Arr2)
//{
//	int flag = -1;
//	for (int i = 0; i < str.size(); i++)
//	{
//		if (Arr[i] == Arr2[i]) flag = 1;
//		else return -1;
//	}
//
//	return flag;
//}
//
//void check(string S)
//{
//	for (int i = 0; i < str.size(); i++)
//	{
//		char c = S[i];
//		if (c == 'B')
//		{
//			Array[i] = 1;
//			continue;
//		}
//		if (c == 'A' || c == 'D' || c == 'O' || c == 'P' || c == 'Q' || c == 'R')
//		{
//			Array[i] = 2;
//			continue;
//		}
//
//		else
//		{
//			Array[i] = 3;
//			continue;
//		}
//	}
//}
//
//void check2(string S)
//{
//	for (int i = 0; i < str.size(); i++)
//	{
//		char c = S[i];
//		if (c == 'B')
//		{
//			Array2[i] = 1;
//			continue;
//		}
//		if (c == 'A' || c == 'D' || c == 'O' || c == 'P' || c == 'Q' || c == 'R')
//		{
//			Array2[i] = 2;
//			continue;
//		}
//
//		else
//		{
//			Array2[i] = 3;
//			continue;
//		}
//	}
//}
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(Array, 0, sizeof(Array));
//		memset(Array2, 0, sizeof(Array2));
//
//		cin >> str >> str2;
//
//		if (str.size() != str2.size())
//		{
//			cout << "#" << num << " ";
//			cout << "DIFF" << "\n";
//			continue;
//		}
//
//		check(str);
//		check2(str2);
//
//		int isSame = Same(Array, Array2);
//
//		cout << "#" << num << " ";
//		if (isSame == 1) cout << "SAME" << "\n";
//		else cout << "DIFF" << "\n";
//	}
//
//	return 0;
//}