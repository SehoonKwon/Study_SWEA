//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <functional>
//using namespace std;
//
////pair �Ἥ �ε������� ���� �� �غ��ô�. �ֳĸ� 3��° ���̽����� 3�� �ƽ����ε� �Ĵ� ������ �տ� 2���� ����~
//
//int N;
//int ans = 0;
//
//int Array[1000] = { 0 };
//int Array2[1000] = { 0 };
//int Buy[1000] = { 0 };
//int Sell[1000] = { 0 };
//
//int main()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//		cin >> Array[i];
//
//	//�Ǹ� �ϴ� �� �÷�������
//	for (int k = 0; k < N / 2; k++)
//	{
//		memcpy(Array2, Array, sizeof(Array));
//		sort(Array2+1, Array2 + N, greater<int>()); //ù���� ���Ÿ� �����ϴϱ� �ε���0�� ����
//		Buy[0] = Array2[0];
//		
//		for (int i = 0; i <= k; i++)
//		{
//			Sell[i] = Array2[1 + i];
//			Array2[1 + i] = 0;
//		}
//		int cnt_b = 1;
//		for (int i = 1; i < N; i++)
//		{
//			if (Array2[i] != 0)
//			{
//				Buy[i] = Array2[i];
//				cnt_b++;
//			}
//		}
//
//		int M = 0;
//		for (int i = 0; i < N; i++)
//		{
//			M -= Buy[i];
//			M = M + Sell[i] * cnt_b;
//		}
//		
//		ans = max(M, ans);
//		
//	}
//
//	if (ans < 0) cout << "0" << "\n";
//	else cout << ans << "\n";
//
//	return 0;
//}