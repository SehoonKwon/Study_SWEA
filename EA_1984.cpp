//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int T;
//int Array[10] = { 0 };
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		for (int i = 0; i < 10; i++)
//			cin >> Array[i];
//
//		int maxV = 0, minV = 99999;
//		int maxIndex = 0, minIndex = 0;
//
//		for (int i = 0; i < 10; i++)
//		{
//			if (maxV < Array[i])
//			{
//				maxV = Array[i];
//				maxIndex = i;
//			}
//
//			if (minV > Array[i])
//			{
//				minV = Array[i];
//				minIndex = i;
//			}
//		}
//
//		Array[maxIndex] = 0;
//		Array[minIndex] = 0;
//
//		int sum = 0;
//		for (int i = 0; i < 10; i++)
//			sum += Array[i];
//
//		int ans = 0;
//		//<math.t>�� round��°� ���� �ݿø� �ڵ���� ����
//		//but STL�Ⱦ��� �������� �����غ��ڸ� 8�� �������� �� 0.5�̻��� �������� 8*0.5 = 4 �������� 4 �̻��� ��� ��� 0.5�̻��� ���´�. ���� �� �������� �˻�
//		if ((sum % 8) >= 4) ans = (sum / 8) + 1;
//		else ans = sum / 8;
//
//		cout << "#" << num << " " << ans << "\n";
//	}
//
//	return 0;
//}