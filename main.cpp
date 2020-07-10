#include <iostream>
#include <math.h>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;

long long int p, q, e, d, n, m, encmess, totient, result;
int decryptedmessage[1000];
bool flag = 0;
long int factorthatnigga(long int n);
int breakandDecrypt(int e, int n, int m);
void printMessage(int number);

int main(){
	
	//long int p, q, e, d, n, m, encmess;
	//char message[1000], encmessage[1000], decmessage[1000];
	
	cout << "I work, for the most part!\n";
	cout << "now then... what's all this?\n";
	
	int encryptedMessage[] = {10, 7, 58, 30, 23, 62, 7, 64, 62, 23, 62, 61, 7, 41, 62, 21, 7, 49, 
					75, 7, 69, 53, 58, 37, 37, 41, 10, 64, 50, 7, 10, 64, 21, 62,
					61, 35, 62, 61, 62, 7, 52, 10, 21, 58, 7, 49, 75, 7, 62, 26, 
					22, 53, 30, 21, 10, 37, 64};
	int i = 0;
	while(encryptedMessage[i] > 0){
		
		decryptedmessage[i] = breakandDecrypt(13, 77, encryptedMessage[i]);
		++i;
	}

	//for(int i = 0; i < 57; ++i){
	//	cout << decryptedmessage[i] << " ";
	//}
	for(int i = 0; i < 57; ++i){
		int var = decryptedmessage[i];
		printMessage(var);
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
				 cout << "----FFFFUUUUUCCCCKKKKKK----" << endl;
				 break;
		
		}
}


int breakandDecrypt(int e, int n, int encmess){	
	e = e;
	n = n;
	m = encmess;
	p = 7;
	q = 11;
	
	totient = (p - 1) * (q - 1);
	
	for (int i = 2; i < 10000; ++i){
		
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
	
	//cout << "\tdecrypting message proper" << endl;
	//cout << "encmess = " << m << endl;
	//cout << "d = " << d << endl;
	//cout << "n = " << n << endl;
	
	result = 1;
	for(int i = 1; i <= d; ++i){

		result = (result * m) % n;
	       	//cout << result << endl;	
		
	}
	
	cout << "\tdecrypted message: " << result << endl;
	cout << "\tencrypted message: " << m << endl << endl;	
	
	return result;
}	

