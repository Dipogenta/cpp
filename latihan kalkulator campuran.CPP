#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main ()
{
int a,b,c,d,e,f;
cout <<"  masukan nilai 1: ";cin>>a;
cout <<"\n masukan nilai 2: ";cin>>b;
c=a+b;
d=a-b;
e=a*b;
f=a/b;
clrscr();
cout <<"==========================\n";
cout <<"       Hasil Akhir        \n";
cout <<"==========================\n";
cout <<"\n Hasil Penjumlahan          :"<<c<<ends;
cout <<"\n Hasil Pengurangan          :"<<d<<ends;
cout <<"\n Hasil Perkalian            :"<<e<<ends;
cout <<"\n Hasil Pembagian            :"<<f<<ends;
getch();
}
