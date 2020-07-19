#include <iostream>
#include <math.h>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;

long long int p, q, e, d, m, encmess, totient, result, encryptionNum, publickey;
unsigned long long int decryptedmessage[5000];
bool flag = 0;
int breakandDecrypt(int e, int n, int m, int p, int q);
void printMessage(int number);
void encodeMessage(string message);
void encryptMessage(int n, int e);
unsigned long long int unencmess[5000];
unsigned long long int encmessage[5000];
int encryptedMessage[] = {10, 7, 58, 30, 23, 62, 7, 64, 62, 23, 62, 61, 7, 41, 62, 21, 7, 49, 
					75, 7, 69, 53, 58, 37, 37, 41, 10, 64, 50, 7, 10, 64, 21, 62,
					61, 35, 62, 61, 62, 7, 52, 10, 21, 58, 7, 49, 75, 7, 62, 26, 
					22, 53, 30, 21, 10, 37, 64};
	
int main(){
	
	encodeMessage("abcdefghij klmnopqrstuvwxyz");

	cout << "encoded message: ";
	int j = 0;
	while(unencmess[j] > 0){
		cout << unencmess[j] << " ";
		++j;
	}
	cout << endl;
	
	p = 3;
	q = 5;
	int n = p * q;
	e = 7;

	encryptMessage(n, e);

	int i = 0;
	while(encryptedMessage[i] > 0){
		
		decryptedmessage[i] = breakandDecrypt(e, n, encmessage[i], p, q);
		++i;
	}

	for(int i = 0; i < sizeof(encryptedMessage); ++i){
		int var = decryptedmessage[i];
		printMessage(var);
	}
	cout << endl;

}

void encryptMessage(int n, int e){
	
	cout << "uh" << endl;
	cout << "size of encryptedMessage[]: " << sizeof(encryptedMessage) << endl;
	
	int i = 0;
	cout << "e = " << e << endl;
	cout << "n = " << n << endl;
	while(unencmess[i] > 0){
		
		//cout << "encrypting character: " << i;
		//cout << "\t" << unencmess[i] << "^" << e << "mod " << n << endl;
		long double powresult = pow(unencmess[i], e);
		unsigned long long int powresultint = powresult;

		encmessage[i] = powresultint % n;
		//cout << "\tresult: " << powresultint % n << endl;
		//cout << " DONE" << endl;
		++i;
	}
	cout << "finished encryption" << endl;

	cout << "new message: ";

	i = 0;
	while (encmessage[i] > 0){
		
		cout << encmessage[i] << " ";
		++i;
	}
	cout << endl;
}


void encodeMessage(string message){

	for(int i = 0; i < message.size(); ++i){
		
		switch(message[i]){

			case 'a':
				unencmess[i] = 2;
				break;
			case 'b':
				unencmess[i] = 3;
				break;
			case 'c':
				unencmess[i] = 4;
				break;
			case 'd':
				unencmess[i] = 5;
				break;
			case 'e':
				unencmess[i] = 6;
				break;
			case 'f':
				unencmess[i] = 7;
				break;
			case 'g':
				unencmess[i] = 8;
				break;
			case 'h':
				unencmess[i] = 9;
				break;
			case 'i':
				unencmess[i] = 10;
				break;
			case 'j':
				unencmess[i] = 11;
				break;
			case 'k':
				unencmess[i] = 12;
				break;
			case 'l':
				unencmess[i] = 13;
				break;
			case 'm':
				unencmess[i] = 14;
				break;
			case 'n':
				unencmess[i] = 15;
				break;
			case 'o':
				unencmess[i] = 16;
				break;
			case 'p':
				unencmess[i] = 17;
				break;
			case 'q':
				unencmess[i] = 18;
				break;
			case 'r':
				unencmess[i] = 19;
				break;
			case 's':
				unencmess[i] = 20;
				break;
			case 't':
				unencmess[i] = 21;
				break;
			case 'u':
				unencmess[i] = 22;
				break;
			case 'v':
				unencmess[i] = 23;
				break;
			case 'w':
				unencmess[i] = 24;
				break;
			case 'x':
				unencmess[i] = 25;
				break;
			case 'y':
				unencmess[i] = 26;
				break;
			case 'z':
				unencmess[i] = 27;
				break;
			default:
				unencmess[i] = 28;
				break;

		}
	}
}







void printMessage(int number){

		switch(number){

			case 2: 
				cout << "A";
				break;
			case 3: 
				cout << "B";
				break;
			case 4: 
				cout << "C";
				break;
			case 5: 
				cout << "D";
				break;
			case 6: 
				cout << "E";
				break;
			case 7: 
				cout << "F";
				break;
			case 8: 
				cout << "G";
				break;
			case 9: 
				cout << "H";
				break;
			case 10: 
				cout << "I";
				break;
			case 11: 
				 cout << "J";
				 break;
			case 12: 
				 cout << "K";
				 break;
			case 13: 
				 cout << "L";
				 break;
			case 14: 
				 cout << "M";
				 break;
			case 15: 
				 cout << "N";
				 break;
			case 16: 
				 cout << "O";
				 break;
			case 17: 
				 cout << "P";
				 break;
			case 18: 
				 cout << "Q";
				 break;
			case 19: 
				 cout << "R";
				 break;
			case 20: 
				 cout << "S";
				 break;
			case 21: 
				 cout << "T";
				 break;
			case 22: 
				 cout << "U";
				 break;
			case 23: 
				 cout << "V";
				 break;
			case 24: 
				 cout << "W";
				 break;
			case 25: 
				 cout << "X";
				 break;
			case 26: 
				 cout << "Y";
				 break;
			case 27: 
				 cout << "Z";
				 break;
			case 28: 
				 cout << " ";
				 break;
			default: 
				 break;
		
		}
}


int breakandDecrypt(int e, int n, int encmess, int p, int q){	
	e = e;
	n = n;
	m = encmess;
	p = p;
	q = q;
	
	totient = (p - 1) * (q - 1);
	
	for (int i = 2; i < 1000000; ++i){
		
		if((e * i) % totient == 1){
			d = i;
			flag = 1;
			//cout << "decryption key found: " << d << endl;
			break;
		}
	}
	
	if(flag == 0){
		cout << "decryption failed" << endl;
	}
	
	result = 1;
	
	for(int i = 1; i <= d; ++i){

		result = (result * m) % n;
	       	//cout << result << endl;	
		
	}
	
	return result;
}	

