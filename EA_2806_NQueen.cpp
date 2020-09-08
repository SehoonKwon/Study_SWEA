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
//	//이전 행들을 탐색하면서 배치 가능 여부 확인
//	for (int i = 1; i < c; i++)
//	{
//		//열 검사. 한 행에는 하나 의 값을 넣으므로 행이 겹칠 경우는 없음. e.g) 1.1 과 1.3에 놓일 수 없음
//		if (row[i] == row[c])
//			return false;
//
//		//대각선 검사. 행끼리 차이 = 열끼리 차이 이면 대각선 상에 존재 (양 방향을 위해 절댓값으로 쓰면 한번에 검사 가능)
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
//		for (int i = 1; i < N + 1; i++) //i=1부터 시작이므로 인덱스 신경쓰자. N+1까지
//		{
//			row[col + 1] = i;
//			if (isPossible(col + 1))
//				DFS(col + 1);
//			else
//				row[col + 1] = 0;
//		}
//	}
//
//	//백트래킹이 되는 시점. 때문에 0으로 초기화
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