/*

Realizzare un programma OOP in c++ che gestisce un semplice database di automobili

Le operazione possibili sono:
1. Inserimento di un'automobile nel db
2. Inserimento di un nuovo cliente nel db
3. Ricerca dell'auto acquistata da un cliente a partire dal cognome e nome
4. eliminazione dell'automobile dal db
5. eliminazione del cliente dal db
6. modifica cliente dal bd
7. modifica automobile dal db
8. ricerca clienti che hanno acquistato un certo modello di auto
9. stampa di un cliente
10. stampa di un auto

Auto:
marca modello kw annoCostruzione

Cliente:
cognome nome dataAcquisto 

*/

#include <iostream>
#include <vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

// sizeof(array) = numero di byte 

const int maxAutomobili=10;

class Persona{
	
	private:
		string cognome;
		string nome;
		string dataAquisto;
		
		
	public:
		Persona(string cognome, string nome, string dataAcquisto){
			
			this->cognome=cognome;
			this->nome=nome;
			this->dataAquisto=dataAcquisto;
		}
		
};

class Automobile{
	
	private:
		string marca;
		string modello;
		double kw;
		int annoCostruzione;
		bool isAcquistata;
		
	public:
		void inserisciAutomobile(string marca, string modello, double kw, int annoCostruzione){
			this->marca=marca;
			this->modello=modello;
			this->kw=kw;
			this->annoCostruzione=annoCostruzione;
			this->isAcquistata=false;
		}
};

class Database{
	
	private:
		vector<Persona>persone;
		vector<Automobile>automobili;
	
	public:
	
		void inserisciAutomobile(){
			string marca,modello;
			double kw;
			int annoCostruzione;
			bool isAcquistata=false;
			
			cout << "Inserire la marca: ";
			cin >> marca;
			cout << "Inserire il modello: ";
			cin >> modello;
			cout << "Inserire i kw: ";
			cin >> kw;
			cout << "Inserire l'anno di costruzione: ";
			cin >> annoCostruzione;
						
		}
		
		void inserisciPersona(){
		}
		
		
};

int main(int argc, char** argv) {

	int scelta;
	
	vector<Database>dataBase;
	
	do{
		
		cout << "GESTIONE DATABASE" << endl;
		cout << "1)" << endl;
		cout << "2)" << endl;
		cout << "3)" << endl;
		cout << "4)" << endl;
		cout << "5)" << endl;
		cout << "6)" << endl;
		cout << "7)" << endl;
		cout << "8)" << endl;
		cout << "9)" << endl;
		cout << "10)" << endl;
		
		switch(scelta){
			
		}
		
		
	}while(scelta!=0);
	
	
	return 0;
}
