/*
Calculations for the Goldbach Conjecture - Serial Implementation
*/

#include<stdio.h>

#define n 10

int isprime(int);

//check for prime number
int isprime(int m){
	int i;
	for(i=2;i<=m/2;i++){
		if(m%i==0){
			return 1;
		}
	}
	return 0;
}

//main function
int main(){
	int n,i,r1,r2;
	FILE *fgbach = fopen("fbach.dat","w+");
	
	//goldbach
	//check if even
	if (n%2 != 0){
		return 0;
	}
	//check if less than 2
	if (n<=2){
		return 0;
	}
	//goldbach
	for(i=0;i<=n/2;i++){
		r1 = isprime(i);
		r2 = isprime(n-i);
		if(r1==0 && r2==0){
			fprintf(fgbach,"%d = %d + %d\n",n,i,n-i);
		}
	}
	fclose(fgbach);
	return 0;
}




