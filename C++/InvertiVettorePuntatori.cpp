#include <iostream>
using namespace std;

const int dimensione=4;

void invertiArray(int array[], int inizio, int fine){

	if(fine<=inizio) return;
	int *p1=&array[inizio];
	int *p2=&array[fine];
	int temp=*p2;
	*p2=*p1;
	*p1=temp;
	
	return invertiArray(array,inizio+1,fine-1);
}

int main(){
	
	int array[dimensione];
	
	for(int i=0 ; i<dimensione ; i++){
		
		cout<<"Inserire il numero in posizione "<<i<<": ";
		cin>>array[i];
		
	}
	
	invertiArray(array,0,dimensione-1);
	
	cout<<"Array invertito: "<<endl;
	for(int i=0 ; i<dimensione ; i++) cout<<array[i]<<" ";
	
	system("pause");
	return 0;
}
