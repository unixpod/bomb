//       Filename:  fullvector.cpp
//    Description:  
//        Version:  1.0 Rev: none Org: 
//        Created:  30-05-2018 21:49:10
//       Compiler:  g++  Author:  unixpod celo (), 
#include <iostream>
using namespace std;
int main(){
    int valores, par[5], impar[5], x=0, y, i, j=0;
    for (i=0;i<15;i++){
        cin >> valores;

            if (valores % 2 == 0) {            

                    par[x]+=valores;
                    x++;            

                        cout << "par[" << x - 1 << "] = " << valores << endl;
                        if (x == 5) {
                            x=0;
                        }
                }
                if (valores % 2 == 1) {
                        
                        impar[j]+=valores;
                        j++;
                        cout << "impar[" << j - 1 << "] = " << valores << endl;
                        if (j == 5) {
                            j=0;
                        }

                }
            }

            
    return 0;
    }


