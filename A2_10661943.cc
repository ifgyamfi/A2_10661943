/* A program to check whether or not a number entered is prime */

#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	int a, num, x=0;
	//Prompt the user to enter any positive number
	cout<<"Enter any positive number: ";
	cin>>num;

	if(num == 1 || num == 0 || num < 0){
	    cout<<num<<" is not a prime number"<<endl;
	    } else {
	    	for(a = 2; a <= num / 2; a++) 
			
	    		if(num % a == 0){
	        	x++;
	    }
			if(x >= 1){
	    		cout<<num<<" is not a prime number.";
			} else { 
				cout<<num<<" is a prime number.";
			}			
	}
	return 0;
}

