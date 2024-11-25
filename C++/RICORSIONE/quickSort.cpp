#include <iostream>
using namespace std;

const int DIM=10;

int partition(int array[], int inizio, int fine){
	
	int pivot=array[fine];
	int i=inizio;
	
	for(int j=inizio ; j<fine; j++){
		
		if(array[j]<pivot){
			
			int temp=array[j];
			array[j]=array[i];
			array[i]=temp;
			i++;
			
		}	
		
	}
	
	int temp=array[i];
	array[i]=array[fine];
	array[fine]=temp;
	return i;
	
}

void quickSort(int array[], int inizio, int fine){
	
	if(fine<=inizio) return;
	int pi=partition(array,inizio,fine);
	
	quickSort(array,inizio,pi-1);
	quickSort(array,pi+1,fine);
	
}

int main(){
	
	int array[DIM];
	
	cout << "Inserire gli elementi dell'array: " << endl;
	
	for(int i=0; i<DIM ; i++){
		cout << i << " : ";
		cin>>array[i];
	}
	
	quickSort(array,0,DIM-1);
	
	for(int i=0; i<DIM; i++){
		cout << array[i] << " ";
	}
	
	cout<<endl;
	
	system("pause");
	return 0;
}
