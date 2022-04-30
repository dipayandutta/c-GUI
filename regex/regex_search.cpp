#include<iostream> 
#include <regex>
#include <string.h>

using namespace std;

int main(){
	string mystr = "She sells-sea shells in the sea";

	//regex expression pattern to search for
	regex regexp("t[a-z_]+");


	//flag type for determining the matchin behaviour
	smatch m;

	//regex_search that searches pattern 
	regex_search(mystr,m,regexp);
	
	cout << "Sting that matches the pattern"<<endl;
	for (auto x : m){
		cout << x << " " << endl;
	}

	return 0;
}
