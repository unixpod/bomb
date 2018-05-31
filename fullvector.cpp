//       Filename:  fullvector.cpp
//    Description:  
//        Version:  1.0 Rev: none Org: 
//        Created:  30-05-2018 21:49:10
//       Compiler:  g++  Author:  unixpod celo (), 
#include <iostream>
using namespace std;
int main(){
    int valores, par[5], impar[5], x=0, y, i, j=0, z;
    for (i=0;i<15;i++){
        cin >> valores;

            if (valores % 2 == 0) {            

                    par[x]+=valores;
                    x++;            

                    
                        if (x == 4) {
                            for (x=0;x<5;x++){
                                cout << "par[" << x << "] = " << par[x]<< endl;
                            }
                            x=0;
                        }
                }
                if (valores % 2 == 1) {
                        
                        impar[j]+=valores;
                        j++;
                        if (j == 4) {
                            for (j=0;j<5;j++){
                                 cout << "impar[" << j << "] = " << impar[j] << endl;

                            }
                            j=0;
                        }

                }
                
            }
            for(int z =0; z<x;z++  ){
                cout << "par[" << z << "]" << impar[z] << endl;

            }
            for (int z =0; z<j;z++){
                cout << "impar[ =" << z << "]" << par[z] << endl;

            }
            
    return 0;
    }


