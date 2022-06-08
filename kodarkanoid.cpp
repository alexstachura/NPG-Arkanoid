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

    //blok1
    if (kolizja(b,Image1) && Image1->Visible==true) {x=-x; y=-y; do_wygranej--; Image1->Visible=false;}
    //blok2
    if (kolizja(b,Image2) && Image2->Visible==true) {x=-x; y=-y; do_wygranej--; Image2->Visible=false;}
    //blok3
    if (kolizja(b,Image3) && Image3->Visible==true) {x=-x; y=-y; do_wygranej--; Image3->Visible=false;}
    //blok4
    if (kolizja(b,Image4) && Image4->Visible==true) {x=-x; y=-y; do_wygranej--; Image4->Visible=false;}
    //blok5
    if (kolizja(b,Image5) && Image5->Visible==true) {x=-x; y=-y; do_wygranej--; Image5->Visible=false;}
    //blok6
    if (kolizja(b,Image6) && Image6->Visible==true) {x=-x; y=-y; do_wygranej--; Image6->Visible=false;}
    //blok7
    if (kolizja(b,Image7) && Image7->Visible==true) {x=-x; y=-y; do_wygranej--; Image7->Visible=false;}
    //blok8
    if (kolizja(b,Image8) && Image8->Visible==true) {x=-x; y=-y; do_wygranej--; Image8->Visible=false;}
    //blok9
    if (kolizja(b,Image9) && Image9->Visible==true) {x=-x; y=-y; do_wygranej--; Image9->Visible=false;}
    //blok10
    if (kolizja(b,Image10)&& Image10->Visible==true) {x=-x; y=-y; do_wygranej--; Image10->Visible=false;}
    //blok11
    if (kolizja(b,Image11) && Image11->Visible==true) {x=-x; y=-y; do_wygranej--; Image11->Visible=false;}
    //blok12
    if (kolizja(b,Image12) && Image12->Visible==true) {x=-x; y=-y; do_wygranej--; Image12->Visible=false;}

}
