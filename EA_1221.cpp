//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//int Array[10] = { 0 };
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
//		string str;
//		cin >> str;
//
//		int N;
//		cin >> N;
//
//		for (int i = 0; i < N; i++)
//		{
//			cin >> str;
//			if (str == "ZRO") Array[0]++;
//			else if (str == "ONE") Array[1]++;
//			else if (str == "TWO") Array[2]++;
//			else if (str == "THR") Array[3]++;
//			else if (str == "FOR") Array[4]++;
//			else if (str == "FIV") Array[5]++;
//			else if (str == "SIX") Array[6]++;
//			else if (str == "SVN") Array[7]++;
//			else if (str == "EGT") Array[8]++;
//			else if (str == "NIN") Array[9]++;
//		}
//
//		cout << "#" << num << "\n";
//		for (int j = 0; j < Array[0]; j++) cout << "ZRO" << " ";
//		for (int j = 0; j < Array[1]; j++) cout << "ONE" << " ";
//		for (int j = 0; j < Array[2]; j++) cout << "TWO" << " ";
//		for (int j = 0; j < Array[3]; j++) cout << "THR" << " ";
//		for (int j = 0; j < Array[4]; j++) cout << "FOR" << " ";
//		for (int j = 0; j < Array[5]; j++) cout << "FIV" << " ";
//		for (int j = 0; j < Array[6]; j++) cout << "SIX" << " ";
//		for (int j = 0; j < Array[7]; j++) cout << "SVN" << " ";
//		for (int j = 0; j < Array[8]; j++) cout << "EGT" << " ";
//		for (int j = 0; j < Array[9]; j++) cout << "NIN" << " ";
//		cout << "\n";
//	}
//
//	return 0;
//}