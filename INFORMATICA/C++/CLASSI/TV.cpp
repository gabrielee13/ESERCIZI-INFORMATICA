/*3. Crea una classe televisione con i necessari attributi e i seguenti metodi:
cambia canale inserendo il numero del canale
aumenta canale
diminuisce canale
aumenta volume
riduce volume
imposta silenzioso
rimuove silenzioso
accende tv
spegne tv*/
#include <iostream>
using namespace std;

// string stringa=(eta>=18)? "maggiorenne" : "minorenne"

class Televisione{
	
	private:
		int canaleAttuale;
		int volume;
		bool isAccesa=false;
		bool silenzioso=false;
		
	public:
		Televisione(int c, int v, bool a){
			canaleAttuale=c;
			volume=v;
			isAccesa=a;
		}
		int getcanale(){
			return canaleAttuale;
		}
		int getvolume(){
			return volume;
		}
		bool getisAccesa(){
			return isAccesa;
		}
		bool getsilenzioso(){
			return silensioso;
		}
		void aumentaCanale(){
			canaleAttuale+=1;
		}
		void diminuisciCanale(){
			canaleAttuale-=1;
		}
		void aumentaVolume(){
			volume+=1;
		}
		void riduciVolume(){
			volume-=1;
		}
		void impostaSilenzioso(){
			silenzioso=true;
		}
		void rimuoviSilenzioso(){
			silenzioso=false;
		}
		void accendi(){
			isAccesa=true;
		}
		void spegni(){
			isAccesa=false;
		}
};		

int main(){
	
	Televisione* televisione=new Televisione(0,0,false);
	int scelta;
	do{
		cout << "Menu" << endl;
		cout << "1) Aumenta canale" << endl;
		cout << "2) Diminuisci canale" << endl;
		cout << "3) Aumenta volume" << endl;
		cout << "4) Diminuisci il volume" << endl;
		cout << "5) Imposta silenzioso" << endl;
		cout << "6) Rimuovi silenzioso" << endl;
		cout << "7) Accendi" << endl;
		cout << "8) Spegni" << endl;
		cout << "0) ESCI" << endl;
		cin >> scelta;		
		
		switch(scelta){
			
			case 1:{
				if(televisione->getisAccesa()) televisione->aumentaCanale();
				else cout << "La TV e' spenta" << endl;
				cout << "Il canale attuale della TV e': " << televisione->getcanale() << endl;
				break;
			}
			case 2:{
				if(televisione->getisAccesa()) televisione->diminuisciCanale();
				else cout << "La TV e' spenta" << endl;
				cout << "Il canale attuale e': " << televisione->diminuisciCanale() <<endl;
				break;
			}
			case 3:{
				if(televisione->getisAccesa()) televisione->aumentaVolume() << endl;
				else cout << "La TV e' spenta" << endl;
				cout << "Il volume attuale e': " << televisione->getvolume() << endl;
				break;
			}
			case 4:{
				if(televisione->getisAccesa()) televisione->riduciVolume();
				else cout << "La TV e' spenta" << endl;
				cout << "Il volume attuale e': " << televisione->getvolume();
				break;
			}
			case 5:{
				if(televisione->getisAccesa() && televisione->getsilenzioso())
				break;
			}
		}
		
	}while(scelta!=0);
	
	return 0;
}
