
//muzyka_arkanoid
void __fastcall TForm1::FormCreate(TObject *Sender)
{
   MediaPlayer1->FileName = "snd/Arkanoid_music.mp3";
   MediaPlayer1->Open();
}
//---------------------------------------------------------------------------
#wywolanie_dzwieku
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
   MediaPlayer1->Close();
}
//---------------------------------------------------------------------------
