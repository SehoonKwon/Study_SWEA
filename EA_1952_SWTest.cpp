//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int T, D, M, M3, Y;
//int Array[12] = { 0 };
//int money[12] = { 0 };
//int table[12] = { 0 };
//
//int check()
//{
//	int sum = 0;
//
//	//�� ��� �˻�
//	for (int i = 0; i < 12; i++)
//	{
//		money[i] = Array[i] * D;
//		if (money[i] > M) money[i] = M;
//	}
//
//	//table�� DP. �ش� �� ������ �ּڰ� ���̺�
//	for (int i = 0; i < 12; i++)
//	{
//		if (i == 0)
//		{
//			table[i] = money[i];
//			continue;
//		}
//
//		table[i] = table[i - 1] + money[i];
//
//		//3���� ��쿣 �ٷ� 3����ġ. ���� �� ����
//		if (i == 2)
//		{
//			if (table[i] > M3) table[i] = M3;
//		}
//
//		//3�� ���� ���ʹ� 3���� �� + 4���� �� ��
//		if (i >= 3)
//		{
//			if (table[i] > (table[i - 3] + M3)) table[i] = table[i - 3] + M3;
//		}
//
//	}
//	//�Ⱓ ��� �˻�
//	if (table[11] > Y) table[11] = Y;
//
//	return table[11];
//}
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(money, 0, sizeof(money));
//
//		cin >> D >> M >> M3 >> Y;
//		for (int i = 0; i < 12; i++)
//			cin >> Array[i];
//
//		int ans = check();
//
//		cout << "#" << num << " ";
//		cout << ans << "\n";
//	}
//	return 0;
//}