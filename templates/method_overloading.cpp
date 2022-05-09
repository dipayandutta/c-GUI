#include<iostream>

using namespace std;

int Max(int x,int y){
				return x>y ? x:y;
}
/*Same Max function for Float Datatype*/
float Max(float x,float y){
				return x>y?x:y;
}

int main(void){

				auto num = Max(10,11);
				cout << num;

				return 0;
}
