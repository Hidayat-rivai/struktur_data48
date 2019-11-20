//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
struct List
{
   List *Next;
   List *Prev;
   int isi;
};
List *Baru;
List *Awal=NULL;
List *Akhir=NULL;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::InputClick(TObject *Sender)
{
 int x;
 x=StrToInt(Edit1->Text);
 Edit1->Text=0;
 Edit1->SetFocus();
 Baru= new List;
 Baru->Next=NULL;
 Baru->Prev=NULL;
 Baru->isi=x;

 if (Awal==NULL)
    {
       Awal=Baru;
       Akhir=Baru;
       Akhir->Next=Awal;
    }
 else
    {
       Akhir->Next=Baru;
       Baru->Prev=Akhir;
       Akhir=Baru;
       Akhir->Next=Awal;
       Awal->Prev=Akhir;
    }
 A->Enabled=true;
 V->Enabled=true;
 Hapus->Enabled=true;

 ListBox1->Clear();
 List *Tampil=Awal;
 while (Tampil!=Akhir)
    {
       ListBox1->Items->Add(Tampil->isi);
       Tampil=Tampil->Next;
    }
 ListBox1->Items->Add(Akhir->isi);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::VClick(TObject *Sender)
{
 Awal=Akhir;
 Akhir=Akhir->Prev;

 List *Tampil=Awal;
 ListBox1->Clear();
 while (Tampil!=Akhir)
    {
       ListBox1->Items->Add(Tampil->isi);
       Tampil=Tampil->Next;
    }
 ListBox1->Items->Add(Akhir->isi);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AClick(TObject *Sender)
{
 Akhir=Awal;
 Awal=Awal->Next;

 List *Tampil=Awal;
 ListBox1->Clear();
 while (Tampil!=Akhir)
    {
       ListBox1->Items->Add(Tampil->isi);
       Tampil=Tampil->Next;
    }
 ListBox1->Items->Add(Akhir->isi);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::HapusClick(TObject *Sender)
{
 int x;
 x=StrToInt(Edit1->Text);
 List *Cari=Awal;
 bool ketemu=false;
 while (Cari!=Akhir && ketemu==false)
    {
       if (x==Cari->isi)
          {
             ketemu=true;
          }
       else
          {
             Cari=Cari->Next;
          }
    }

 if (Akhir->isi==x && ketemu==false)
    {
       Cari=Akhir;
       ketemu=true;
    }

 if (ketemu==false)
    {
       ShowMessage("Data Tidak Ditemukan");
    }
 else
    {
       if (Awal==Akhir)
          {
             Awal=NULL;
             Akhir=NULL;
          }
       else
          {
             if (Cari==Awal)
                {
                   Awal=Awal->Next;
                   Awal->Prev=Akhir;
                   Akhir->Next=Awal;
                }
             else if (Cari==Akhir)
                {
                   Akhir=Akhir->Prev;
                   Akhir->Next=Awal;
                   Awal->Prev=Akhir;
                }
             else
                {
                   Cari->Prev->Next=Cari->Next;
                   Cari->Next->Prev=Cari->Prev;
                   Cari=NULL;
                }
          }
    }

 List *Tampil=Awal;
 ListBox1->Clear();
 if (Akhir!=NULL)
    {
       while (Tampil!=Akhir)
          {
             ListBox1->Items->Add(Tampil->isi);
             Tampil=Tampil->Next;
          }
       ListBox1->Items->Add(Akhir->isi);
    }
  if (Akhir==NULL)
    {
       Hapus->Enabled=false;
       A->Enabled=false;
       V->Enabled=false;
    }
}
//---------------------------------------------------------------------------

