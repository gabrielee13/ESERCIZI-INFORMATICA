#include <iostream>
using namespace std;

const int dimensione=10;

int contaDispari(int array[], int fine){

	if(fine<0) return 0;
	if(array[fine]%2!=0) return contaDispari(array,fine-1)+1;
	return contaDispari(array, fine-1);

}

int main(){
	
	int array[dimensione];
	
	for(int i=0 ; i<dimensione ; i++){
		
		cout<<"Inserire il numero in posizione "<<i<<": "; 
		cin>>array[i];
		
	}
	
	int nDispari=contaDispari(array,dimensione-1);	
	
	cout<<"I numeri dispari sono: "<<nDispari<<endl;
	
	system("pause");
	return 0;
}
