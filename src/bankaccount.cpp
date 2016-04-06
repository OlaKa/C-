#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

//This is a old exercise that i made in 2005-2006 or there about.From some C++ learning book i guess.
//Found it on my old laptop. Compiled with Dev C++ 4.9.9.2 back then. That is why system ("pause") does not work i guess. 
//The code is self-explainatory

class Bankkonto
{
     
  private:        
  string namn;
  string kontonummer;
  float saldo;
 
  public:
  Bankkonto (string &, string &, float);      
  void show();   
  void deposit(float);   
     
};

Bankkonto::Bankkonto (string &name, string &konto, float pengar){
     
              
     namn=name;
     kontonummer=konto;
     saldo=pengar;                
    
}
                    
                    
void Bankkonto::show(){
    
     cout<<"Namn:"<<namn<<"\n";
     cout<<"Kontonummer:"<<kontonummer <<"\n";
     cout<<"Saldo:"<<saldo<<"\n";
                
}                    

void Bankkonto::deposit(float money){
    
     saldo+=money;  
}


int main()
{
    string namn= "Ola";
    string konto= "111-222-333";     
    Bankkonto obj (namn , konto , 123.55 );
    obj.show();
    obj.deposit(100);
    obj.show();
   
    //system("pause"); obsolete command!
    return 0; //is more appropriate
}
