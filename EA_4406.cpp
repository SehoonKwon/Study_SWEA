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
//		for (int i = 0; i < str.size(); i++) //erase �ϸ鼭 ����� ���� �پ��� �ȴٴ� �� �Ű澲��
//		{
//			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
//			{
//				str.erase(i, 1); // string. erase(������ġ, ����� ����) ���ο� �Լ�~ ����սô�
//				i--; //�ڵ����� ������Ƿ� �� �ڸ����� �ٽ� �˻��ϵ���
//			}
//		}
//
//		cout << "#" << num << " ";
//		cout << str << "\n";
//	}
//
//	return 0;
//}