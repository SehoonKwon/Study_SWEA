//#include <iostream>
//#include <cstring>
//using namespace std;
//
//#define endl "\n"
//
//int A[5001], B[5001], C[5001];
//int T, N, P;
//int last_idx, seq_cnt;
//int seq[500];
//
//void input()
//{
//	cin >> N;
//	for (int i = 1; i < N + 1; i++)
//		cin >> A[i] >> B[i];
//
//	cin >> P;
//	for (int i = 0; i < P; i++)
//	{
//		cin >> seq[seq_cnt];
//		seq_cnt++;
//	}
//}
//
//void check(int x)
//{
//	for (int i = A[x]; i < B[x] + 1; i++)
//		C[i]++;
//}
//
//void solve()
//{
//	for (int i = 1; i < N + 1; i++)
//		check(i);
//
//	for (int i = 0; i < seq_cnt; i++)
//	{
//		cout << C[seq[i]];
//		if (i != seq_cnt - 1) cout << " ";
//		else cout << endl;
//	}
//}
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(A, 0, sizeof(A));
//		memset(B, 0, sizeof(B));
//		memset(C, 0, sizeof(C));
//		last_idx = 0;
//		seq_cnt = 0;
//
//		input();
//
//		cout << "#" << num << " ";
//		solve();
//	}
//
//	return 0;
//}