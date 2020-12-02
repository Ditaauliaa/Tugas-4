#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
	int arr[9];
	int *n = arr;
	
	for(int i = 0; i <= 9; i++){
	cout << "Masukan nilai ke " << i+1 << " : ";
	cin >> *(n+i);
	}
	
	cout << "Output address dari array adalah ";
	for (int o = 0; o <= 9; o++)
	cout << (n+o) << " ";
	
	
	cout << endl << "Output nilai dari array adalah ... " << endl;
	for(int p = 0; p <= 9; p++){
		cout << "Nilai ke " << p << " adalah " << *(n+p) << endl;
	}
	
	getch;
	return 0;
}
