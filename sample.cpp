#include <iostream>
#include <cmath>
using namespace std;

char* encryptROT13(char word[], int encryptionNum);

int main(){
	
	int arr1[] = {3, 4, 4, 3, 4, 2, 3, 4, 3, 2};
	int arr2[] = {4, 2, 3, 4, 2, 3, 4, 5, 3, 4, 5, 3, 4, 6, 4, 5};
	int ans[25];//sizeof(arr1) + sizeof(arr2)];
	
	for(int i=0;i<10;i++)
	{
		for(int j=0; j<15;j++) {
			ans[i+j]+=arr1[i]*arr2[j];
			ans[i+j+1]=ans[i+j+1]+ans[i+j]/10;
			ans[i+j]%=10;
		}
	}
	cout << endl;

	double i = 13;
	double j = 21;
	double res = pow(j, i);


	cout << pow(j, i) << endl;
	
	unsigned long long int resdub = res;
	
	cout << j << "^" << i << " mod 77" << endl;

	unsigned long long int result = resdub % 77;
	cout << "result: " << result << endl;
	
	return 0;
}
