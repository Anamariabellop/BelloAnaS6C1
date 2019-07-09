#include<iostream>
#include<fstream>

using namespace std;

void adveccion(float t0, float tf,float constante, int npuntos, string filename);

int main(){

	float v=1.0;
	int N=80.0;	
	
	adveccion(0.0,2.0,v, N, "pulso.txt");
	return 0;
}

void adveccion(float t0, float tf,float constante, int npuntos, string filename){
	ofstream outfile;
	outfile.open(filename);


	double dx= (tf- t0)/(npuntos-1);
	float dt=(dx*0.1)/constante ;
	//float w= (constante*dt)/dx;
	cout << dx << endl;
	//float u[npuntos];
	float ufuturo[npuntos];
	float upasado[npuntos];
	float amplitud[npuntos];
	amplitud[0]=0;

	for(int i=1; i<npuntos ; i++)// para crear linspace con npuntos determinado
    {  
      amplitud[i]= amplitud[i-1]+dx;
    }

    for(int i=0; i< npuntos; i++){
    	if(amplitud[i]<0.75){
    		upasado[i]=1.0;
    	}

    	else if(amplitud[i]>1.25){
    		upasado[i]=1.0;
    	}
    	else{
    		upasado[i]=2.0;
    	}
    }

    for(int i=0; i < npuntos; i++){
    	ufuturo[i]= constante*(dt/dx)*(upasado[i]-upasado[i-1])+upasado[i];
    }

 	for (int i=0; i<npuntos; i++){
 		outfile<< amplitud[i] <<"  "<< upasado[i] << "  " << ufuturo[i] << endl;
 	}
    outfile.close();
}
