#include <iostream>
using namespace std;

class Persona{

	public:
		string nome;
		string cognome;
		int eta;

		void saluta(){
			
			cout << "Ciao sono "<< nome << " " << cognome << " e ho " << eta << " anni" << endl;
			 
		}
		
		Persona(string n, string c, int e){
			
			nome=n;
			cognome=c;
			eta=e;
			
		}			
	
		~Persona(){
			
			cout << "Oggetto distrutto" << endl;
			
		}
};

int main(){

	Persona* studente1=new Persona("Maria","Rossi",16);	
	Persona* studente2=new Persona("Tommaso", "Verdi",15);
	
	studente1->saluta();
	studente2->saluta();
	
	delete studente1;
	delete studente2;
	
	system("pause");
	return 0;
}
