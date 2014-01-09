#include <iostream>
using namespace std;
/*watch the endianess of your system*/
int main(void){
	int x=5;
	int* p=&x;
	char* ch=(char*) p;
	int y=(int)*ch;
	cout << y << endl;
	return 0;
}