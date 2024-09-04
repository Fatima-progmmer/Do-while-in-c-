#include<iostream>
using namespace std;
int main()
{
int n=1;
int num=5;
int fact=1;
do{
	fact*=n;
	n++;
}
while(n<=num);
cout << "factorial is " << fact ;
	return 0;
}

