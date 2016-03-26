#include <iostream>
using namespace std;

int main()
{
	int n, m = 1;
	int gameBoard[3][3] = {	1, 2, 3,
							4, 5, 6,
							7, 8, 9	};
	for (n=1;n<=3;n++) {
		for (m=1;n<=3;m++) {
			cout << gameBoard[n-1][m-1] << " ";			
		}
		cout << endl;
	}
	
	return 0;
}
