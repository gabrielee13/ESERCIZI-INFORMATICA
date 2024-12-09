#include <iostream>
#include <cmath>
using namespace std;

class Punto{
	
	private:
		int x;
		int y;
		
	public:
		Punto(int x, int y){
			this->x=x;
			this->y=y;
		}
		Punto(){
			this->x=0;
			this->y=0;
		}
		
		double distanza(){
			double d=sqrt(pow(this->x, 2)+pow(this->y, 2));
			return d;
		}
		double distanza(Punto p){
			int x1=this->x;
			int x2=p.x;
			int y1=this->y;
			int y2=p.y;
			
			return sqrt(pow(x1-x2)+pow(y1-y2));
		}
			
};

int main(){

	Punto* a=new Punto(3,6);
	Punto* b=new Punto(2,4);
	
	double distanza1=a->distanza();
	double distanza2=a->distanza(*b);
	
	system("pause");
	return 0;
}
