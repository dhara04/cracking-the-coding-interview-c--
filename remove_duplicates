//Design an algorithm and write code to remove the duplicate characters in a string without using any additional buffer. NOTE: One or two additional variables are fine. An extra copy of the array is not.
//FOLLOW UP
//Write the test cases for this method.
#include<iostream>
#include<string>
using namespace std;

void removeduplicates(string str)
{
	if (str.empty()) {cout<<"Empty string";return;}
	string buffer ="";
	buffer = str.at(0);
	for(int i = 1 ; i < str.length() ; i++ )
	{
		/*if(string::npos == buffer.find(str[i],0))
			buffer += str[i]; */
		for(int j = 0 ; j < buffer.length() ; j++ )
		{
				
				if (str[i] == buffer[j]) break;
				else{	
					if(j == buffer.length()-1){
						buffer += str[i];
						break;
					}
				}
		}
	}
	 cout<<buffer<<"\n";
}
int main()
{
	removeduplicates("aaabbb");
	removeduplicates("aaabbccaa");
	removeduplicates("aaa");
	removeduplicates("");
	//removeduplicates(NULL);
	return 0;
}
