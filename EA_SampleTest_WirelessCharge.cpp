//#include <iostream>
//#include <queue>
//#include <vector>
//#include <cstring>
//#include <cstdlib>
//#include <algorithm>
//#include <functional>
//using namespace std;
//
//#define endl "\n"
//
//int M, N;
//int Array[11][11];
//int A[101], B[101];
//int ans;
//int dx[] = { 0, 0, 1, 0, -1 };
//int dy[] = { 0, -1, 0, 1, 0 };
//int Ax = 0, Ay = 0, Bx = 9, By = 9;
//
//struct point
//{
//	int x;
//	int y;
//	int size;
//	int P;
//};
//
//struct charger
//{
//	int P;
//	int idx;
//};
//
//vector<point> v;
//vector<charger> Ca, Cb;
//
//void input()
//{
//	cin >> M >> N; // N은 배터리 개수
//	for (int i = 0; i < M; i++)
//		cin >> A[i];
//
//	for (int i = 0; i < M; i++)
//		cin >> B[i];
//
//	int x, y, c, p;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> x >> y >> c >> p;
//		v.push_back({ x - 1, y - 1, c, p });
//	}
//}
//
//void moving(int dir_A, int dir_B)
//{
//	Ax = Ax + dx[dir_A];
//	Ay = Ay + dy[dir_A];
//	Bx = Bx + dx[dir_B];
//	By = By + dy[dir_B];
//}
//
//bool cmp(const charger &v, const charger &u)
//{
//	if (v.P > u.P) return true;
//	else return false;
//}
//
//int charge()
//{
//	int C = 0;
//	//충전가능한지 검사
//	for (int i = 0; i < v.size(); i++)
//	{
//		//i번째 충전기와의 거리 계산
//		int dist_A = abs(Ax - v[i].x) + abs(Ay - v[i].y);
//		int dist_B = abs(Bx - v[i].x) + abs(By - v[i].y);
//
//		//충전범위면 충전가능목록에 넣기
//		if (dist_A <= v[i].size)
//			Ca.push_back({ v[i].P, i });
//
//		if (dist_B <= v[i].size)
//			Cb.push_back({ v[i].P, i });
//	}
//
//	sort(Ca.begin(), Ca.end(), cmp);
//	sort(Cb.begin(), Cb.end(), cmp);
//
//	//3가지 경우의 수
//	//1)A만 충전 가능할 때
//	if (Ca.size() > 0 && Cb.size() == 0)
//		C = Ca.front().P;
//
//	//2)B만 충전 가능할 때
//	else if (Ca.size() == 0 && Cb.size() > 0)
//		C = Cb.front().P;
//
//	else if (Ca.size() == 0 && Cb.size() == 0)
//		return 0;
//
//	//3)A,B가 하나 이상의 충전기를 지날 때
//	else
//	{
//		int tempA= 0, tempB = 0;
//		for (int i = 0; i < Ca.size(); i++)
//		{
//			for (int j = 0; j < Cb.size(); j++)
//			{
//				//같은 충전기를 공유할 때, 원래 충전량만 비교했으나 정확하게 하기 위해 idx도 비교해줘야 정답
//				if (Ca[i].P == Cb[j].P && Ca[i].idx == Cb[j].idx)
//				{
//					tempA = Ca[i].P; //반씩 나눠서 충전받으므로 한명만 온전히 받는 경우와 같다
//					tempB = 0;
//				}
//
//				else
//				{
//					tempA = Ca[i].P;
//					tempB = Cb[j].P;
//				}
//
//				C = max(C, tempA + tempB);
//			}
//		}
//	}
//
//	//충전목록 리스트 초기화
//	Ca.clear();
//	Cb.clear();
//
//	return C;
//}
//
//void solve()
//{
//	//단순 시뮬레이션이다. 차례차례 구현해보자, tip)A와 B의 좌표를 전역변수로 하면 하나의 함수로 모두 이동 가능
//	int ans = 0;
//	for (int i = 0; i < M + 1; i++) //0번부터 충전되므로 0번포함 -> 그럼 최대 M까지
//	{
//		//충전
//		ans += charge();
//
//		//이동
//		moving(A[i], B[i]);
//	}
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
//		v.clear();
//		memset(Array, 0, sizeof(Array));
//		memset(A, 0, sizeof(A));
//		memset(B, 0, sizeof(B));
//		Ax = 0, Ay = 0, Bx = 9, By = 9;
//
//		input();
//
//		cout << "#" << num << " ";
//		solve();
//	}
//
//	return 0;
//}