#include<iostream>
#include <string.h> 
#include <regex>
#include <iterator>

using namespace std;

int main(){

				string mystr = "This is the software testing Help portal";
				string replace_with;
				cout << "Input String :" << mystr << endl;

				//regex to match string beginning with 'p'
				regex regexp("p[a-zA-Z]+");
				cout << "Enter string to replace "<< endl;
				cin >> replace_with;
				cout << "Replace the word 'portal' with word"<<replace_with<<endl;

				cout << regex_replace(mystr,regexp,replace_with);
			return 0;
}
