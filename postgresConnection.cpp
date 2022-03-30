#include<iostream>
#include<pqxx/pqxx>

using namespace std;
using namespace pqxx;

int main(int argc, char* argv[]){
	try{
		connection C("dbname=c_connection user=dipayan password=nodeMachine hostaddr=127.0.0.1 port=5432");
		if(C.is_open()){
			cout << "Opened Database ...." <<C.dbname();
		}else{
			cout << "Unable to open database.."<< endl;
			return 1;
		}
		C.disconnect();
	}catch(const std::exception &e){
		cerr<<e.what()<<std::endl;
		return 1;
	}
}
