//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int T;
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		int D, H, M, sum = 0;
//		cin >> D >> H >> M;
//		if (D < 11)
//		{
//			cout << "#" << num << " ";
//			cout << "-1" << "\n";
//			continue;
//		}
//
//		else
//		{
//			sum += (D - 11) * 24 * 60;
//			sum += (H - 11) * 60;
//			sum += (M - 11);
//		}
//
//		if (sum < 0) sum = -1;
//		cout << "#" << num << " ";
//		cout << sum << "\n";
//	}
//
//	return 0;
//}