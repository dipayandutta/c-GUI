#include<iostream>

using namespace std;

class sample{
				private:
								int a;
				public:
								int b;
								void init(int a){this->a = a;}
								void display(){cout << " " <<a<<endl;}
};

int main(){
				//pointer to object declearation
				sample *sam = new sample();

				cout << "Using * and . Operators"<< endl;
				//assing value to a 
				(*sam).init(100);
				//assing value to b
				(*sam).b = 20;

				//printing the values
				(*sam).display();
				cout << "B --> "<< (*sam).b<<endl;


				//Using the Arrow Operator
				
				cout << "Using the Arrow Operator";
				//value assing using arrow operator
				sam->init(400);
				sam->b = 32;

				//print the values using the arrow operator
				cout << "B --> "<< sam->b<<endl;
				sam->display();

				return 0;
}
