/*Crea una classe Colore che rappresenta un colore in rgb. Sovraccarica il costruttore creandone due versioni: 
una che accetta i 3 colori base come parametri, una che non accetta parametri e crea il colore bianco (255,255,255).
 Crea poi il metodo misuraIntensità() che ritorni la media dei valori. Sovraccarica l'operatore == per confrontare due colori.
 La funzione dovrebbe restituire true se i componenti RGB dei due colori sono identici, altrimenti false.*/
#include <iostream>
using namespace std;

class Colore{
	
	private:
		int r;
		int g;
		int b;
		
	private:
		
		Colore(int r, int g, int b){
			this->r=r;
			this->g=g;
			this->b=b;			
		}
		Colore(){
			this->r=255;
			this->g=255;
			this->b=255;
		}
		double misuraIntensita(){
			double media=(this->r+this->g+this->b)/3;
			return media;
		}
		
		Colore operator == (Colore const& obj){
			if(this->misuraIntensita()==obj.misuraIntensita()) return true;
			return false;
		}

		
	
};

int main(){
	
	
	
	return 0;
}
