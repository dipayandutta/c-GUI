#include <iostream>

using namespace std;

struct student{
				char name[80];
				int age;
				float percentage;
};

//creating a structure object
struct student *emp = NULL;

int main(){
				//Assigning memory to struct variable emp
				emp = (struct student*) malloc(sizeof(struct student));
				emp->age=20;
				emp->percentage=90.21;

				cout <<" "<<emp->percentage;
				cout <<" "<< emp->age;

				return 0;

}
