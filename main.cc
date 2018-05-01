#include <iostream>

using namespace std;

int countLine(char* pName);

int countChar(char* pName);

int main(){
	char* pName;
	cout<< "Please enter a string: "<<endl;
	cin>>pName;
	int countLIne(char* pName);
	int countChar(char* pName);	

}

int countLine(char* pName){
	int line = 0;
	if(pName == " ")
		cout<<"Ohio University";
	else if(pName == "\n")
		line++;

	cout<< pName << "is " << line << "lines "<<endl;
	return 0;

}

int countChar(char* pName){
	int count = 0;
	if(pName == "")
		cout<<"Athens";
	else if(pName == " ")
		count ++;
	cout<<pName << "is "<< count << "characters" << endl;
	return 0;

}
