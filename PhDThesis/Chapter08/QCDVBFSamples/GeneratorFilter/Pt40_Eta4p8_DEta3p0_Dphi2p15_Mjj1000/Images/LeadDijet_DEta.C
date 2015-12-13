{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Wed Nov 18 18:37:36 2015) by ROOT version5.34/18
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
   
   TH1D *LeadDijet_DEta = new TH1D("LeadDijet_DEta","LeadDijet_DEta",50,0,10);
   LeadDijet_DEta->SetBinContent(16,4);
   LeadDijet_DEta->SetBinContent(17,9);
   LeadDijet_DEta->SetBinContent(18,10);
   LeadDijet_DEta->SetBinContent(19,19);
   LeadDijet_DEta->SetBinContent(20,19);
   LeadDijet_DEta->SetBinContent(21,27);
   LeadDijet_DEta->SetBinContent(22,51);
   LeadDijet_DEta->SetBinContent(23,47);
   LeadDijet_DEta->SetBinContent(24,86);
   LeadDijet_DEta->SetBinContent(25,107);
   LeadDijet_DEta->SetBinContent(26,171);
   LeadDijet_DEta->SetBinContent(27,225);
   LeadDijet_DEta->SetBinContent(28,235);
   LeadDijet_DEta->SetBinContent(29,350);
   LeadDijet_DEta->SetBinContent(30,407);
   LeadDijet_DEta->SetBinContent(31,420);
   LeadDijet_DEta->SetBinContent(32,426);
   LeadDijet_DEta->SetBinContent(33,351);
   LeadDijet_DEta->SetBinContent(34,260);
   LeadDijet_DEta->SetBinContent(35,212);
   LeadDijet_DEta->SetBinContent(36,155);
   LeadDijet_DEta->SetBinContent(37,125);
   LeadDijet_DEta->SetBinContent(38,87);
   LeadDijet_DEta->SetBinContent(39,61);
   LeadDijet_DEta->SetBinContent(40,46);
   LeadDijet_DEta->SetBinContent(41,16);
   LeadDijet_DEta->SetBinContent(42,18);
   LeadDijet_DEta->SetBinContent(43,7);
   LeadDijet_DEta->SetBinContent(44,6);
   LeadDijet_DEta->SetBinContent(45,4);
   LeadDijet_DEta->SetEntries(3961);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   LeadDijet_DEta->SetLineColor(ci);
   LeadDijet_DEta->GetXaxis()->SetTitle("Lead Generator Dijet #Delta#eta");
   LeadDijet_DEta->GetXaxis()->SetRange(1,200);
   LeadDijet_DEta->GetXaxis()->SetLabelFont(42);
   LeadDijet_DEta->GetXaxis()->SetLabelSize(0.035);
   LeadDijet_DEta->GetXaxis()->SetTitleSize(0.035);
   LeadDijet_DEta->GetXaxis()->SetTitleFont(42);
   LeadDijet_DEta->GetYaxis()->SetTitle("Events");
   LeadDijet_DEta->GetYaxis()->SetLabelFont(42);
   LeadDijet_DEta->GetYaxis()->SetLabelSize(0.035);
   LeadDijet_DEta->GetYaxis()->SetTitleSize(0.035);
   LeadDijet_DEta->GetYaxis()->SetTitleOffset(1.75);
   LeadDijet_DEta->GetYaxis()->SetTitleFont(42);
   LeadDijet_DEta->GetZaxis()->SetLabelFont(42);
   LeadDijet_DEta->GetZaxis()->SetLabelSize(0.035);
   LeadDijet_DEta->GetZaxis()->SetTitleSize(0.035);
   LeadDijet_DEta->GetZaxis()->SetTitleFont(42);
   LeadDijet_DEta->Draw("");
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
