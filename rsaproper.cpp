#include <iostream>
#include <math.h>

using namespace std;

int gcd(int a, int b) {

	int t;
	while(1){
		
		t = a % b;

		if(t == 0){return b;}
		
		a = b;
		b = t;
	}

}

int main() {

	double p = 13;
	double q = 11;

	//calculate n
	double n = p * q;
	double track;

	//calculate phi
	double phi = (p - 1) * (q - 1);

	//enter public key
	
	double e = 7;
	
	//verifies that e satisfies conditions for e
	//1 < e < phi and gcd(e, phi) == 1.
	
	while (e < phi) {

		track = gcd(e, phi);
		if(track == 1){
			break;
		}else{
			++e;
		}

	}
	
	double d1 = 1/e;
	double d = fmod(d1, phi); //finding decryption key
	double message = 9;
	double c = pow(message,e); //encrypting the message
	double m = pow(c,d); //decrypting the message
	c = fmod(c, n);
	m = fmod(m, n);

	cout << "Original Message = " << message;
	cout << endl << "p = " << p;
	cout << endl << "q = " << q;
	cout << endl << "n = pq = " << n;
	cout << endl << "phi = " << phi;
	cout << endl << "e = " << e;
	cout << endl << "d = " << d;
	cout << endl << "Encrypted message = " << c;
	cout << endl << "Decrypted message = " << m;
	cout << endl;

	return 0;
}
