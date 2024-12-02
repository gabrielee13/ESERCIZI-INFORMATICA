#include <iostream>
using namespace std;

class Cane{
	
	private:
		string nome;
		int eta;
		double peso;
		
	public:
		Cane(string n, int e, double p){
			nome=n;
			eta=e;
			peso=p;
		}
		void abbaia(){
			cout << "BAU BAU" << endl;
		}
		void mangia(){
			peso=peso+(peso*0.2/100);
		}
		void dormi(){
			cout << "ZZZZZ" << endl;
		}
		int getPeso(){
			return peso;
		}
};

int main(){
	
	string nome;
	int eta;
	double peso;
	cout << "Inserire il nome: "; 
	cin >> nome;
	cout << "Inserire l'eta: ";
	cin >> eta;
	cout << "Inserire il peso: ";
	cin >> peso;
	
	Cane* cane=new Cane(nome,eta,peso);
	
	cane->dormi();
	cane->abbaia();
	cane->mangia();
	
	cout << "Il peso ora e' di: " << cane->getPeso() <<endl;
	
	
	system("pause");
	return 0;
}
