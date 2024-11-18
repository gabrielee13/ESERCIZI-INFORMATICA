#include <iostream>
using namespace std;

int fattoriale(int n){ //5! 5x4x3x2x1=120
	
	if(n==0 || n==1) return 1; //Se solo n==0 va all'infinito finchè non finisce lo spazio in memoria
	return n*fattoriale(n-1);
	
}

int main(){
	
	int numero;
	
	cout << "Inserire un numero: ";
	cin >> numero;
	
	cout << "Il fattoriale di " << numero << " e' : " << fattoriale(numero) << endl;
	
	system("pause");
	return 0;
	
}

