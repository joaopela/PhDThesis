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
   
   TH1D *Dijet_MultiplicityPass = new TH1D("Dijet_MultiplicityPass","Dijet_MultiplicityPass",51,-0.5,50.5);
   Dijet_MultiplicityPass->SetBinContent(2,3735);
   Dijet_MultiplicityPass->SetBinContent(3,212);
   Dijet_MultiplicityPass->SetBinContent(4,12);
   Dijet_MultiplicityPass->SetBinContent(5,2);
   Dijet_MultiplicityPass->SetEntries(3961);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Dijet_MultiplicityPass->SetLineColor(ci);
   Dijet_MultiplicityPass->GetXaxis()->SetTitle("Dijet Passing All Cuts Multiplicity");
   Dijet_MultiplicityPass->GetXaxis()->SetRange(1,11);
   Dijet_MultiplicityPass->GetXaxis()->SetLabelFont(42);
   Dijet_MultiplicityPass->GetXaxis()->SetLabelSize(0.035);
   Dijet_MultiplicityPass->GetXaxis()->SetTitleSize(0.035);
   Dijet_MultiplicityPass->GetXaxis()->SetTitleFont(42);
   Dijet_MultiplicityPass->GetYaxis()->SetTitle("Events");
   Dijet_MultiplicityPass->GetYaxis()->SetLabelFont(42);
   Dijet_MultiplicityPass->GetYaxis()->SetLabelSize(0.035);
   Dijet_MultiplicityPass->GetYaxis()->SetTitleSize(0.035);
   Dijet_MultiplicityPass->GetYaxis()->SetTitleOffset(1.75);
   Dijet_MultiplicityPass->GetYaxis()->SetTitleFont(42);
   Dijet_MultiplicityPass->GetZaxis()->SetLabelFont(42);
   Dijet_MultiplicityPass->GetZaxis()->SetLabelSize(0.035);
   Dijet_MultiplicityPass->GetZaxis()->SetTitleSize(0.035);
   Dijet_MultiplicityPass->GetZaxis()->SetTitleFont(42);
   Dijet_MultiplicityPass->Draw("");
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
