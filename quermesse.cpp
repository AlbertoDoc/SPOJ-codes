#include <iostream>
using namespace std;
int main () {

  long long N,M,cont=1,resp;

  cin>>N;

  while(N!=0 && N<=10000){
    cout<<"Teste "<<cont<<endl;
    cont++;
    for(int i=0;i<N;i++){
      cin>>M;
      if(M==i+1){
        resp=M;
      }
    }
    cout<<resp<<endl;
    cout<<endl;
    cin>>N;
  }
}
