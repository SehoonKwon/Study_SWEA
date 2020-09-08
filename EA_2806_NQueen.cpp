//#include <iostream>
//#include <cstring>
//#include <math.h>
//using namespace std;
//
//int N, ans=0;
//int row[11] = { 0 };
//
//int isPossible(int c)
//{
//	//���� ����� Ž���ϸ鼭 ��ġ ���� ���� Ȯ��
//	for (int i = 1; i < c; i++)
//	{
//		//�� �˻�. �� �࿡�� �ϳ� �� ���� �����Ƿ� ���� ��ĥ ���� ����. e.g) 1.1 �� 1.3�� ���� �� ����
//		if (row[i] == row[c])
//			return false;
//
//		//�밢�� �˻�. �ೢ�� ���� = ������ ���� �̸� �밢�� �� ���� (�� ������ ���� �������� ���� �ѹ��� �˻� ����)
//		if (abs(row[i] - row[c]) == abs(i - c))
//			return false;
//	}
//
//	return true;
//}
//
//void DFS(int col)
//{
//	if (col == N)
//		ans++;
//	else
//	{
//		for (int i = 1; i < N + 1; i++) //i=1���� �����̹Ƿ� �ε��� �Ű澲��. N+1����
//		{
//			row[col + 1] = i;
//			if (isPossible(col + 1))
//				DFS(col + 1);
//			else
//				row[col + 1] = 0;
//		}
//	}
//
//	//��Ʈ��ŷ�� �Ǵ� ����. ������ 0���� �ʱ�ȭ
//	row[col] = 0;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		memset(row, 0, sizeof(row));
//		cin >> N;
//
//		ans = 0;
//		DFS(0);
//
//		cout << "#" << num << " ";
//		cout << ans << "\n";
//	}
//
//	return 0;
//}