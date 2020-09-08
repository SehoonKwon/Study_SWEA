//#include <iostream>
//#include <cstring>
//#include <string>
//using namespace std;
//
//int T, N, M;
//
//pair<string, int> p[100];
//string str2[1000];
//int iindex[100][8]; //index가 안될때가 있음. 이름때문에
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(iindex, 0, sizeof(iindex));
//		cin >> N >> M;
//
//		for (int i = 0; i < N; i++)
//			cin >> p[i].first >> p[i].second;
//
//		for (int i = 0; i < M; i++)
//			cin >> str2[i];
//
//		int sum = 0;
//		int cnt = 0;
//
//		for (int i = 0; i < N; i++)
//		{
//			//비교할 인덱스 저장
//			cnt = 0;
//			for (int j = 0; j < 8; j++)
//			{
//				if (p[i].first[j] >= '0' && p[i].first[j] <= '9')
//				{
//					iindex[i][cnt] = j;
//					cnt++;
//				}
//			}
//
//			for (int j = 0; j < M; j++)
//			{
//				int flag = 0;
//
//				for (int k = 0; k < cnt; k++)
//				{
//					if (str2[j][iindex[i][k]] == p[i].first[iindex[i][k]]) flag = 1;
//					else
//					{
//						flag = 0;
//						break;
//					}
//				}
//				if (flag == 1)
//				{
//					sum += p[i].second;
//					str2[j].clear();
//					continue;
//				}
//			}
//
//		}
//
//		cout << "#" << num << " ";
//		cout << sum << "\n";
//	}
//	
//	return 0;
//}