//#include <iostream>
//using namespace std;
//
//int Array[188] = { 0, };
//
//int main()
//{
//	for (int num = 1; num < 11; num++)
//	{
//		int A;
//		cin >> A;
//
//		for (int i = 0; i < 8; i++)
//			cin >> Array[i];
//
//
//		int cnt = 1;
//
//		while (Array[7] != 0)
//		{
//			//�ӽ�����
//			int temp = Array[0];
//
//			//Array �����
//			for (int i = 0; i < 7; i++)
//				Array[i] = Array[i + 1];
//
//			Array[7] = temp - cnt;
//			if (Array[7] <= 0) Array[7] = 0;
//
//			cnt++;
//			if (cnt == 6) cnt = 1;
//		}
//
//		cout << "#" << num << " ";
//
//		for (int i = 0; i < 8; i++)
//			cout << Array[i] << " ";
//
//		cout << "\n";
//	}
//
//	return 0;
//}