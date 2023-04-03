#include<iostream>

using namespace std;

class P{
	
	public:
		
		float a;
		
		void temperature(){
	
		cout<<"Enter Temperature : ";
		cin>>a;
	}
};
class Q : public P{
	
	public:
		void toFehrenheit(){
			
			float b;
			b=a*9/5+32;
			cout<<"Fehrenheit : "<<b<<endl;
		}
};
class R : public Q{
	public:
		
		void toKelvin(){
		
			a=a+273;
			cout<<"Kelvin : "<<a;
		}
};

int main(){
	
	R obj;
	
	obj.temperature();
	obj.toFehrenheit();
	obj.toKelvin();
	
	
	return 0;
}

