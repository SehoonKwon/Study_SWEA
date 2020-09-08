//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <vector>
//using namespace std;
//
//#define endl "\n"
//
//int T, N, M;
//int cnt[41]; // N, M의 최대 범위인 20 + 20 = 40
//
//struct point
//{
//	int cnt;
//	int idx;
//};
//
//bool cmp(const point &u1, const point &u2) // 반드시 const 선언 ! 안그러면 에러
//{
//	if (u1.cnt == u2.cnt)            // 사용자 정의 비교함수 만드는거 제대로 기억합시다
//		return u1.idx < u2.idx;		// 같은 경우에 다음 비교를 먼저 선언하고, 1번째 기준이 되는 것을 else로 놓을 것!
//	else
//		return u1.cnt > u2.cnt;		// 이 경우 첫번째 기준은 else에 있는 cnt이고 두번째 기준은 if문에 있는 것처럼 cnt가 같은 경우에 그다음 비교~ 
//}
//
//void input()
//{
//	cin >> N >> M;
//}
//
//void solve()
//{
//	for (int i = 1; i < N + 1; i++)
//	{
//		for (int j = 1; j < M + 1; j++)
//			cnt[i + j]++;
//	}
//
//	vector<point> v;
//	for (int i = 2; i < 41; i++) //최소 합인 2부터 시작
//	{
//		if (cnt[i] != 0)
//		{
//			v.push_back({ cnt[i], i });
//		}
//	}
//
//	sort(v.begin(), v.end(), cmp);
//
//	for (int i = 0; i< v.size(); i++)
//	{
//		if (i < v.size() && v[i].cnt == v[i + 1].cnt)
//		{
//			cout << v[i].idx << " ";
//		}
//		else
//		{
//			cout << v[i].idx << endl;
//			return;
//		}
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
//
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(cnt, 0, sizeof(cnt));
//
//		input();
//
//		cout << "#" << num << " ";
//		solve();
//	}
//
//	return 0;
//}