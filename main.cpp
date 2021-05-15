#include <iostream>
#include <math.h>
using namespace std;
double long  g = (1 + sqrt(5)) / 2;

double long func(double long x) {
	return x*x-6*x;
}

int main() {
	double long a=0, b=5; 
	double long x1, x2;

	int i=0;
	while (i<10) {
		   x1 = b - (b - a) / g;
	       x2 = a + (b - a) / (g*2);
	       if (func(x1) <= func(x2)) 
	           a = x1;
	       else
	           b = x2;
	       i++;
	       cout<<endl<<i<<endl;
        cout << "(" << (a + b) / 2 << ", " << func((a + b) / 2) << ")";
	} 
    cout << "\ng="<<1/g;
	return 0;
}