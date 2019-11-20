//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TEdit *Edit1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TGroupBox *GroupBox1;
        TGroupBox *GroupBox2;
        TButton *Input;
        TListBox *ListBox1;
        TGroupBox *GroupBox3;
        TLabel *Label5;
        TButton *A;
        TButton *V;
        TButton *Hapus;
        void __fastcall InputClick(TObject *Sender);
        void __fastcall VClick(TObject *Sender);
        void __fastcall AClick(TObject *Sender);
        void __fastcall HapusClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
