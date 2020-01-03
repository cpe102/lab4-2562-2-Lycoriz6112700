#include<iostream>
#include<cmath>
using namespace std;

double findDistance(double u,double a,double t){
  double s = u*t + (1.0/2)*a*t*t;
return s;
}
int main(){
  double x, y, z;
  cin >> x;
  cin >> y;
  cin >> z;
  cout << "s = " << findDistance(x,y,z);

  return 0;
}
