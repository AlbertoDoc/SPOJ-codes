#include <iostream>
#include <string>
using namespace std;

int main () {

	long long N,cont=0;

	cin>>N;

	string str,resp;

	cin>>str;

	cin>>resp;

	for(int i=0;i<str.size();i++){
		if(str[i]==resp[i]){
			cont++;
		}
	}
	cout<<cont<<endl;
}
