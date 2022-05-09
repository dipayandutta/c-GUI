#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
T Max(T x, T y){
				cout << typeid(T).name() << endl;
				return x>y?x:y;
}

//Explicit Instatiation of the Max function char type

template char Max(char x, char y);

//Explicit Specialization
template<> const char * Max <const char*> (const char *x, const char *y){
				cout << "Max <const char*>()" << endl;
				return strcmp(x,y)>0?x:y;
}

int main(void){

				const char *b {"B"};
				const char *a {"A"};
				auto s = Max(a,b);
				cout << s << endl;
				return 0;
}

