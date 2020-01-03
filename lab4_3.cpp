#include<iostream>
#include<cmath>
using namespace std;
 int findDivisor(int Num,int W ){
        if(Num > 1){
            if(Num%1 == 0){
                while (Num > 1)
    {
        if(Num%W == 0){
            return W;
        }else{
            W = W + 1;
        }
    };
            }
        }else{
;
        }
    
 }
 int main(){
int x , y =2;
cin >> x ;
cout << findDivisor(x,y) ;

return 0;
}
  
 


 
