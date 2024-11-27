#include <iostream>
using namespace std;

int sommaVettore(int b, int* c){
	
	if(b==0) return 0;  
	return *c + sommaVettore(b-1, c+1);
	
}

int main(){
	
	int dim=5;
	int a[dim];
	
	for(int i=0 ; i<dim ; i++){
		
		cout << "Inserire il numero in posizione " << i << " : ";
		cin >>a[i];
		
	}
	
	int somma=sommaVettore(dim, &a[0]);
	
	cout << somma << endl;
	
	system("pause");
	return 0;
	
}
