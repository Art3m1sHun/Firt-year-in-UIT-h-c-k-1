/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/

#include <iostream>
using namespace std;
#define MAX 100

void Nhapmang(int a[], int &n){
	for(int i = 0; i < n; i++)
		cin>>a[i];
}

bool isBenford(int a[], int n){
	int count_1 = 0;
	int count_4 = 0;
	for (int i = 0; i < n; i++) {
		int number = a[i];
		while ( number >= 10) number /= 10;
		if (number == 1) count_1++;
		if (number == 4) count_4++;
	}
	if (count_1 == 3 && count_4 == 1) return true;
	else return false;
}


int main (){
	int a[MAX], n = 10;
	Nhapmang(a, n);
	if (isBenford(a, n) == true)
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;
	return 0;
}
