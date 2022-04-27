#include<boost/lambda/lambda.hpp>
#include<iostream> 
#include <istream>
#include<iterator> 
#include<algorithm> 

int main(){
				typedef std::istream_iterator<int> in;
				std::cout<<"Type any number"<<std::endl;
				std::for_each(
												in(std::cin),in(),std::cout<<(boost::lambda::_1 * 10)<<"Type another number"
												);
	return 0;
}
