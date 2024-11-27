#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

const char nomeFile[]=".txt";

class ContoCorrente{
	
	public:
		string titolare;
		double saldo;
		int nTransazioni;
		
		ContoCorrente(string tit, double sal){
			
			caricaDatiFile();
			
		}
		
		void stampaConto(){
			
			cout << "Il conto ha " << saldo << " €" << endl;
			
		}
		
		void ricarica(double soldi){
			
			saldo+=soldi;
			nTransazioni++;
			cout << "Saldo aggiornato: " << saldo << endl;
			
		}
		
		bool prelievo(double soldi){
			
			if(soldi>saldo){
				
				cout << "Saldo insufficente" << endl;
				return false;
				
			}
			
			saldo-=soldi;
			cout << soldi << "€ erogati. Saldo aggiornato: " << saldo << endl;
			nTransazioni++;
			return true;
			
		}
		
		void caricaDatiFile(){
			
			ifstream iFile(nomeFile);
			string riga;
			int contatore;
			string elemento;
			
			while(getline(iFile,riga)){
				
				stringstream streamStringa(riga);
				contatore=0;
				while(getline(streamStringa,elemento,',')){
					
					switch(contatore){
						case 1: titolare=elemento; break;
						case 2: saldo=stoi(elemento); break;
						case 3: nTransazioni=stoi(elemento); break;
						contatore++;
					}
					
				}
	
			}
			iFile.close();		
		}
		
		void salvaDati(){
			
			ofstream oFile(nomeFile);
	
			oFile << "Titolare,saldo,numeroTransazioni \n";
			oFile << titolare << ",";
			oFile << saldo << ",";
			oFile << nTransazioni << ", \n";
			
			oFile.close();
		}
};

int main(){
	
	ContoCorrente* conto=new ContoCorrente("Mario Rossi",10000);
	int scelta;
	double cifra;
	
	do{
		
		cout << "MENU:" << endl;
		cout << "1) Visualizza il saldo" << endl;
		cout << "2) Preleva" << endl;
		cout << "3) Ricarica" << endl;
		cout << "4) Uscire" << endl;
		cin >> scelta;
		
		switch(scelta){
			
			case 1:
				conto->stampaConto();
				break;
			
			case 2:
				cout << "Che cifra vuoi inserire?" << endl;
				cin >> cifra;
				conto->ricarica(cifra);
			
			case 3: 
				cout << "Che cifra da prelevare?" << endl;
				cin >> cifra;
				conto->ricarica(cifra);
				break;
			
			case 4:
				conto->salvaDati();
				delete conto;
			default: 
				cout << "Scelta non disponibile" << endl;
				
		}	
		
	}while(scelta!=4);
	

	
	system("pause");
	return 0;
}
