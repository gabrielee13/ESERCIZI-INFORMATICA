#include <iostream>
using namespace std;

int posizioneFibonacci(int n){ //trova la N esima cifra nella sequenza di fibonacci
	
	if(n==0) return 0;
	if(n==1) return 1;
	return posizioneFibonacci(n-1) + posizioneFibonacci(n-2);
	
}

int main(){
	
	int numero;

	cout << "Inserire un numero: ";
	cin >> numero;
	
	cout << "La posizione numero " << numero << " nella sequenza di fibonacci e' uguale a: " << posizioneFibonacci(numero) << endl;
	
	system("pause");
	return 0;
	
}
