//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int Array[100][100] = { 0 };
//int T, N;
//
//
//int main()
//{
//	for (int num = 1; num < 11; num++)
//	{
//		cin >> N;
//
//		for (int i = 0; i < 100; i++)
//			for (int j = 0; j < 100; j++)
//				cin >> Array[i][j];
//
//		int Max_R = 0, Max_C = 0, Max_D = 0;
//		int sum_R = 0, sum_C = 0;
//
//		for (int i = 0; i < 100; i++)
//		{
//			sum_R = 0;
//			sum_C = 0;
//
//			for (int j = 0; j < 100; j++)
//			{
//				if (i == j) Max_D = max(Max_D, Array[i][j]);
//				sum_R += Array[i][j];
//				sum_C += Array[j][i];
//			}
//
//			Max_R = max(Max_R, sum_R);
//			Max_C = max(Max_C, sum_C);
//		}
//
//		int ans = max(Max_R, Max_C);
//		ans = max(ans, Max_D);
//
//		cout << "#" << num << " ";
//		cout << ans << "\n";
//	}
//
//	return 0;
//}