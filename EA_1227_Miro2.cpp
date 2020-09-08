//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//
//#define endl "\n"
//
//int Array[101][101];
//int visit[101][101];
//int dx[] = { 0,0,-1,1 };
//int dy[] = { 1,-1,0,0 };
//int Sx, Sy, Dx, Dy;
//int ans = 0, flag = 0;
//
//void input()
//{
//	for (int i = 0; i < 100; i++)
//		for (int j = 0; j < 100; j++)
//		{
////			cin >> Array[i][j];
//			scanf_s("%1d", &Array[i][j]); //문자열로 주어지므로 1개씩 받도록 scanf
//			if (Array[i][j] == 2)
//			{
//				Sx = j;
//				Sy = i;
//			}
//
//			else if (Array[i][j] == 3)
//			{
//				Dx = j;
//				Dy = i;
//			}
//		}
//}
//
//void DFS(int X, int Y)
//{
//	if (flag == 1) return;
//
//	visit[Y][X] = true;
//
//	for (int i = 0; i < 4; i++)
//	{
//		int nx = X + dx[i];
//		int ny = Y + dy[i];
//
//		if (nx > -1 && nx < 100 && ny > -1 && ny < 100)
//		{
//			if (visit[ny][nx] == false && Array[ny][nx] != 1)
//			{
//				if (Array[ny][nx] == 3)
//				{
//					ans = 1;
//					flag = 1;
//					return;
//				}
//
//				DFS(nx, ny);
//			}
//		}
//	}
//}
//
//void solve()
//{
//	DFS(Sx, Sy);
//
//	cout << ans << endl;
//}
//
//int main()
//{
////	std::ios::sync_with_stdio(false);
////	cin.tie(NULL);
//
//	int T;
//	for (int num = 1; num < 10 + 1; num++)
//	{
//		cin >> T;
//		memset(Array, 0, sizeof(Array));
//		memset(visit, 0, sizeof(visit));
//		ans = 0;
//		flag = 0;
//
//		input();
//
//		cout << "#" << num << " ";
//		solve();
//	}
//
//	return 0;
//}