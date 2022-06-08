//timer_lewo
void __fastcall TForm1::lewoTimer(TObject *Sender)
{
    if (p->Left>10) p->Left-=10;
}
//---------------------------------------------------------------------------
//timer_prawo
void __fastcall TForm1::prawoTimer(TObject *Sender)
{
    if (p->Left+p->Width<tlo->Width-10) p->Left+=10;
}
