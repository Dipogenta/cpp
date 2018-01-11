#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main ()
{
int n1,n2,n3,h1,h2,h3;
cout <<"  masukan nilai 1: ";cin>>n1;
cout <<"\n masukan nilai 2: ";cin>>n2;
cout <<"\n masukan nilai 3: ";cin>>n3;
h1=n1+n2*n3;
h2=n1+(n2*n3);
h3=(n1+n2)*n3;
cout <<"==========================\n";
cout <<"       Hasil Akhir        \n";
cout <<"==========================\n";
cout <<"\n Hasil Akhir          :"<<h1<<ends;
cout <<"\n Hasil Akhir          :"<<h2<<ends;
cout <<"\n Hasil Akhir          :"<<h3<<ends;
getch();
}
