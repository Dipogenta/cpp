#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main ()
{
int a,b,c,d,na,nt,nut,nas,ne;
cout <<"  masukan nilai absen: ";cin>>na;
cout <<"\n masukan nilai tugas: ";cin>>nt;
cout <<"\n masukan nilai UTS: ";cin>>nut;
cout <<"\n masukan nilai UAS: ";cin>>nas;
a=na*20/100;
b=nt*25/100;
c=nut*25/100;
d=nas*30/100;
ne=a+b+c+d;
cout <<"==========================\n";
cout <<"      *Hasil Akhir*       \n";
cout <<"==========================\n";
cout <<"\n Hasil Akhir absen         :"<<a<<ends;
cout <<"\n Hasil Akhir tugas         :"<<b<<ends;
cout <<"\n Hasil Akhir uts           :"<<c<<ends;
cout <<"\n Hasil Akhir uas           :"<<d<<ends;
cout <<"\n Hasil Akhir keseluruhan   :"<<ne<<ends;
getch();
}
