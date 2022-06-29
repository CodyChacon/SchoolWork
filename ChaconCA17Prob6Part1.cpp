#include <iostream>

using namespace std;

double *reverse(double *arr, int len){
	double *rev = new double [len];

	for(int i = 0; i < len; i++){
		rev[len - i] = arr[i];
	}

	free(arr);

	return rev;
}

int main(){
	double *arr = new double[7];
	for(int i = 0; i < 7; i++){
		arr[i] = i;
	}

	reverse(arr, 7);

    for(int i = 0; i < 7; i++){
		cout << *(arr + i) << endl;
	}
}
