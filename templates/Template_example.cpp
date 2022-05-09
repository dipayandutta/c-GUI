#include<iostream>

using namespace std;

template <typename T>
T Max (T x,T y){
				return x>y?x:y;
}

int main(void){
				auto num = Max(20,21);
				cout << num << endl;

				auto num2 = Max(2.4f,static_cast<float>(1));
				cout << num2 << endl;

				Max<double>(3,6.2);
				/*Instantiate the Max function in Integer Type*/
				int(*pfn)(int,int) = Max;
				return 0;
}
