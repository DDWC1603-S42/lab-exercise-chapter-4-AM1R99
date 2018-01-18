//Display the number in reverse order
//fix and complete the program below.
#include <iostream>
using namespace std;
int main()
{
	int t, num, sum;


cout<<"user input a number:"<<endl;

for(t=num;num!=0;num=num/10)
{
	t=num % 10;
	sum=sum*10+t;

}
cout<<"The number in reverse order: "<<endl;

}
