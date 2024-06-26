#include <iostream>
#include <math.h>

using namespace std;
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	if (a+b<c || b+c<a || c+a<b){
		cout <<"INVALID\n";
	}
	else if ( a==b && b==c){
		cout <<"1" << endl;
	}
	else if ( a*a==b*b+c*c || b*b==a*a+c*c || c*c==b*b+a*a){
		cout <<"3" <<endl;
	}
	else if ( a==b || b==c || a==c){
		cout << "2"<< endl;
	}
	else{
		cout << "4"<<endl;
	}
	return 0;
}
