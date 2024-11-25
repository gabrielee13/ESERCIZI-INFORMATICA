#include <iostream>
#include <string>
using namespace std;

bool isSottostringa(const string a, const string b){
	
	if(b.size()<a.size()) return false;
	
	if(b.substr(0, a.size())==a) return true;
	
	return isSottostringa(a, b.substr(1, b.size()-1));
	
}

int main(){
	
	string stringa1;
	string stringa2;
	
	cout << "Inserire la stringa principale: ";
	cin >> stringa1;
	
	cout << "Inserire una seconda stringa: ";
	cin >> stringa2;
	
	if(isSottostringa(stringa1,stringa2)) cout << "La stringa " << stringa2 << " e' una sottostringa di " << stringa1 << endl;
	
	system("pause");
	return 0;
}
