//#include <iostream>
//using namespace std;
//
//void turn90(int **Array, int **Array90);
//
//int T,N;
//
//int main()
//{
//	cin >> T;
//	for (int num = 1; num < T + 1; num++)
//	{
//		cin >> N;
//
//		int** Array = new int*[N];
//		int** Array90 = new int*[N];
//		int** Array180 = new int*[N];
//		int** Array270 = new int*[N];
//
//		for (int i = 0; i < N; i++)
//		{
//			Array[i] = new int[N];
//			Array90[i] = new int[N];
//			Array180[i] = new int[N];
//			Array270[i] = new int[N];
//		}
//
//		for (int i = 0; i < N; i++)
//			for (int j = 0; j < N; j++)
//				cin >> Array[i][j];
//
//		turn90(Array, Array90);
//		turn90(Array90, Array180);
//		turn90(Array180, Array270);
//
//		cout << "#" << num << "\n";
//
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < N; j++)
//			{
//				cout << Array90[i][j];
//			}
//			cout << " ";
//
//			for (int j = 0; j < N; j++)
//			{
//				cout << Array180[i][j];
//			}
//			cout << " ";
//
//			for (int j = 0; j < N; j++)
//			{
//				cout << Array270[i][j];
//			}
//			cout << "\n";
//		}
//
//		for (int i = 0; i < N; i++)
//		{
//			delete[] Array[i];
//			delete[] Array90[i];
//			delete[] Array180[i];
//			delete[] Array270[i];
//		}
//
//		delete[] Array;
//		delete[] Array90;
//		delete[] Array180;
//		delete[] Array270;
//
//		Array = NULL;
//		Array90 = NULL;
//		Array180 = NULL;
//		Array270 = NULL;
//	}
//
//	return 0;
//}
//
//void turn90(int **Array, int **Array90)
//{
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//		{
//			Array90[i][j] = Array[N - 1 - j][i];
//		}
//
//}
