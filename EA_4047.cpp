//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//int T;
//string str;
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		char C[400][3];
//
//		cin >> str;
//
//		int cnt = 0;
//		while (str.size() > 0)
//		{
//			C[cnt][0] = str[0];
//			C[cnt][1] = str[1];
//			C[cnt][2] = str[2];
//			str.erase(0, 3);
//			cnt++;
//		}
//
//		int flag = 0;
//		int S = 0, D = 0, H = 0, Clo = 0;
//
//		//중복 검사 및 카드 카운팅
//		for (int i = 0; i < cnt; i++)
//		{
//			if (C[i][0] == 'S') S++;
//			if (C[i][0] == 'D') D++;
//			if (C[i][0] == 'H') H++;
//			if (C[i][0] == 'C') Clo++;
//
//			for (int j = 0; j < cnt; j++)
//			{
//				if (i == j) continue;
//				if (C[i][0] == C[j][0] && C[i][1] == C[j][1] && C[i][2] == C[j][2])
//				{
//					cout << "#" << num << " ";
//					cout << "ERROR" << "\n";
//					flag = 1;
//					break;
//				}
//			}
//			if (flag == 1) break;
//		}
//
//		if (flag == 1) continue;
//
//		S = 13 - S;
//		D = 13 - D;
//		H = 13 - H;
//		Clo = 13 - Clo;
//
//		cout << "#" << num << " ";
//		cout << S << " " << D << " " << H << " " << Clo << "\n";
//	}
//
//	return 0;
//}