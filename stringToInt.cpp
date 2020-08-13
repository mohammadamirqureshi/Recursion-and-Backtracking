#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int stringToInt(string str, int i,int n){
	
	if(n>1){
		return int(str[n-1]+(pow(str[n-1],i+1)*stringToInt(str,i+1,n-1)));
	}
	
	else{
		return int(str[n-1]);
	}

}

int main(){
	
	string str;
	
	cout<<"Enter string : ";
	cin>>str;
	
	cout<<"string in int : "<<stringToInt(str,0,str.length());
	
	return 0;
}
