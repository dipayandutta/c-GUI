#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main(){

    if(regex_match("SoftwareTesting",regex("(Soft)(.*)")))
        cout << "string::literal ==> Matched \n";
		else
						cout <<"Not Matched"<<endl;


		const char mystr[] = "SoftwareTestingHelp";
		string str ="Software";
		regex str_expr("(Soft)(.*)");

		if(regex_match(str,str_expr))
						cout << "Matched"<<endl;
		else 
						cout << "Not Matched" <<endl;
    
		cmatch cm;
		smatch sm;
		regex_match(mystr,cm,str_expr);
		regex_match(str,sm,str_expr);

		regex_match(mystr,cm,str_expr,regex_constants::match_default);
		
		cout << "The Matches Are"<< endl;
		for(unsigned int i=0;i<sm.size();++i){
			cout << "[" << sm[i] << "]";
		}
		cout << endl;
		return 0;

}
