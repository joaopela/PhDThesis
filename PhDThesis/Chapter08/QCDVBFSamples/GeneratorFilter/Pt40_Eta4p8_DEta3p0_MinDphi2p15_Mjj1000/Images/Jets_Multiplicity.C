{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Wed Nov 18 19:31:14 2015) by ROOT version5.34/18
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
   
   TH1D *Jets_Multiplicity = new TH1D("Jets_Multiplicity","Jets_Multiplicity",51,-0.5,50.5);
   Jets_Multiplicity->SetBinContent(3,11131);
   Jets_Multiplicity->SetBinContent(4,2668);
   Jets_Multiplicity->SetBinContent(5,1017);
   Jets_Multiplicity->SetBinContent(6,258);
   Jets_Multiplicity->SetBinContent(7,75);
   Jets_Multiplicity->SetBinContent(8,15);
   Jets_Multiplicity->SetBinContent(9,3);
   Jets_Multiplicity->SetBinContent(10,2);
   Jets_Multiplicity->SetEntries(15169);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Jets_Multiplicity->SetLineColor(ci);
   Jets_Multiplicity->GetXaxis()->SetTitle("Generator Jet Multiplicity");
   Jets_Multiplicity->GetXaxis()->SetRange(1,11);
   Jets_Multiplicity->GetXaxis()->SetLabelFont(42);
   Jets_Multiplicity->GetXaxis()->SetLabelSize(0.035);
   Jets_Multiplicity->GetXaxis()->SetTitleSize(0.035);
   Jets_Multiplicity->GetXaxis()->SetTitleFont(42);
   Jets_Multiplicity->GetYaxis()->SetTitle("Events");
   Jets_Multiplicity->GetYaxis()->SetLabelFont(42);
   Jets_Multiplicity->GetYaxis()->SetLabelSize(0.035);
   Jets_Multiplicity->GetYaxis()->SetTitleSize(0.035);
   Jets_Multiplicity->GetYaxis()->SetTitleOffset(1.75);
   Jets_Multiplicity->GetYaxis()->SetTitleFont(42);
   Jets_Multiplicity->GetZaxis()->SetLabelFont(42);
   Jets_Multiplicity->GetZaxis()->SetLabelSize(0.035);
   Jets_Multiplicity->GetZaxis()->SetTitleSize(0.035);
   Jets_Multiplicity->GetZaxis()->SetTitleFont(42);
   Jets_Multiplicity->Draw("");
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
