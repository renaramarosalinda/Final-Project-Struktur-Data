#include <iostream>


void enqueue (data ib);
void dequeue ();
void gantidata (int noganti);

int main(){
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
