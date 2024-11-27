#include <iostream>
#include <string>
using namespace std;

int contaCaratteri(string a){
	
	if(a=="") return 0;
	return 1+contaCaratteri(a.substr(1));
	
}

int main(){
	
	cout << "Inserire una stringa: ";
	string stringa;
	cin>>stringa;
	
	cout << "La stringa' composta da: " << contaCaratteri(stringa) << " caratteri" << endl;	
	
	system("pause");
	return 0;
}
