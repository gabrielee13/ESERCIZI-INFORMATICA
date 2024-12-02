/*1. Crea una classe Rettangolo con i seguenti metodi
costruttore (che accetti lato1 e lato2)
perimetro (che restituisce il perimetro)
area (che restituisce l'area)*/
#include <iostream>
using namespace std;

// get per vedere gli attributi privati
// set per modificare gli attributi privati

class Rettangolo{
	
	private:
		int lato1;
		int lato2;
		
	public:	
		Rettangolo(int l1, int l2){
			lato1=l1;
			lato2=l2;
		}
	
		int getLato1(){
			return lato1;
		}
		
			int getLato2(){
			return lato2;
		}
	
		void setLato1(int lato){
			lato1=lato;
		}
	
		void setLato2(int lato){
			lato2=lato;
		}
	
		int perimetro(){
			return (lato1+lato2)*2;
		}
		
		int area(){
			return lato1*lato2;
		}
	
};

int main(){
	
	
	int lato1,lato2;
	cout << "Inserire il primo lato: ";
	cin >> lato1;
	
	cout << "Inserire il secondo lato: ";
	cin >> lato2;
	
	Rettangolo* rettangolo= new Rettangolo(lato1,lato2);
	
	cout << "Il perimetro e': " << rettangolo->perimetro() << endl;
	cout << "L'area e': " << rettangolo->area() << endl;
	
	delete rettangolo;
	
	system("pause");
	return 0; 
}
