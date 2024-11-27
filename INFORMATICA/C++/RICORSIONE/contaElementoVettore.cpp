#include <iostream>
using namespace std;

int contaElemento(int *a, int b, int c){
	
	if(b==0) return 0;
	if(a[b-1]==c) return 1 + contaElemento(a, b-1, c);
	return contaElemento(a, b-1, c);
	
}

int main(){
	
	int dim=5;
	int a[dim];
	
	for(int i=0 ; i<dim ; i++){
		
		cout << "Inserire il numero in posizione: " << i << " : ";
		cin >> a[i];
		
	}
	
	int numero;
	cout << "Inserire il numero da contare: " ;
	cin >> numero;
	
	int nVolte=contaElemento(&a[0],dim,numero);
	
	cout << "Il numero " << numero << " si ripete " << nVolte << " volta/e" << endl;
	
	system("pause");
	return 0;
	
}
