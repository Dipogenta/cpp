#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main ()
{
int a,b,c;
cout <<"  masukan bilangan 1: ";cin>>a;
cout <<"\n masukan bilangan 2: ";cin>>b;
c=a%b;

if(a < b)
cout <<"Bilangan 1 harus lebih besar";
else{
	if(c == 0)
	cout <<"tidak ada";
	else
	cout <<"\n sisa pembagian   :"<<c<<ends;
}
getch();
}
