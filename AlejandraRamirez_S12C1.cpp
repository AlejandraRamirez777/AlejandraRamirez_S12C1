#include <iostream>
#include<algorithm> // for copy()
#include<vector>

using namespace std;

int main () {

    //CREAR FUNCION
    int nX = 80;
    int nT = 300;

    double dt = 0.01;
    double c = 1.0;

    //U es para Ui y j
    vector<double> U(nX);
    //Uf es para Ui y j+1
    vector<double> Uf(nX);
    vector<double> X(nX);

    double cx = 0;
    double dx = 2.0/80.0;
    int ci = 0;
    double L = 2.0;

    for(int i=0; i<nX;i++){
         X[i] = cx;
	 cx += dx;
  
        //cout << cx << endl;
    }

    for(int i=0; i<nX;i++){
        if(X[i]<1.25 and X[i]>0.75){
	    U[i] = 2.0;
            Uf[i] = 2.0;
	}
    	else{
            U[i] = 1.0;
	    Uf[i] = 1.0;
    	}
      //cout << X[i] <<  " "<< U[i] << endl;
    }


    //Generar recorrido
    for(int i=0; i<nT;i++){
        for(int k=1; k<(nX-1);k++){
            Uf[k] = U[k] - c*(dt/dx)*(U[k]-U[k-1]);
	    cout << X[k] <<  " " << Uf[k] << endl;
        }
        copy(Uf.begin(), Uf.end(), U.begin());
    }

}

//double Uij1(double c, )

