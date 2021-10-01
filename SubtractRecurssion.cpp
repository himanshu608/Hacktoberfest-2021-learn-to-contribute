#include <iostream>
#include <conio.h>
using namespace std;

 int sub(int,int);
int main()
{
    int num1,num2;
    cout<<"Enter two numbers: \n";
    cin>>num1>>num2;//
     cout<<"Subtraction of two numbers : "<<sub(num1,num2);
     getch();
    return 0;
}
int sub(int num1, int num2)//function definition
{
    if(num2==0)
        return num1;
    else
        return sub((num1-1),(num2-1));

}
