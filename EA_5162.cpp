//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int T, A, B, C;
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		cin >> A >> B >> C;
//
//		//������ �� ���� A�� ����
//		if (A > B) swap(A, B);
//
//		//N�� A�� �ִ� ����
//		int N = C / A;
//		int Temp_C = C;
//
//		int maximum = 0;
//		//A���� ������ �ٿ����� �ִ밪 ã��
//		for (int i = 0; i < N; i++)
//		{
//			int Temp_C = C;
//			int cnt_A = Temp_C / A + -i;
//			Temp_C = Temp_C - cnt_A * A;
//
//			int cnt_B = Temp_C / B;
//
//			maximum = max(maximum, cnt_A + cnt_B);
//		}
//
//		cout << "#" << num << " ";
//		cout << maximum << "\n";
//	}
//
//	return 0;
//}