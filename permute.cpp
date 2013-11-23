#9.5 Find out all permutations of a string of unique characters 
#include <iostream>
#include <string>
#include <vector>
using namespace std;
string insertcharat(string word,char first, int j){
	string start = word.substr(0, j);
	string end   = word.substr(j);
	return start + first + end;
}

std::vector<std::string> permutations(std::string str){
    std::vector<std::string> perms ;
	if ( str.empty()) return perms;
    
    
    if( str.length() == 0 ){
        perms.push_back("");
        return perms;
    }
	if(str.length() == 1){
		perms.push_back(str);
		return perms;
	}
    char first = str.at(0);
	std::string rem = str.substr(1);
	
	//Calculating f(n-1)
	std::vector<std::string> words = permutations(rem);
	if(words.size() == 0) {perms.push_back("");
        return perms;}
	//inserting a(n) at different positions in f(n-1)
	for(vector<string>::iterator it = words.begin();it!=words.end();++it){
		for(unsigned int j = 0; j <= it->length();j++){
			string s = insercharat(*it, first, j);
			perms.push_back(s);
		}
	}
   return perms; 
}


int main()
{
	vector<string> permutes = permutations("abcd");
	for ( vector<string>::iterator it = permutes.begin(); it != permutes.end();++it)
		cout<<""<<*it<<"\n";
}
