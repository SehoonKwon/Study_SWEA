//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <vector>
//#include <queue>
//using namespace std;
//
//#define endl "\n"
//
//int N, W, H;
//int Array[16][13];
//int MIN = 9999;
//int visit[4][13];
//
//struct point
//{
//	int x, y;
//	int size;
//};
//
//void input()
//{
//	cin >> N >> W >> H;
//	for (int i = 0; i < H; i++)
//		for (int j = 0; j < W; j++)
//			cin >> Array[i][j];
//}
//
//void start(int num)
//{
//	int idx = 0;
//
//	queue<point> q;
//
//	for (int i = 0; i < H; i++)
//		if (Array[i][num] != 0)
//		{
//			q.push({ num, i, Array[i][num] });
//			break;
//		}
//
//	while (!q.empty())
//	{
//		int X = q.front().x;
//		int Y = q.front().y;
//		int S = q.front().size;
//		q.pop();
//
//		//상하좌우 순
//		for (int i = Y; i > Y - S && i > -1; i--)
//			if (Array[i][X] != 0)
//			{
//				if(Array[i][X] > 1) q.push({ X, i, Array[i][X] });
//				Array[i][X] = 0;
//			}
//
//		for (int i = Y; i < Y + S && i < H; i++)
//			if (Array[i][X] != 0) 
//			{
//				if (Array[i][X] > 1) q.push({ X, i, Array[i][X] });
//				Array[i][X] = 0;
//			}
//
//		for (int i = X; i > X - S && i > -1; i--)
//			if (Array[Y][i] != 0)
//			{
//				if (Array[Y][i] > 1) q.push({ i, Y, Array[Y][i] });
//				Array[Y][i] = 0;
//			}
//
//		for (int i = X; i < X + S && i < W; i++)
//			if (Array[Y][i] != 0)
//			{
//				if (Array[Y][i] > 1) q.push({ i, Y, Array[Y][i] });
//				Array[Y][i] = 0;
//			}
//	}
//
//	for (int i = H - 1; i > -1; i--)
//	{
//		for (int j = 0; j < W; j++)
//		{
//			if (Array[i][j] == 0)
//			{
//				for (int k = i - 1; k > -1; k--)
//					if (Array[k][j] != 0)
//					{
//						Array[i][j] = Array[k][j];
//						Array[k][j] = 0;
//						break;
//					}
//			}
//		}
//	}
//
//	return;
//}
//
//int check()
//{
//	int cnt = 0;
//	for (int i = 0; i < H; i++)
//		for (int j = 0; j < W; j++)
//			if (Array[i][j] != 0) cnt++;
//
//	return cnt;
//}
//
//void DFS(int cnt)
//{
//	if (cnt == N)
//	{
//		int cnt_B = check();
//		MIN = min(MIN, cnt_B);
//		return;
//	}
//
//	for (int i = 0; i < W; i++)
//	{
//		int save[16][13]; //이게 중요. 지역변수로 선언해야 백트래킹이 가능. 이러면 굳이 벡터로 저장해서 복구할 필요 없이 전 상태로 복구 가능
//		memcpy(save, Array, sizeof(Array));
//		visit[cnt][i]++;
//		start(i);
//		DFS(cnt + 1);
//		memcpy(Array, save, sizeof(save));
//		visit[cnt][i]--;
//	}
//
//	return;
//}
//
//void solve()
//{
//	DFS(0);
//
//	cout << MIN << endl;
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int T;
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		MIN = 9999;
//		memset(Array, 0, sizeof(Array));
//
//		input();
//
//		cout << "#" << num << " ";
//		solve();
//
//	}
//
//	return 0;
//}