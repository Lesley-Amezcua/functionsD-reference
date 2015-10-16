//Name: Lesley Amezcua
//Date: October 15, 2015
//Descripton: Functions Practice D
#include<iostream>//user input
#include<string>//strings
#include<cmath>//sin, cos
#include<cassert>//asserts
using namespace std;

void sort(int& numA, int& numB, int& numC);
/*  Summary: Write and test a function which sorts three numbers in increasing order.
    Precondition: Values passed in should be between 0 and 100, inclusive.
    Postcondition: If values are between 0 and 100 then the code will output the numbers in increasing order. 
*/
void numDigits(int  valA, int& n);
/*
    Summary: Write and test a function which determines the number of digits in an integer.
    Precondition: The values passed in should be between -10000 and 10000, inclusive.
    Postcondition: If the values are between -10000 and 10000 then the code will output the number of digits in the integer.
*/
void computeSphere(double& a, double& v, double r);
/*
    Summary: Write and test the function which calculates area (a) and volume(v).
    Precondition: The values passed in should be double values greater than 0 and less than 10000, inclusive.
    Postcondition: If the values are doubles and then are greater than 0 and less than 10000 then the code will output the area and volume.
*/
void swap(int& A, int& B);
/*
    Summary: Write and test a function which swaps the entered values.
    Precondition: The values passed should be positive.
    Postcondition: If values are positive then the code will swap and output the entered values.

*/
int main()
{
    int output1 = 2;
    int output2 = 50;
    int output3 = 10;

    sort(output1,output2,output3);

    cout << output2 << " " << output1 << " " << output3 << " "
         << " in sorted order: ";
    cout << output1 << " " << output2 << " " << output3 <<endl;
    
    int out1 = 100;
    int out2 = 1;
    int out3 = 50;

    sort(out1,out2,out3);

    cout << out2 << " " << out1 << " " << out3 << " "
         << " in sorted order: ";
    cout << out1 << " " << out2 << " " << out3 <<endl << endl;



    int a = 10000, b ;
    numDigits(a,b);
    cout << "Number of digits: " << b << endl;
    int w =73, z;
    numDigits(w,z);
    cout << "Number of digits: " << z << endl << endl; 
    
    
    
    double valA, valB, radius1 = 1, radius2 = 9;
	computeSphere(valA, valB, radius1);
	cout << "Area: " << valA << endl;
	cout << "Volume: " << valB << endl;
	computeSphere(valA, valB, radius2);
	cout << "Area: " << valA << endl;
	cout << "Volume: " << valB << endl << endl;

    int x = 12, y = 3;
    swap(x,y);
    cout << "The swapped value is: " << x << endl;
    int c = 10, l = 26;
    swap(c,l);
    cout << "The swapped value is: " << c << endl;

return 0;
}
void sort(int& numA, int& numB, int& numC)
{
        assert(numA >= 0 && numA <= 100);
        assert(numB >= 0 && numA <= 100);
        assert(numC >= 0 && numA <= 100);
        
        if(numA > numB )
        {
            int tmp = numA;
            numA = numB;
            numB = tmp;
        }
        if(numA > numC )
        {
            int tmp = numA;
            numA = numC;
            numC = tmp;
        }
         if(numB > numC)
        {
            int tmp = numB;
            numB = numC;
            numC = tmp;
        }
    return;
}
void numDigits(int  valA, int& n)
{
    assert(valA >= -10000 && valA <= 10000);
    if(valA < 0)
    {
        valA = valA * -1;
    }
    for(n = 0; valA >= 1; n++)
    {
        valA = valA / 10;
    }    
    return;
}
void computeSphere(double& a, double& v, double r)
{
    assert(r >= 0 && r <= 10000);

	const double PI = 3.14159;
	a = 4 * PI * r * r;
	v = ((4.0 * PI * r * r * r)/3.0);
    return;
}
void swap(int& A, int& B)
{
    int temp = A;
    A = B;
    B = temp;
    return;
}
