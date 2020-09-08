//#include <iostream>
//#include <vector>
//#include <deque>
//#include <math.h>
//using namespace std;
//
//int T, K;
////vector<int> M[4];
//deque<int> M[4];
//
//int check(int N1, int N2)
//{
//	if (M[N1][2] == M[N2][6]) return 0;
//	else return 1;
//}
//
//int change(int num, int dir)
//{
//	if (dir == 1)
//	{
//		int temp = M[num].back();
//		for (int i = 7; i > 0; i--)
//		{
//			M[num][i] = M[num][i-1];
//		}
//		M[num][0] = temp;
//
//		return 1;
//	}
//
//	if (dir == -1)
//	{
//		int temp = M[num].front();
//		for (int i = 0; i < 7; i++)
//		{
//			M[num][i] = M[num][i + 1];
//		}
//		M[num][7] = temp;
//		
//		return -1;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		cin >> K;
//
//		int x;
//		for (int i = 0; i < 4; i++)
//		{
//			for (int j = 0; j < 8; j++)
//			{
//				cin >> x;
//				//			M[i].push_back(x);
//				M[i].push_back(x);
//			}
//		}
//
//		int Mag_num, dir, check1, check2, check3;
//		for (int i = 0; i < K; i++)
//		{
//			cin >> Mag_num >> dir;
//			Mag_num--;
//
//			check1 = check(0, 1);
//			check2 = check(1, 2);
//			check3 = check(2, 3);
//
//			int A = change(Mag_num, dir);
//
//			if (Mag_num == 0)
//			{
//				if (check1 == 1) A = change(1, -dir);
//				if (check1 == 1 && check2 == 1) A = change(2, dir);
//				if (check2 == 1 && check3 == 1 && check1 == 1) A = change(3, -dir);
//			}
//
//			if (Mag_num == 1)
//			{
//				if (check1 == 1) A = change(0, -dir);
//				if (check2 == 1) A = change(2, -dir);
//				if (check2 == 1 && check3 == 1) A = change(3, dir);
//			}
//
//			if (Mag_num == 2)
//			{
//				if (check2 == 1) A = change(1, -dir);
//				if (check2 == 1 && check1 == 1) A = change(0, dir);
//				if (check3 == 1) A = change(3, -dir);
//			}
//
//			if (Mag_num == 3)
//			{
//				if (check3 == 1) A = change(2, -dir);
//				if (check3 == 1 && check2 == 1) A = change(1, dir);
//				if (check1 == 1 && check2 == 1 && check3 == 1) A = change(0, -dir);
//			}
//
//		}
//
//		int ans = 0;
//		for (int i = 0; i < 4; i++)
//		{
//			if (M[i][0] == 1) ans = ans + pow(2, i);
//			M[i].clear();
//		}
//
//
//
//		cout << "#" << num << " ";
//		cout << ans << "\n";
//	}
//
//	return 0;
//}