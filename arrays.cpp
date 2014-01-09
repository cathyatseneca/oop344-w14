#include <iostream>
using namespace std;
void f1(int* a){
	cout << *a << endl;
	cout << a[5] << endl;
}
int main(void){
	int array[10];
	for(int i=0;i<10;i++){
		array[i]=i+1;
	}
	f1(array);
}