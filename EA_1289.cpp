//#include <iostream>
//#include <string>
//using namespace std;
//
//int T;
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		string str;
//		cin >> str;
//
//		string recov = str;
//		for (int i = 0; i < str.size(); i++)
//			recov[i] = '0';
//
//		int cnt = 0;
//		int index = 0;
//		while (recov != str)
//		{
//			if (recov[index] != str[index])
//			{
//				for (int i = index; i < str.size(); i++)
//					recov[i] = str[index];
//
//				cnt++;
//			}
//
//			index++;
//		}
//
//		cout << "#" << num << " ";
//		cout << cnt << "\n";
//	}
//
//	return 0;
//}