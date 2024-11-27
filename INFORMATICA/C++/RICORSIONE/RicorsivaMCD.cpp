#include <iostream>
using namespace std;

int MCD(int a, int b){

	if(b==0) return a;	
	return MCD(b, a%b);
	
}

int main(){
	
	int n1,n2;
	
	cout << "Inserire 2 numeri: " << endl;
	cin>>n1;
	cin>>n2;
	
	int mcd;
	
	if(n1>n2) mcd=MCD(n1,n2);
	else mcd=MCD(n2,n1);
	
	cout<<"L'MCD e': "<<mcd<<endl;

	return 0;
	
}
