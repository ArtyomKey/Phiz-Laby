#include <iostream>

using namespace std;

double lOtG(double g, double T){
  double L;
  const double Pi = 3.14;
  L = (g/4*Pi*Pi)*T*T;
  return L;
}
int main(){
  int n;
  cin >> n;
  double T[n];
  double g[n];
  for(int i = 0; i < n; i++){
  cin >> T[i] >> g[i];
  }
  for(int i = 0; i < n; i++){
  cout << "l = " << lOtG(g[i], T[i]) << " T = " << T[i] << "\n";

}
}