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
		
	public:
		
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
		
		bool operator==(const Colore& obj){
			if(this->r != obj.r) return false;
			if(this->g != obj.g) return false;
			if(this->b != obj.b) return false;
			return true;
		}

};

int main(){
	
	Colore* colore1=new Colore(); // bianco
	Colore* colore2=new Colore(128,168,98); 
	
	double intensita1=colore1->misuraIntensita();
	double intensita2=colore2->misuraIntensita();
	
	if(*colore1==*colore2){
		cout << "Uguali" << endl;
	}
	else{
		cout << "Diversi" << endl;
	}
	
	system("pause");
	return 0;
}
