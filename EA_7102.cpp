//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <vector>
//using namespace std;
//
//#define endl "\n"
//
//int T, N, M;
//int cnt[41]; // N, M�� �ִ� ������ 20 + 20 = 40
//
//struct point
//{
//	int cnt;
//	int idx;
//};
//
//bool cmp(const point &u1, const point &u2) // �ݵ�� const ���� ! �ȱ׷��� ����
//{
//	if (u1.cnt == u2.cnt)            // ����� ���� ���Լ� ����°� ����� ����սô�
//		return u1.idx < u2.idx;		// ���� ��쿡 ���� �񱳸� ���� �����ϰ�, 1��° ������ �Ǵ� ���� else�� ���� ��!
//	else
//		return u1.cnt > u2.cnt;		// �� ��� ù��° ������ else�� �ִ� cnt�̰� �ι�° ������ if���� �ִ� ��ó�� cnt�� ���� ��쿡 �״��� ��~ 
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
//	for (int i = 2; i < 41; i++) //�ּ� ���� 2���� ����
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