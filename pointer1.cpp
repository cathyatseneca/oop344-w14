#include <iostream>
using namespace std;
void f1(int* a,int* b){
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
int main(void){
	int x=5;
	int y=10;
	f1(&x,&y);
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
}