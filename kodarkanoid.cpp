//buttonclick
void __fastcall TForm1::Button1Click(TObject *Sender)
{
     b->Left=100; b->Top=100;
     p->Left=320;
     b->Visible=true;
     x=-8;
     y=-8;
     Timer_pilka->Enabled=true;
     Button1->Visible=false;
     do_wygranej=12;
     Image1->Visible=true; Image5->Visible=true; Image9->Visible=true;
     Image2->Visible=true; Image6->Visible=true; Image10->Visible=true;
     Image3->Visible=true; Image7->Visible=true; Image11->Visible=true;
     Image4->Visible=true; Image8->Visible=true; Image12->Visible=true;
}
-------------------------------------------------------------------------
