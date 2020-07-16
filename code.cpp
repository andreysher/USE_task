#include <iostream>
using namespace std;

int main(){
	/*Разность чисел с одинаковым остатком от деления на 2 - четна*/

	// TODO: add 'int' type of A
	A[2][3] = {{0,0,0},
			   {0,0,0}};
	int N = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int b = 0;
		cin >> b;

		int ind = b % 2;

		if (b % 25 != 0){
			if (A[ind][2] < b){
				A[ind][2] = b;
			}
		}

		else{
			if (A[ind][0] < b){
				A[ind][1] = A[ind][0];
				A[ind][0] = b;
			}
			else{
				if (A[ind][1] < b){
					A[ind][1] = b;
				}
			}
		}

		// Поиск максимальной суммы
		int max_sum; int pair[2];
		for (int i = 0; i < 2; i++)
		{
			int sA = 0;
			int sB = 0;
			int sC = 0;

			sA = A[i][0] + A[i][1];
			sB = A[i][1] + A[i][2];
			sC = A[i][0] + A[i][2];

			if (sA > sB && sA > sC && sA > max_sum){
				max_sum = sA;
				pair[0] = A[i][0];
				pair[1] = A[i][1];
			}
			else if (sB > sA && sB > sC && sB > max_sum){
				max_sum = sB;
				pair[0] = A[i][1];
				pair[1] = A[i][2];
			}
			else if (sC > sA && sC > sB && sC > max_sum){
				max_sum = sC;
				pair[0] = A[i][0];
				pair[1] = A[i][2];
			}
		}
		cout << pair[0] << " " << pair[1];
		return 0;
	}
}
