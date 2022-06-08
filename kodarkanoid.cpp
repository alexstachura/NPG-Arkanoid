//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

#odliczanie_i_kolizja
int x=-8, y=-8;
int do_wygranej=12; 

bool kolizja(TImage *pilka, TImage *cegla)
{
   if( pilka->Left >= cegla->Left-pilka->Width && pilka->Left <= cegla->Left+cegla->Width &&
       pilka->Top >= cegla->Top-pilka->Height && pilka->Top <= cegla->Top+cegla->Height)
      return true;
      else return false;
}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
#zaprogramowanie_timera_dla_pilki
void __fastcall TForm1::Timer_pilkaTimer(TObject *Sender)
{
    MediaPlayer1->Play();
    b->Left+=x; b->Top+=y;

    //odbij od lewej sciany
    if (b->Left-5 <= tlo->Left) x=-x;
