#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <iomanip.h>
#include <string.h>

main( )
{
int x ,a ,ulangi;
char jenis[4] = {'BG','bg','AG','a'} ,*ket[4];
long bapot[6], jumhar[6] = {0}, hasat[6] = {50000,30000};
long jumbar[6]= {0}, pajak[6], totba[6];
pesan:
clrscr( );
cout<<"\t       TOKO BUNGA       \n";
cout<<"\t-------------------------\n";
cout<<"\t Kode Nama          Harga\n";
cout<<"\t--------------------------\n";
cout<<"\t [BG] Bougenville  Rp. 50000\n";
cout<<"\t [AG] Anggrek      Rp. 30000\n";
cout<<"\t---------------------------\n\n";
cout<<"\tBanyak Jenis : ";cin>>x;
jumbar[x] = 0;
 if (x <= 0)
   {
   cout<<"\n\t\tBanyak Jenis Tidak Boleh Null";
   goto akhir;
   }
   else
   {
        for(a = 1 ; a <= x; ++a)
       {
      cout<<"\tJenis Ke - "<<a;
      cout<<"\n\tJenis bunga [B/A] : ";cin>>jenis[a];
      cout<<"\tBanyak bunga : ";cin>>bapot[a];
      cout<<"\t------------------------\n";
           if (jenis[a] == 'B' || jenis[a] == 'b')
             {
               ket[a] = "Bougenville ";
               hasat[a] = 50000;
            }
           else if (jenis[a] == 'A' || jenis[a] == 'a')
             {
            ket[a] = "Anggrek ";
               hasat[a] = 30000;
            }
           else
               {
              cout<<"\nAnda Salah Masukan Kode Jenis Potongan.";
              hasat[a] = 0;
              }
      jumhar[a] = hasat[a] * bapot[a];
      jumbar [x] = jumbar[x] + hasat[a] * bapot[a];
          if (jumbar[x] == 0)
             {
             pajak[x] = 0;
            totba[x] = 0;
            }
         else
             {
                pajak[x] = jumbar[x] * 0.1;
                totba[x] = jumbar[x] + pajak[x];
            }
      }
   }
cout<<"\n\n\tTOKO BUNGA\n";
cout<<"------------------------------------------------\n";
cout<<"No.| Jenis     | Harga     | Banyak | Jumlah\n";
cout<<"   | Bunga     | Satuan    | Beli   | Harga\n";
cout<<"================================================\n";
    for (a = 1; a <= x; ++a)
   {
   cout<<" "<<a<<" | "<<ket[a]<<"     | "<<hasat[a];
   cout<<"         | "<<bapot[a]<<"   | Rp. "<<jumhar[a]<<endl;
    }
cout<<"------------------------------------------------\n";
cout<<"\t\t\tJumlah Bayar  Rp. "<<jumbar[x]<<endl;
cout<<"\t\t\tTotal Bayar   Rp. "<<totba[x];
cout<<"\n\n\tAnda Ingin Memesan Lagi? [Y/T] = ";
ulangi = getche();
    if (ulangi == 'Y' || ulangi == 'y')
       goto pesan;
   else
       cout<<"\n\n\t\tTerima Kasih";
akhir:
getch( );
}