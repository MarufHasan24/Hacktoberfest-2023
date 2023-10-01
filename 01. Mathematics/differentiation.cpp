#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
// limit function
double limit(int tt, double (*fc)(double))
{
  int n;
    double a = pow(10,-7);
    double lim = (fc(tt - a) + fc(tt + a)) / 2;
    return lim;
}
double func(double x){
        //return ((x*x)-1)/(x-1);
        return 2*x*x;
    }
int main(){
  cout << limit(1, func) << endl;
    return 0;
}
