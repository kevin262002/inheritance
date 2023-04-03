#include<iostream>

using namespace std;

class x{
	
	public:
		int a,b,c;
	
};

class y : public x{
	
	public:
	
	void setdata(){
		
		cout<<"Enter A : ";
		cin>>a;
		cout<<"Enter B : ";
		cin>>b;
		cout<<"Enter C : ";
		cin>>c;
		
	}
	void getdata(){
		
		cout<<"Sum Of Cube To Given Number Is : ";
		cout<<(a*a*a)+(b*b*b)+(c*c*c);
	}	
};

int main(){
	
	y obj;
	
	obj.setdata();
	obj.getdata();
	
	return 0;
}
