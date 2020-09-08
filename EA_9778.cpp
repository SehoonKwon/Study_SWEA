//#include <iostream>
//#include <cstring>
//using namespace std;
//
//#define endl "\n"
//
//int N;
//int table[12] = { 0, 0, 4, 4, 4, 4, 4, 4, 4, 4, 16, 4 };
//int mytable[12];
//int sum;
//
//void input()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		int X;
//		cin >> X;
//		sum += X;
//		mytable[X]--;
//	}
//}
//
//void solve()
//{
//	int u_cnt = 0, d_cnt = 0;
//	for (int i = 2; i < 12; i++)
//	{
//		if (mytable[i] == 0) continue;
//
//		//단순히 1번 올리는게 아니라 남은 카드 갯수 모두를 더해야 됌. 여기서 실수
//		if (sum + i > 21) u_cnt += mytable[i];
//		else d_cnt += mytable[i];
//	}
//
//	if (u_cnt >= d_cnt) cout << "STOP" << endl;
//	else cout << "GAZUA" << endl;
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
//		memcpy(mytable, table, sizeof(table));
//		sum = 0;
//
//		input();
//		cout << "#" << num << " ";
//		solve();
//	}
//
//	return 0;
//}