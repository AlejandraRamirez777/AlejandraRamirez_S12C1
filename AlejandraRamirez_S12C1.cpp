#include <iostream>

using namespace std;

int main () {

    int nX = 80;
    int nT = 300;

    double dt = 0.01;
    double c = 1.0;

    double U[nX];
    double X[nX];

    double cx = 0;
    double dx = 2.0/80.0;
    int ci = 0;
    double L = 2.0;

    for(int i=0; i<L;i++){
         X[i] = cx;
	 cx += dx;
         ci++;   
        cout << cx << endl;
    }

    for(int i=0; i<L;i++){
        if(X[i]<1.25 and X[i]>0.75){
	    U[i] = 2.0;
	}
    	else{
            U[i] = 0.0;
    	}
      cout << U[i] << endl;
    }


}

