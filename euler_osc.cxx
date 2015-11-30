/*
30.11.15
Maria Kersten
Oszillator
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
const int N = 200;
const int n = 2;
const double pi = acos(-1);
double temp[n];
double b[n];
double f[n];
double y = 0;
f[0] = 1,0;
f[1] = 0;
b[0] = 1,0;
b[1] = 0;

double dt = 20*pi/N;

cout << 0 << "\t" << f[0] << "\t" << b[0] << "\t" << y << endl;
	for(int i=0; i<N; i++){
		temp[0] = f[0] + dt*f[1];
		temp[1] = f[1] - dt*f[0];
		f[0] = temp[0];
		f[1] = temp[1];
		temp[1] = 1/(1+pow(dt,2)) * (b[1] - dt* b[0]);
		temp[0] = 1/(1+pow(dt,2)) * b[0] + dt/(1+pow(dt,2)) * b[1];
		b[0] = temp[0];
		b[1] = temp[1];
		y = cos(dt*(i+1));
cout << i*dt << "\t" << f[0] << "\t" << b[0] << "\t" << y << endl;
	}


return 0;
}
