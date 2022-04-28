#include<iostream> 
using namespace std;

class Constructor{
	int n,m;
				public:
					Constructor(int,int);

					void display(void){
						cout << "M"<< m;
						cout << endl;
						cout << "N" <<n;
						cout << endl;
					}
};

Constructor::Constructor(int x,int y){
	m=x;
	n=y;
}
int main(){

	Constructor object(19,20);

	object.display();

}
