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
//		for (int i = 0; i < str.size(); i++) //erase 하면서 사이즈도 같이 줄어들게 된다는 걸 신경쓰자
//		{
//			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
//			{
//				str.erase(i, 1); // string. erase(시작위치, 지우는 갯수) 새로운 함수~ 기억합시다
//				i--; //자동으로 당겨지므로 그 자리부터 다시 검사하도록
//			}
//		}
//
//		cout << "#" << num << " ";
//		cout << str << "\n";
//	}
//
//	return 0;
//}