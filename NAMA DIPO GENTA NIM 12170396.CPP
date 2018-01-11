// DIPO GENTA KIAY DEMAK
// NIM 12170396

#include <stdio.h>
#include <conio.h>
#include <iostream.h>


main()
{

struct
{
char nama[20],grade[2];
int uts,uas,hasil;
}data[3];

int i,j;
char x;
atas:
clrscr();
cout<<"\t program perhitungan mata kuliah "<<endl;
cout<<"\t=============================="<<endl;
cout<<"\tMasukkan jumlah data : ";cin>>j;
cout<<endl;
for(i=1;i<=j;i++)
{
cout<<"data ke : "<<i<<endl;
cout<<"Nama : ";cin>>data[i].nama;
cout<<"Nim : ";cin>>data[i].nim;
cout<<"Nilai Uts : ";cin>>data[i].uts;
cout<<"Nilai Uas : ";cin>>data[i].uas;
cout<<endl;
data[i].hasil=(data[i].uts*0.4)+(data[i].uas*0.6);
}
clrscr();
cout<<"\t program perhitungan mata kuliah   "<<endl;
cout<<"====================================="<<endl;
cout<<"No. Nama    Nilai     Nilai   "<<endl;
cout<<"    Siswa Uts   Uas   Akhir   "<<endl;
cout<<"====================================="<<endl;
for(i=1;i<=j;i++)
{
printf("%d %3s %5d %5d %6d %4s\n",i,data[i].nama,data[i].uts,data[i].uas,data[i].hasil,grade(data[i].hasil));
}
cout<<"====================================="<<endl;
x=getche();
if(x=='y'||x=='Y')
goto atas;
else
goto keluar;
getch();
keluar:
}
