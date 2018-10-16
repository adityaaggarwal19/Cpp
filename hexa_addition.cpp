#include <iostream>
#include <string.h>
using namespace std;

// Function to convert hexadecimal to decimal 
int hexaToDec(char hexVal[]) 
{    
    int len = strlen(hexVal); 
    int base = 1; 	//since base value=1 as 16^0 =1
      
    int dec_val = 0; //declaring the variable to store decimal value
      
    //from the last, converting the given characters into corresponding digits
    for (int i=len-1; i>=0; i--) 
    {    
        // if character is 0 to 9, then in decimal it is converted to 0 to 9 by subtracting 49 from its ASCII value   
        if (hexVal[i]>='0' && hexVal[i]<='9') 
        { 
            dec_val += (hexVal[i] - 48)*base; 
            base = base * 16; //incrementing the base value by power for further operation
        } 
  
        // if character is A toF , then in decimal it is converted to 10 to 15 by subtracting by subtracting 55 from ASCII value 
        else if (hexVal[i]>='A' && hexVal[i]<='F') 
        { 
            dec_val += (hexVal[i] - 55)*base; 
            base = base*16; 	//incrementing the base value by power for further operation
        } 
    } 
    return dec_val;   //returning the decimal value
} 

void decToHexa(int n) 
{    
    
    char hexaDeciNum[100]; 	// char array to store hexadecimal number 
    int i = 0; 
    while(n!=0) 
    {    
        int temp  = 0; 	// temporary variable to store remainder 
        temp = n % 16; 	// storing remainder in temp variable.
        if(temp < 10) 
        { 
            hexaDeciNum[i] = temp + 48; 
            i++; 
        } 
        else
        { 
            hexaDeciNum[i] = temp + 55; 
            i++; 
        } 
          
        n = n/16; 
    } 
    // printing hexadecimal number array in reverse order 
    for(int j=i-1; j>=0; j--) 
        cout << hexaDeciNum[j]; 
}

int main()
{
    char hex1[20];
    char hex2[20];
	int a,b,d1,d2,sum=0;
	
	//Taking first number input
	cout<<"Enter the number of digits of first number: ";
	cin>>d1;
	for(int i=0;i<d1;i++)
	{
		cin>>hex1[i];
	}
	//Taking the second number input
	cout<<"Enter the number of digits of second number: ";
	cin>>d2;
	for(int i=0;i<d2;i++)
	{
		cin>>hex2[i];
	}
	
	a=hexaToDec(hex1);       //calling the function to convert given hexa to dec
	b=hexaToDec(hex2);		//calling the function to convert given hexa to dec
	sum=a+b;					//performing addition
    cout << "The Sum of two hexadecimal numbers is: ";
    decToHexa(sum);     //calling the function to perform decimal value to hexadecimal

    return 0;
}
