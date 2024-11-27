#include <iostream>
using namespace std;
int contaCifre(int a){
	
	if(a==0) return 0;
	return 1+contaCifre(a/10);	
	
}

int main(){
	
	int n1 = 2673;
	int n2 = contaCifre(n1);
	cout << "Il numero ha " << n2 << " cifre/a " << endl;
	
	system("pause");
	return 0;
	
}
