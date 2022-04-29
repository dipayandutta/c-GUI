#include<iostream>
#include<math.h> 

using namespace std;

class Angle{
	double pi=3.14;
	double angle_value;

				public:
					Angle(double);

					int find_height(void){
						double angle_in_radian = angle_value *pi /100;
						return tan(angle_in_radian)*1000.0;
					}

};

Angle::Angle(double value){
	angle_value = value;
}

int main(){

	Angle calculate(2.23343);
	double result;
	result = calculate.find_height();
	cout << "Result "<<result << endl;
}
