#include <fstream>
#include <iostream>
using namespace std;

int explicita(float xini, float xfini, float delta_t,float delta_t1, float delta_t2, float omega);
void implicita(float xini, float xfini, float delta_t,float delta_t1, float delta_t2, float omega);

int main(){
  float omega=0.1;
  explicita(0.0, 4/omega, 0.1, 0.01, 1.0,  omega);
  implicita(0.0, 4/omega, 0.1, 0.01, 1.0,  omega);
  return 0;
}

int explicita(float xini, float xfini, float delta_t, float delta_t1, float delta_t2, float omega){
    
    float y=1.0;
    float yn ;
    float y0;
     float y1 ;
    float y2 ;
        float yn1;
        float yn2;
    for (int i=xini;i<xfini;i++){
        
        yn = y - (delta_t*omega*y);
        yn1 = y1 - (delta_t1*omega*y1);
        yn2 = y2 - (delta_t2*omega*y2);
        
         cout << yn << " "<<" "<< yn1 <<" " <<yn2 << endl;
        y=yn;
        y1=yn1;
        y2=yn2;
    }
        return 0;
}
void implicita(float xini, float xfini, float delta_t,float delta_t1, float delta_t2, float omega){
    
    float y=1.0;
     float yn ;
    float y1 ;
    float y2 ;
    
        float yn1 ;
        float yn2 ;
    for (int i=xini;i<xfini;i++){
       
        yn  = y/(1+delta_t*omega);
        yn1  = y1/(1+delta_t1*omega);
        yn2  = y2/(1+delta_t2*omega);
        
        
         cout << " " << yn << " "<<" "<< yn1 <<" " <<yn2 << endl;
        y=yn;
        y1=yn1;
        y2=yn2;
    }
           
    
    
}
