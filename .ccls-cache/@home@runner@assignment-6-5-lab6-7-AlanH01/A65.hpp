#include <iomanip>
#include <iostream>
#include<stdio.h>
using namespace std;

void getinput(int &a,int &b,int &c);
void swap(int &a,int &b,int &c);

int main() 
{
  int a,b,c; 

  getinput(a,b,c);
  swap(a,b,c);

  printf("\n---After swap function---\n\n");

  printf("Value of a : %d\n",a);
  printf("Value of b : %d\n",b);
  printf("Value of c : %d\n",c);

  return 0;
}

void getinput(int &a,int &b,int &c)
{
  cout<<"Enter value of a : ";
  cin>>a;

  cout<<"Enter value of b : ";
  cin>>b;

  cout<<"Enter value of c : ";
  cin>>c;
}
void swap(int &a,int &b,int &c)
{ 

    a = a + b + c;
    b = a - (b+c);
    c = a - (b+c);  
    a = a - (b+c);
} 