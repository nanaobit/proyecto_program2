//---------------------------------------------------------------------------

#include <vcl.h>
#include <System.Classes.hpp>
#pragma hdrstop

#include "Unit1.h"
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

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	TStringList *lineas = new TStringList();
	try {
	  lineas->LoadFromFile("demo.txt");
	  for (int i =0; i < lineas->Count; i++) {
		ShowMessage(lineas->Strings[i]);
	  }
	}__finally{
	  delete lineas;
	}
}
//---------------------------------------------------------------------------
