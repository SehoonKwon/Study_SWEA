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
//	cin >> M >> N; // N�� ���͸� ����
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
//	//������������ �˻�
//	for (int i = 0; i < v.size(); i++)
//	{
//		//i��° ��������� �Ÿ� ���
//		int dist_A = abs(Ax - v[i].x) + abs(Ay - v[i].y);
//		int dist_B = abs(Bx - v[i].x) + abs(By - v[i].y);
//
//		//���������� �������ɸ�Ͽ� �ֱ�
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
//	//3���� ����� ��
//	//1)A�� ���� ������ ��
//	if (Ca.size() > 0 && Cb.size() == 0)
//		C = Ca.front().P;
//
//	//2)B�� ���� ������ ��
//	else if (Ca.size() == 0 && Cb.size() > 0)
//		C = Cb.front().P;
//
//	else if (Ca.size() == 0 && Cb.size() == 0)
//		return 0;
//
//	//3)A,B�� �ϳ� �̻��� �����⸦ ���� ��
//	else
//	{
//		int tempA= 0, tempB = 0;
//		for (int i = 0; i < Ca.size(); i++)
//		{
//			for (int j = 0; j < Cb.size(); j++)
//			{
//				//���� �����⸦ ������ ��, ���� �������� �������� ��Ȯ�ϰ� �ϱ� ���� idx�� ������� ����
//				if (Ca[i].P == Cb[j].P && Ca[i].idx == Cb[j].idx)
//				{
//					tempA = Ca[i].P; //�ݾ� ������ ���������Ƿ� �Ѹ� ������ �޴� ���� ����
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
//	//������� ����Ʈ �ʱ�ȭ
//	Ca.clear();
//	Cb.clear();
//
//	return C;
//}
//
//void solve()
//{
//	//�ܼ� �ùķ��̼��̴�. �������� �����غ���, tip)A�� B�� ��ǥ�� ���������� �ϸ� �ϳ��� �Լ��� ��� �̵� ����
//	int ans = 0;
//	for (int i = 0; i < M + 1; i++) //0������ �����ǹǷ� 0������ -> �׷� �ִ� M����
//	{
//		//����
//		ans += charge();
//
//		//�̵�
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