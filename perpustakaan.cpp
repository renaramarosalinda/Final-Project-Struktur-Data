#include <iostream>
#include <malloc.h>
#include <stdlib.h>

FILE *x, *y;
using namespace std;

typedef struct {
  char nama[50];
  char judul[100];
  char no[20];
  int nobook;
}data;

typedef struct{
  int belakang;
  data elemen [100];
}typequeue ;

typequeue queue;

void ambilfile();
void enqueue(data ib);
void dequeue();
void gantidata (int noganti);
void buatqueue();
void hapusdata();
void cetakqueue();
void caridata(int cari);
void hapus();
void updatedata();

void ambilfile(){
  queue.belakang=0;
  y=fopen("file.txt", "r");
  int j=1;
  while(!feof(y))
    {
      fread(&queue.elemen[j], sizeof(queue.elemen[j]), 1, y);
      queue.belakang++;
      j++;
    }
    fclose(y);
}

void buatqueue(){
  queue.belakang= 0;
}

void hapusdata(){
  char file[50]="file.txt";
  x=fopen("file.txt","w");
  remove(file);
  fclose(x);
}

void cetakqueue(){
  int j;
  ambilfile();
  for(j=1;j<queue.belakang;j++)
    {
      cout<<"\n\nAntrian ke : "<<j;
      cout<<"\nNama Peminjam :"<<queue.elemen[j].nama;
      cout<<"\nNo Buku :"<<queue.elemen[j].nobook;
      cout<<"\nJudul Buku :"<<queue.elemen[j].judul;
      cout<<"\nNo Telp :"<<queue.elemen[j].no;
    }
}

void caridata(int cari){
  bool y=0;
  int i;
  ambilfile();
  for(i=1;i<=queue.belakang;i++)
  {
    if(queue.elemen[i].nobook==cari)
    {
      cout<<"\n\nAntrian ke : "<<i;
      cout<<"\nNama Peminjam :"<<queue.elemen[i].nama;
      cout<<"\nJudul Buku :"<<queue.elemen[i].judul;
      cout<<"\nNo Telp :"<<queue.elemen[i].no;
      y-1;
      }
    }
}

void enqueue(data ib){
  x=fopen("file.txt","a");
  fwrite(&ib,sizeof(ib),1,x);
  fclose(x);
}

void dequeue(){
  inti;
  ambilfile();
  for(i=1;i<enqueue.belakang;i++)
  {
    queue.elemen[i]=queue.elemen[i+1];
  }
  queue.belakang--;
  hapusdata();
  updatedata();
}

void gantidata(int noganti){
  data ganti;
  bool x=0;
  ambilfile();
  for(int i=1;i<queue.belakang.;i++)
    {
      if(queue.elemen[i).nobook==noganti)
      {
        cout<<"Ubah data menjadi\n";
        cout<<"Nama Peminjam :";
        cin.ignore();
        cin.getline(ganti.nama,50);
        cout<<"No Buku:";
        cin>>ganti.nobook;
        cout<<"Judul Buku :";
        cin.getline(ganti.judul,100);
        cout<<"No Telp :";
        cin>>ganti.no;
        queue.elemen[i]=ganti;
        x=1;
      }
    }
    if(x==0)
    {
      cout<<"Data Tidak Ditemukan";
      queue.elemen[i]=ganti;
      x=1;
    }
}
                      
                      
 void hapus()
{
  int x;
  int i;
  
  cetakqueue();
  cout<<"\nHapus No Antrian : ";
  cin>>x;
  for(i=x; i<queue.belakang; i++)
  {
    queue.elemen[i]=queue.elemen[i+1];
  }
  
  queue.belakang--;
  hapusdata();
  updatedata();
}
   
                      
void updatedata()
{
  int i;
  
  x = fopen("file.txt","a");
  
  for(i = 1; i<queue.belakang; i++)
    {
      fwrite(&queue.elemen[i], sizeof(queue.elemen[i]),1,x);
    }
  fclose(x);
  
}
                      
int main() {
  int pilih,x,y,cari,noganti;
  data in;
  buatqueue();
  do{
    cout<<"\t==========================================================\n";
    cout<<"\t\tFinal Project Struktur Data Kelompok 8\n";
    cout<<"\t==========================================================\n";
    cout<<"\t==========================================================\n";
    cout<<"\tAnggota kelompok :\n";
    cout<<"\t1. Churri Asna Fatchiyah (21081010156)\n";
    cout<<"\t2. Chiristian K (21081010169)\n";
    cout<<"\t3. Aura Choirun Nisa (21081010173)\n";
    cout<<"\t4. Rena Rama Rosalinda (21081010190)\n";
    cout<<"\t5. Najwa Laila Anggraini (21081010191)\n";
    cout<<"\t6. Aqiilah Zayyaan Syihab (21081010239)\n";
    cout<<"\t==========================================================\n\n";
  cout<<"\t==============Program Antrian Perpustakaan================\n\tMenu :\n";
  cout<<"\t1. Inputdata\n\t2. Hapus Data\n\t3. Cek Data\n\t4. Cari Data\n\t5. Update Data\n";
  cout<<"\tMasukkan Pilihan : ";
  cin>>pilih;
  system("cls");
}
