//       Filename:  fullvector.cpp
//    Description:  
//        Version:  1.0 Rev: none Org: 
//        Created:  30-05-2018 21:49:10
//       Compiler:  g++  Author:  unixpod celo (), 
#include <iostream>
using namespace std;
int main(){
    int valores, par[5], impar[5], x, y, i, j;
    for (i=0;i<16;i++){
        cin >> valores;
            if (valores % 2 == 0) {            
                for (x=0;x<=5;x++) {

                    par[x]+=valores;            

                }
                        cout << "par[" << x << "] = " << valores << endl;
                if (valores % 2 == 1) {
                    for (j=0;j<=5;j++) {
                        
                        impar[j]+=valores;
                }
                        cout << "impar[" << j << "] = " << valores << endl;

                }
            }

            
    }
    return 0;
}

