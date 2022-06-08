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
   
    //odbij od górnej sciany
    if (b->Top-5 <= tlo->Top) y=-y;

   //odbij od prawej sciany
    if (b->Left+b->Width+5 >= tlo->Width) x=-x;

    //skucha!
    if (b->Top >= p->Top+p->Height+15)
    {
        Timer_pilka->Enabled = false;
        b->Visible=false;
        Button1->Caption = "Porażka! Jeszcze raz?";
        Button1->Visible=true;
    }
    //odbicie pilki (b) od paletki (p)
    else if(b->Left > p->Left-b->Width/2 && b->Left < p->Left+p->Width &&
       b->Top+b->Height > p->Top)
       {
               if (y>0) y=-y;
       }
   //wygrana = zlikwidowanie wsyzstkich blokow
     if (do_wygranej<=0)
     {
        Timer_pilka->Enabled = false;
        b->Visible=false;
        Button1->Caption = "Wygrana! Jeszcze raz?";
        Button1->Visible=true;
     }
