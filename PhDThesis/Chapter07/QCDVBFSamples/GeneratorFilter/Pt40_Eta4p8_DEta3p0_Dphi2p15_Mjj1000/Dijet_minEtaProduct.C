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
   
   TH1D *Dijet_minEtaProduct = new TH1D("Dijet_minEtaProduct","Dijet_minEtaProduct",50,-25,25);
   Dijet_minEtaProduct->SetBinContent(5,1);
   Dijet_minEtaProduct->SetBinContent(6,6);
   Dijet_minEtaProduct->SetBinContent(7,8);
   Dijet_minEtaProduct->SetBinContent(8,15);
   Dijet_minEtaProduct->SetBinContent(9,23);
   Dijet_minEtaProduct->SetBinContent(10,53);
   Dijet_minEtaProduct->SetBinContent(11,88);
   Dijet_minEtaProduct->SetBinContent(12,141);
   Dijet_minEtaProduct->SetBinContent(13,203);
   Dijet_minEtaProduct->SetBinContent(14,316);
   Dijet_minEtaProduct->SetBinContent(15,439);
   Dijet_minEtaProduct->SetBinContent(16,579);
   Dijet_minEtaProduct->SetBinContent(17,658);
   Dijet_minEtaProduct->SetBinContent(18,531);
   Dijet_minEtaProduct->SetBinContent(19,383);
   Dijet_minEtaProduct->SetBinContent(20,239);
   Dijet_minEtaProduct->SetBinContent(21,148);
   Dijet_minEtaProduct->SetBinContent(22,81);
   Dijet_minEtaProduct->SetBinContent(23,33);
   Dijet_minEtaProduct->SetBinContent(24,9);
   Dijet_minEtaProduct->SetBinContent(25,6);
   Dijet_minEtaProduct->SetBinContent(26,1);
   Dijet_minEtaProduct->SetEntries(3961);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Dijet_minEtaProduct->SetLineColor(ci);
   Dijet_minEtaProduct->GetXaxis()->SetTitle("Min(Dijet #eta product)");
   Dijet_minEtaProduct->GetXaxis()->SetLabelFont(42);
   Dijet_minEtaProduct->GetXaxis()->SetLabelSize(0.035);
   Dijet_minEtaProduct->GetXaxis()->SetTitleSize(0.035);
   Dijet_minEtaProduct->GetXaxis()->SetTitleFont(42);
   Dijet_minEtaProduct->GetYaxis()->SetTitle("Events");
   Dijet_minEtaProduct->GetYaxis()->SetLabelFont(42);
   Dijet_minEtaProduct->GetYaxis()->SetLabelSize(0.035);
   Dijet_minEtaProduct->GetYaxis()->SetTitleSize(0.035);
   Dijet_minEtaProduct->GetYaxis()->SetTitleOffset(1.75);
   Dijet_minEtaProduct->GetYaxis()->SetTitleFont(42);
   Dijet_minEtaProduct->GetZaxis()->SetLabelFont(42);
   Dijet_minEtaProduct->GetZaxis()->SetLabelSize(0.035);
   Dijet_minEtaProduct->GetZaxis()->SetTitleSize(0.035);
   Dijet_minEtaProduct->GetZaxis()->SetTitleFont(42);
   Dijet_minEtaProduct->Draw("");
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
