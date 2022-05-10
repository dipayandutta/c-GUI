#include <iostream>
using namespace std;

//Non Type Template Argument
template<int size>
void Print(){
				//As size is constant we can make an array
				char buffer[size];
				cout << size << endl;
}
/*Create an array that return the sum of all array elements

template <typename T>
T Sum(T *parr, int size){
				T sum{};
				for (int i=0;i<size;++i){
					sum += parr[i];
				}
				return sum;
}
*/
template <typename T, int size>
T Sum(T(&arr)[size]){
		T sum{};
		for (int i=0;i<size;i++){
			sum += arr[i];
		}
		return sum;
}
int main(void){
			int i = 10;
			Print<sizeof(i)>();
			Print<3>();

			//Array for sum function
			int arr[]{3,1,3,4};
			//creating a reference of an array which holds the storage of the array
			int (&ref)[4] = arr;
			//int sum = Sum(arr,4);
			int sum = Sum(arr);
			cout << sum<<endl;
			return 0;
}
