#include <iostream>
using namespace std;
int main () {

  long long N,cont50=0,cont10=0,cont5=0,cont1=0,cont=1;

  while(cin>>N && N!=0){
    cout<<"Teste "<<cont<<endl;
    cont++;
    while(N>0){
      if(N-50>=0){
        N-=50;
        cont50++;
      }
      else if(N-10>=0){
        N-=10;
        cont10++;
      }
      else if(N-5>=0){
        N-=5;
        cont5++;
      }
      else if(N-1>=0){
        N-=1;
        cont1++;
      }
    }
    cout<<cont50<<" "<<cont10<<" "<<cont5<<" "<<cont1<<endl;
    cont50=0;
    cont10=0;
    cont5=0;
    cont1=0;
    cout<<endl;
  }
}
