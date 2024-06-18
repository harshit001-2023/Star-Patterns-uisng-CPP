#include <iostream>
using namespace std;

void pattern(int n) {
	/*
		* * * *
		* * * *
		* * * *
		* * * *
	*/
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}
void pattern1(int n) {
	/*
		*
		* *
		* * *
		* * * *
		* * * * *
	*/
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++)	{
			cout << "* ";
		}
		cout << endl;
	}
}
void pattern2(int n) {
	/*
	1
	12
	123
	1234
	12345
	*/
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j;
		}
		cout << endl;
	}
}
void pattern3(int n) {
	/*
	1
	22
	333
	4444
	55555
	*/
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i;
		}
		cout << endl;
	}
}
void pattern4(int n) {
	/*
		* * * * *
		* * * *
		* * *
		* *
		*
	*/
	for (int i = n; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			cout << "* ";
		}
		cout << endl;
	}
}
void pattern5(int n) {
	/*
		12345
		1234
		123
		12
		1
	*/
	for (int i = n; i > 0; i--) {
		for (int j = 1; j <= i; j++) {
			cout << j;
		}
		cout << endl;
	}
}
void pattern6(int n) {
	/*
	   *   
	  ***  
	 ***** 
	*******

	*/
	for (int i = n; i > 0; i--) {
		//spaces1
		for (int j = i; j > 1; j--) {
			cout << " ";
		}
		//stars
		for (int j = i; j <= (2 * n - i); j++) {
			
			cout << "*";	
		}
		//spaces2
		for(int j = i; j > 1; j--){
			cout << " ";
		}
		cout << endl;
	}
}
void pattern7(int n) {
	/*
		*******
		 ***** 
		  ***  
		   *   
	*/
	for (int i = 0; i < n; i++) {
		//Spaces
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		//stars
		for (int j = 0; j < (2 * n -(2 * i + 1)); j++){
			cout << "*";	
		}
		for(int j =0; j < i; j++){
			cout << " ";
		}
		cout << endl;
	}
}
void pattern8(int n) {
	/*
	   *   
	  ***  
	 ***** 
	*******
	*******
	 ***** 
	  ***  
	   *   
	*/
	for (int i = n; i > 0; i--) {
		//spaces1
		for (int j = i; j > 1; j--) {
			cout << " ";
		}
		//stars
		for (int j = i; j <= (2 * n - i); j++) {
			
			cout << "*";	
		}
		//spaces2
		for(int j = i; j > 1; j--){
			cout << " ";
		}cout << endl;
	}
		for (int i = 0; i < n; i++) {
		//Spaces
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		//stars
		for (int j = 0; j < (2 * n -(2 * i + 1)); j++){
			cout << "*";	
		}
		for(int j =0; j < i; j++){
			cout << " ";
		}
		cout << endl;	
	}
}
void pattern9(int n) {
	/*
		*
		**
		***
		****
		***
		**
		*
	*/
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			cout << "*";
		}
		cout << endl;
	}
	for(int i = n-1; i >= 1; i--){
		for(int j = 1; j <= i; j++){
			cout << "*";
		}
		cout << endl;
	}
}
void pattern10(int n) {
	/*
		0
		10
		010
		1010
	*/
	for (int i = 0; i < n; i++) {
        int start = i % 2;  // Initialize start based on i being even or odd

        for (int j = 0; j <= i; j++) {
            cout << start;
            start = 1 - start;  // Toggle start between 0 and 1
        }

        cout << endl;
    }
}
void pattern11(int n) {
	/*
		1
		01
		101
		0101
	*/
	for (int i = 1; i <= n; i++) {
        int start = i % 2; // Initialize start based on i being odd or even

        for (int j = 1; j <= i; j++) {
            cout << start;
            start = 1 - start; // Toggle start between 0 and 1
        }

        cout << endl;
    }
}
void pattern12(int n) {
	/*
		1      1
		12    21
		123  321
		12344321
	*/
	int space = 2*(n-1);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			cout << j;
		}
		for(int j = 1; j <= space; j++){
			cout << " ";
		}
		for(int j = i; j >= 1; j--){
			cout << j;
		}
		cout << endl;
		space -= 2;
	}
}
void pattern13(int n) {
	/*
	1
	2 3
	4 5 6
	7 8 9 10
	11 12 13 14 15
	*/
	int num = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			cout << num << " ";
			num = num + 1;
		}
		cout << endl;
	}
}
void pattern14(int n) {
	/*
		A
		AB
		ABC
		ABCD
		ABCDE
	*/
	for(int i = 0; i < n; i++){
		for(char ch = 'A'; ch <= 'A'+i; ch++){
			cout << ch;
		}
		cout << endl;
	}
}
void pattern15(int n) {
	/*
	A
	BA
	CBA
	DCBA
	EDCBA
	*/
	for(int i = 0; i < n; i++){
		for(char ch = 'A'+i; ch >= 'A'; ch--){
			cout << ch;
		}
		cout << endl;
	}
}
void pattern16(int n) {
	/*
	ABCDE
	ABCD
	ABC
	AB
	A
	*/
	for(int i = 1; i <= n; i++){
		for(char ch = 'A'; ch <= 'A'+(n-i-1); ch++){
			cout << ch;
		}
		cout << endl;
	}
}
void pattern17(int n) {
	/*
	A
	BB
	CCC
	DDDD
	EEEEE
	*/
	for(int i = 0; i < n; i++){
		char ch = 'A' + i;
		for(int j = 0; j <= i; j++){
			cout << ch;
		}
		cout << endl;
	}
}
void pattern18(int n) {
	/*
	    A   
	   ABA
	  ABCBA
	 ABCDCBA
	ABCDEDCBA
	*/
	for(int i = 1; i <= n; i++){
		//spaces
		for(int j = n - i; j >= 1; j--){
			cout << " ";
		}
		//Increasing part of Alphabets
		char ch = 'A';
		for(int j = 1; j <= i; j++){
			cout << ch++;
		}
		//Decreasing part of letters
		ch -= 2;
		for(int j = 1; j < i; j++){
			cout << ch--;
		}
		cout << endl;
	}
}
void pattern18a(int n) {
	/*
	    A     
	   ABA    
	  ABCBA   
	 ABCDCBA  
	ABCDEDCBA 
	*/
	for(int i = 0; i < n; i++){
		//spaces
		for(int j = 0; j < n-i-1; j++){
			cout << " ";
		}
		//brakpoint
		char ch = 'A';
		int breakpoint = (2*i+1)/2;
		for(int j = 0; j < 2*i+1; j++){
			cout << ch;
			if(j < breakpoint) ch++;
			else ch--;
		}
		//spaces
		for(int j = 0; j <= n-i-1; j++){
			cout << " ";
		}
		cout << endl;
	}
}
void pattern19(int n) {
	/*
		F
		EF
		DEF
		CDEF
		BCDEF
		ABCDEF
	*/
	for(int i = 0; i < n; i++){
		for(char ch = 'A'+n-1-i; ch <= 'A'+n-1; ch++){
			cout << ch;
		}
		cout << endl;
	}
}
void pattern20(int n) {
	/*
		********
		***  ***
		**    **
		*      *
		*      *
		**    **
		***  ***
		********
	*/
//top half portion
	int inis = 0;
	for(int i = 0; i < n; i++){
		//stars
		for(int j = 1; j <= n-i; j++){
			cout << "*";
		}
		//spaces
		for(int j = 0; j < inis; j++){
			cout << " ";
		}
		//stars
		for(int j = 1; j <= n-i; j++){
			cout << "*";
		}
		inis += 2;
		cout << endl;
	}
//bottom half portion
	inis = 2*n-2;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			cout << "*";
		}
		for(int j = 0; j < inis; j++){
			cout << " ";
		}
		for(int j = 1; j <= i; j++){
			cout << "*";
		}
		inis -= 2;
		cout << endl;
	}
}
void pattern21(int n) {
	/*
		*       *
		**     **
		***   ***
		**** ****
		***   ***
		**     **
		*       *
	*/
	int spaces = 2*n-1;
	for(int i = 1; i <= 2*n-1; i++){
		int stars = i;
		if(i > n) stars = 2*n-i;
	//stars
		for(int j = 1; j <= stars; j++){
			cout << "*";
		}
	//spaces
		for(int j = 1; j <= spaces; j++){
			cout << " ";
		}

	//stars
		for(int j = 1; j <= stars; j++){
			cout << "*";
		}
		cout << endl;
		if(i < n) spaces -= 2;
		else spaces += 2;
	}
}
void pattern22(int n) {
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i==0 || j==0 || i==n-1 || j==n-1){
				cout << ("*");
			}
			else cout << " ";
		}
		cout << endl;
	}
}
void pattern23(int n) {
	for(int i = 0; i < 2*n-1; i++){
		for(int j = 0; j <= 2*n-1; j++){
			int top = i;
			int left = j;
			int right = (2*n-2)-j;
			int bottom = (2*n-2)-i;
			cout << (n - min( min(top, bottom), 
				min(left, right)));
		}
		cout << endl;
	}
}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		pattern23(n);
	}
	return 0;
}
