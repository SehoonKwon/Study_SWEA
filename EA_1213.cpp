//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	for (int num = 1; num < 11; num++)
//	{
//		int A;
//		cin >> A;
//
//		string str, str2;
//		cin >> str >> str2;
//
//		int cnt = 0;
//
//		for (int i = 0; i < str2.size(); i++)
//		{
//			int flag = 0;
//
//			for (int j = 0; j < str.size(); j++)
//			{
//				if (str2[i + j] == str[j]) flag = 1;
//				else
//				{
//					flag = 0;
//					break;
//				}
//			}
//
//			if (flag == 1)
//			{
//				cnt++;
//				i = i + str.size() - 1;
//			}
//		}
//
//		cout << "#" << num << " ";
//		cout << cnt << "\n";
//	}
//
//	return 0;
//}