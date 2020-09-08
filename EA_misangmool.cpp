//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//
//#define endl "\n"
//
//int Array[101][101];
//int N, M, K;
//int v_cnt;
//
//struct point
//{
//	int x;
//	int y;
//	int num;
//	int dir; //»óÇÏÁÂ¿ì => 1, 2, 3, 4
//	int idx;
//	int dead;
//};
//
//struct point2
//{
//	int num;
//	int dir;
//	int idx;
//};
//
//vector<point> v;
//vector<point2> chk[101][101];
//
//void input()
//{
//	cin >> N >> M >> K;
//	for (int i = 0; i < K; i++)
//	{
//		int x, y, num, dir;
//		cin >> y >> x >> num >> dir;
//		v.push_back({ x,y,num,dir, i });
//		v_cnt++;
//	}
//}
//
//void moving(int X)
//{
//	if (v[X].dead == 1) return;
//
//	int nx = v[X].x, ny = v[X].y, num = v[X].num, dir = v[X].dir;
//
//	if (dir == 1)
//	{
//		ny--;
//		if (ny == 0)
//		{
//			num /= 2;
//			dir = 2;
//		}
//	}
//	else if (dir == 2)
//	{
//		ny++;
//		if (ny == N - 1)
//		{
//			num /= 2;
//			dir = 1;
//		}
//	}
//	else if (dir == 3)
//	{
//		nx--;
//		if (nx == 0)
//		{
//			num /= 2;
//			dir = 4;
//		}
//	}
//	else if (dir == 4)
//	{
//		nx++;
//		if (nx == N - 1)
//		{
//			num /= 2;
//			dir = 3;
//		}
//	}
//
//	v[X].num = num;
//	v[X].dir = dir;
//	v[X].x = nx;
//	v[X].y = ny;
//	chk[ny][nx].push_back({ num, dir, X });
//}
//
//void cal()
//{
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (chk[i][j].size() > 1)
//			{
//				int my_max = 0, dir = 0, idx = 0;
//				for (int k = 0; k < chk[i][j].size(); k++)
//				{
//					if (my_max < chk[i][j][k].num)
//					{
//						my_max = chk[i][j][k].num;
//						dir = chk[i][j][k].dir;
//						idx = chk[i][j][k].idx;
//					}
//				}
//
//				int sum = 0;
//				for (int k = 0; k < chk[i][j].size(); k++)
//				{
//					sum += chk[i][j][k].num;
//					v[chk[i][j][k].idx].dead = 1;
//				}
//
//				v.push_back({ j, i, sum, dir, v_cnt, 0 });
//				v_cnt++;
//			}
//		}
//	}
//}
//
//void init()
//{
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			chk[i][j].clear();
//}
//
//void solve()
//{
//	for (int i = 0; i < M; i++)
//	{
//		init();
//
//		for (int j = 0; j < v.size(); j++)
//			moving(j);
//
//		cal();
//	}
//
//	int ans = 0;
//	for (int i = 0; i < v.size(); i++)
//		if (v[i].dead == 0)	ans += v[i].num;
//	
//	cout << ans << endl;
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
//		memset(Array, 0, sizeof(Array));
//		v.clear();
//
//		input();
//		cout << "#" << num << " ";
//		solve();
//	}
//
//	return 0;
//}