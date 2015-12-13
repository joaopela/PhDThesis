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
   
   TH1D *LeadDijet_DPhi = new TH1D("LeadDijet_DPhi","LeadDijet_DPhi",64,0,3.141593);
   LeadDijet_DPhi->SetBinContent(44,46);
   LeadDijet_DPhi->SetBinContent(45,217);
   LeadDijet_DPhi->SetBinContent(46,240);
   LeadDijet_DPhi->SetBinContent(47,294);
   LeadDijet_DPhi->SetBinContent(48,302);
   LeadDijet_DPhi->SetBinContent(49,323);
   LeadDijet_DPhi->SetBinContent(50,362);
   LeadDijet_DPhi->SetBinContent(51,427);
   LeadDijet_DPhi->SetBinContent(52,454);
   LeadDijet_DPhi->SetBinContent(53,459);
   LeadDijet_DPhi->SetBinContent(54,581);
   LeadDijet_DPhi->SetBinContent(55,585);
   LeadDijet_DPhi->SetBinContent(56,624);
   LeadDijet_DPhi->SetBinContent(57,693);
   LeadDijet_DPhi->SetBinContent(58,833);
   LeadDijet_DPhi->SetBinContent(59,981);
   LeadDijet_DPhi->SetBinContent(60,1132);
   LeadDijet_DPhi->SetBinContent(61,1413);
   LeadDijet_DPhi->SetBinContent(62,1521);
   LeadDijet_DPhi->SetBinContent(63,1728);
   LeadDijet_DPhi->SetBinContent(64,1954);
   LeadDijet_DPhi->SetEntries(15169);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   LeadDijet_DPhi->SetLineColor(ci);
   LeadDijet_DPhi->GetXaxis()->SetTitle("Lead Generator Dijet #Delta#phi");
   LeadDijet_DPhi->GetXaxis()->SetRange(1,128);
   LeadDijet_DPhi->GetXaxis()->SetLabelFont(42);
   LeadDijet_DPhi->GetXaxis()->SetLabelSize(0.035);
   LeadDijet_DPhi->GetXaxis()->SetTitleSize(0.035);
   LeadDijet_DPhi->GetXaxis()->SetTitleFont(42);
   LeadDijet_DPhi->GetYaxis()->SetTitle("Events");
   LeadDijet_DPhi->GetYaxis()->SetLabelFont(42);
   LeadDijet_DPhi->GetYaxis()->SetLabelSize(0.035);
   LeadDijet_DPhi->GetYaxis()->SetTitleSize(0.035);
   LeadDijet_DPhi->GetYaxis()->SetTitleOffset(1.75);
   LeadDijet_DPhi->GetYaxis()->SetTitleFont(42);
   LeadDijet_DPhi->GetZaxis()->SetLabelFont(42);
   LeadDijet_DPhi->GetZaxis()->SetLabelSize(0.035);
   LeadDijet_DPhi->GetZaxis()->SetTitleSize(0.035);
   LeadDijet_DPhi->GetZaxis()->SetTitleFont(42);
   LeadDijet_DPhi->Draw("");
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
