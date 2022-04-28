#include<iostream>

using namespace std;

class Base{
				private:
								int pvt=10;
				protected:
								int prot=2;
				public:
							  int pub=3;

				// function to access the private member
				int getPVT(){
					return pvt;
				}

};

class public_inheritance : public Base {
	public:
					int getProt(){
						return prot;
					}
					int getPUB(){
						return pub;
					}
} ;

int main(){
	public_inheritance publicObject;
	cout << "Private =" << publicObject.getPVT()<<endl;
	cout << "Protected ="<< publicObject.getProt()<<endl;
	cout << "Public ="<< publicObject.getPUB()<<endl;
}
