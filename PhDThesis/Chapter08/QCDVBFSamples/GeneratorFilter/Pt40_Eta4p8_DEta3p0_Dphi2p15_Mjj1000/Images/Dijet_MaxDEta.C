{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Wed Nov 18 18:37:35 2015) by ROOT version5.34/18
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0,0,1,1);
   c1_n2->SetFillColor(0);
   c1_n2->SetBorderMode(0);
   c1_n2->SetBorderSize(2);
   c1_n2->SetTickx(1);
   c1_n2->SetTicky(1);
   c1_n2->SetLeftMargin(0.15);
   c1_n2->SetRightMargin(0.15);
   c1_n2->SetTopMargin(0.05);
   c1_n2->SetBottomMargin(0.15);
   c1_n2->SetFrameFillStyle(0);
   c1_n2->SetFrameBorderMode(0);
   
   TH1D *Dijet_MaxDEta = new TH1D("Dijet_MaxDEta","Dijet_MaxDEta",50,0,10);
   Dijet_MaxDEta->SetBinContent(16,2);
   Dijet_MaxDEta->SetBinContent(17,8);
   Dijet_MaxDEta->SetBinContent(18,8);
   Dijet_MaxDEta->SetBinContent(19,17);
   Dijet_MaxDEta->SetBinContent(20,15);
   Dijet_MaxDEta->SetBinContent(21,26);
   Dijet_MaxDEta->SetBinContent(22,45);
   Dijet_MaxDEta->SetBinContent(23,45);
   Dijet_MaxDEta->SetBinContent(24,79);
   Dijet_MaxDEta->SetBinContent(25,103);
   Dijet_MaxDEta->SetBinContent(26,162);
   Dijet_MaxDEta->SetBinContent(27,218);
   Dijet_MaxDEta->SetBinContent(28,233);
   Dijet_MaxDEta->SetBinContent(29,342);
   Dijet_MaxDEta->SetBinContent(30,414);
   Dijet_MaxDEta->SetBinContent(31,423);
   Dijet_MaxDEta->SetBinContent(32,426);
   Dijet_MaxDEta->SetBinContent(33,355);
   Dijet_MaxDEta->SetBinContent(34,263);
   Dijet_MaxDEta->SetBinContent(35,222);
   Dijet_MaxDEta->SetBinContent(36,163);
   Dijet_MaxDEta->SetBinContent(37,132);
   Dijet_MaxDEta->SetBinContent(38,90);
   Dijet_MaxDEta->SetBinContent(39,66);
   Dijet_MaxDEta->SetBinContent(40,50);
   Dijet_MaxDEta->SetBinContent(41,17);
   Dijet_MaxDEta->SetBinContent(42,18);
   Dijet_MaxDEta->SetBinContent(43,8);
   Dijet_MaxDEta->SetBinContent(44,7);
   Dijet_MaxDEta->SetBinContent(45,4);
   Dijet_MaxDEta->SetEntries(3961);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Dijet_MaxDEta->SetLineColor(ci);
   Dijet_MaxDEta->GetXaxis()->SetTitle("Dijet Min(#Delta#eta)");
   Dijet_MaxDEta->GetXaxis()->SetRange(1,200);
   Dijet_MaxDEta->GetXaxis()->SetLabelFont(42);
   Dijet_MaxDEta->GetXaxis()->SetLabelSize(0.035);
   Dijet_MaxDEta->GetXaxis()->SetTitleSize(0.035);
   Dijet_MaxDEta->GetXaxis()->SetTitleFont(42);
   Dijet_MaxDEta->GetYaxis()->SetTitle("Events");
   Dijet_MaxDEta->GetYaxis()->SetLabelFont(42);
   Dijet_MaxDEta->GetYaxis()->SetLabelSize(0.035);
   Dijet_MaxDEta->GetYaxis()->SetTitleSize(0.035);
   Dijet_MaxDEta->GetYaxis()->SetTitleOffset(1.75);
   Dijet_MaxDEta->GetYaxis()->SetTitleFont(42);
   Dijet_MaxDEta->GetZaxis()->SetLabelFont(42);
   Dijet_MaxDEta->GetZaxis()->SetLabelSize(0.035);
   Dijet_MaxDEta->GetZaxis()->SetTitleSize(0.035);
   Dijet_MaxDEta->GetZaxis()->SetTitleFont(42);
   Dijet_MaxDEta->Draw("");
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
