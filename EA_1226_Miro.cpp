//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int Array[17][17];
//int visit[17][17];
//int dx[] = { 0,0,-1,1 };
//int dy[] = { 1,-1,0,0 };
//int Sx, Sy;
//int ans = 0;
//
//void input()
//{
//	for(int i=0; i<16; i++)
//		for (int j = 0; j < 16; j++)
//		{
//			scanf("%1d", &Array[i][j]);
//			if (Array[i][j] == 2)
//			{
//				Sx = j;
//				Sy = i;
//			}
//		}
//}
//
//void DFS(int x, int y)
//{
//	if (ans == 1 || visit[y][x] == true) return;
//	visit[y][x] = true;
//
//	for (int i = 0; i < 4; i++)
//	{
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//
//		if (nx > -1 && nx < 16 && ny > -1 && ny < 16)
//		{
//			if (Array[ny][nx] == 3)
//			{
//				ans = 1;
//				return;
//			}
//			else if (Array[ny][nx] == 0)
//				DFS(nx, ny);
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
//	for (int num = 1; num < 10 + 1; num++)
//	{
//		int G; //필요 없는 값 담기용
//		cin >> G;
//		memset(Array, 0, sizeof(Array));
//		memset(visit, 0, sizeof(visit));
//		ans = 0;
//
//		input();
//		cout << "#" << num << " ";
//		solve();
//	}
//
//	return 0;
//}