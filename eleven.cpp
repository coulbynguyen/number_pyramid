#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main(){
   	int n, x, y = 0;
	cout << "ENTER N" << endl;
	cin >> n;
  cout << endl;
	for(int i = 0; i < n; i++){

	  	y = 0;
	   	for(int a = 0; a <=i; a++){
		   	x = pow(10,a);
			y = y + x;
		}
		y = y * y;
		cout << y << endl;
	}
	return 0;
}
