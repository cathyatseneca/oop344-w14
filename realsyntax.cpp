#include <iostream>
using namespace std;
/*argc tells you how many strings are in
  argv*/
int main(int argc,char* argv[]){
	for(int i=0;i<argc;i++){
		cout << argv[i] << endl;
	}
}