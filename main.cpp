#include <iostream>
using namespace std;

int main(){
//Qui vanno definite le variabili

  float a = 0;
  float b = 0;
  float c = 0;
  
cin >> a >> b >> c;

//Qui va scritto il codice per eseguire i calcoli richiesti

  float areatriangolo = (a*b)/2;
  float areaquadrato = a*a;
  float arearettangolo = a*b;
  float areatrapezio = ((b+a)*c)/2;
  
  cout << areatriangolo << endl;
  cout << areaquadrato << endl;
  cout << arearettangolo << endl;
  cout << areatrapezio << endl;

}
