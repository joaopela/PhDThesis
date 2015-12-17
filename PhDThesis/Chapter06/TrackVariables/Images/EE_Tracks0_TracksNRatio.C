{
//=========Macro generated from canvas: c1_n25/c1_n25
//=========  (Thu Dec 17 23:23:26 2015) by ROOT version5.32/00
   TCanvas *c1_n25 = new TCanvas("c1_n25", "c1_n25",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1_n25->SetHighLightColor(2);
   c1_n25->Range(0,0,1,1);
   c1_n25->SetFillColor(0);
   c1_n25->SetBorderMode(0);
   c1_n25->SetBorderSize(2);
   c1_n25->SetTickx(1);
   c1_n25->SetTicky(1);
   c1_n25->SetLeftMargin(0.15);
   c1_n25->SetRightMargin(0.15);
   c1_n25->SetTopMargin(0.05);
   c1_n25->SetBottomMargin(0.15);
   c1_n25->SetFrameFillStyle(0);
   c1_n25->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper
   TPad *upper = new TPad("upper", "pad",0,0,1,1);
   upper->Draw();
   upper->cd();
   upper->Range(-0.2142857,-0.05191008,1.214286,0.2941571);
   upper->SetFillColor(0);
   upper->SetBorderMode(0);
   upper->SetBorderSize(2);
   upper->SetTickx(1);
   upper->SetTicky(1);
   upper->SetLeftMargin(0.15);
   upper->SetRightMargin(0.15);
   upper->SetTopMargin(0.05);
   upper->SetBottomMargin(0.15);
   upper->SetFrameFillStyle(0);
   upper->SetFrameBorderMode(0);
   upper->SetFrameFillStyle(0);
   upper->SetFrameBorderMode(0);
   
   TH1D *TracksNRation = new TH1D("TracksNRation","TracksNRation",25,0,1);
   TracksNRation->SetBinContent(4,2.114791e-05);
   TracksNRation->SetBinContent(7,2.282682e-05);
   TracksNRation->SetBinContent(9,6.344373e-05);
   TracksNRation->SetBinContent(10,4.397473e-05);
   TracksNRation->SetBinContent(11,0.0001220535);
   TracksNRation->SetBinContent(12,0.0002066451);
   TracksNRation->SetBinContent(13,0.0007477463);
   TracksNRation->SetBinContent(14,0.000565572);
   TracksNRation->SetBinContent(15,0.0006902975);
   TracksNRation->SetBinContent(16,0.001945727);
   TracksNRation->SetBinContent(17,0.002753025);
   TracksNRation->SetBinContent(18,0.005327413);
   TracksNRation->SetBinContent(19,0.009581941);
   TracksNRation->SetBinContent(20,0.01655983);
   TracksNRation->SetBinContent(21,0.03665343);
   TracksNRation->SetBinContent(22,0.0650866);
   TracksNRation->SetBinContent(23,0.1137131);
   TracksNRation->SetBinContent(24,0.1679521);
   TracksNRation->SetBinContent(25,0.1977527);
   TracksNRation->SetBinContent(26,0.3801904);
   TracksNRation->SetMinimum(0);
   TracksNRation->SetMaximum(0.2768537);
   TracksNRation->SetEntries(34754.19);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#00ffff");
   TracksNRation->SetFillColor(ci);
   TracksNRation->SetFillStyle(3005);

   ci = TColor::GetColor("#00ffff");
   TracksNRation->SetLineColor(ci);
   TracksNRation->SetLineWidth(2);
   TracksNRation->GetXaxis()->SetTitle("#beta_{PV Tracks}^{dijet n}");
   TracksNRation->GetXaxis()->SetLabelFont(42);
   TracksNRation->GetXaxis()->SetLabelSize(0.035);
   TracksNRation->GetXaxis()->SetTitleOffset(1.4);
   TracksNRation->GetYaxis()->SetTitle("Arbitrary Units");
   TracksNRation->GetYaxis()->SetNdivisions(505);
   TracksNRation->GetYaxis()->SetLabelFont(42);
   TracksNRation->GetYaxis()->SetTitleOffset(1.5);
   TracksNRation->GetZaxis()->SetLabelFont(42);
   TracksNRation->GetZaxis()->SetLabelSize(0.035);
   TracksNRation->GetZaxis()->SetTitleSize(0.035);
   TracksNRation->GetZaxis()->SetTitleFont(42);
   TracksNRation->Draw("");
   
   TH1D *TracksNRation = new TH1D("TracksNRation","TracksNRation",25,0,1);
   TracksNRation->SetBinContent(7,0.00530504);
   TracksNRation->SetBinContent(9,0.00265252);
   TracksNRation->SetBinContent(13,0.00530504);
   TracksNRation->SetBinContent(15,0.00265252);
   TracksNRation->SetBinContent(16,0.00530504);
   TracksNRation->SetBinContent(17,0.00530504);
   TracksNRation->SetBinContent(18,0.00795756);
   TracksNRation->SetBinContent(19,0.00265252);
   TracksNRation->SetBinContent(20,0.00795756);
   TracksNRation->SetBinContent(21,0.0397878);
   TracksNRation->SetBinContent(22,0.04244032);
   TracksNRation->SetBinContent(23,0.05570292);
   TracksNRation->SetBinContent(24,0.0928382);
   TracksNRation->SetBinContent(25,0.1724138);
   TracksNRation->SetBinContent(26,0.5517241);
   TracksNRation->SetEntries(377);

   ci = TColor::GetColor("#ff0000");
   TracksNRation->SetFillColor(ci);
   TracksNRation->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   TracksNRation->SetLineColor(ci);
   TracksNRation->SetLineWidth(2);
   TracksNRation->GetXaxis()->SetTitle("#beta_{PV Tracks}^{dijet n}");
   TracksNRation->GetXaxis()->SetLabelFont(42);
   TracksNRation->GetXaxis()->SetLabelSize(0.035);
   TracksNRation->GetXaxis()->SetTitleSize(0.035);
   TracksNRation->GetXaxis()->SetTitleFont(42);
   TracksNRation->GetYaxis()->SetTitle("Arbitrary Units");
   TracksNRation->GetYaxis()->SetLabelFont(42);
   TracksNRation->GetYaxis()->SetLabelSize(0.035);
   TracksNRation->GetYaxis()->SetTitleSize(0.035);
   TracksNRation->GetYaxis()->SetTitleFont(42);
   TracksNRation->GetZaxis()->SetLabelFont(42);
   TracksNRation->GetZaxis()->SetLabelSize(0.035);
   TracksNRation->GetZaxis()->SetTitleSize(0.035);
   TracksNRation->GetZaxis()->SetTitleFont(42);
   TracksNRation->Draw("same");
   
   TLegend *leg = new TLegend(0.55,0.7,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(10);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(19);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("TracksNRation","VBF Higgs Inv","LF");

   ci = TColor::GetColor("#00ffff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3005);

   ci = TColor::GetColor("#00ffff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("TracksNRation","QCD VBF+MET","LF");

   ci = TColor::GetColor("#ff0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TH1D *TracksNRation__25 = new TH1D("TracksNRation__25","TracksNRation",25,0,1);
   TracksNRation__25->SetBinContent(4,2.114791e-05);
   TracksNRation__25->SetBinContent(7,2.282682e-05);
   TracksNRation__25->SetBinContent(9,6.344373e-05);
   TracksNRation__25->SetBinContent(10,4.397473e-05);
   TracksNRation__25->SetBinContent(11,0.0001220535);
   TracksNRation__25->SetBinContent(12,0.0002066451);
   TracksNRation__25->SetBinContent(13,0.0007477463);
   TracksNRation__25->SetBinContent(14,0.000565572);
   TracksNRation__25->SetBinContent(15,0.0006902975);
   TracksNRation__25->SetBinContent(16,0.001945727);
   TracksNRation__25->SetBinContent(17,0.002753025);
   TracksNRation__25->SetBinContent(18,0.005327413);
   TracksNRation__25->SetBinContent(19,0.009581941);
   TracksNRation__25->SetBinContent(20,0.01655983);
   TracksNRation__25->SetBinContent(21,0.03665343);
   TracksNRation__25->SetBinContent(22,0.0650866);
   TracksNRation__25->SetBinContent(23,0.1137131);
   TracksNRation__25->SetBinContent(24,0.1679521);
   TracksNRation__25->SetBinContent(25,0.1977527);
   TracksNRation__25->SetBinContent(26,0.3801904);
   TracksNRation__25->SetMinimum(0);
   TracksNRation__25->SetMaximum(0.2768537);
   TracksNRation__25->SetEntries(34754.19);
   TracksNRation__25->SetDirectory(0);

   ci = TColor::GetColor("#00ffff");
   TracksNRation__25->SetFillColor(ci);
   TracksNRation__25->SetFillStyle(3005);

   ci = TColor::GetColor("#00ffff");
   TracksNRation__25->SetLineColor(ci);
   TracksNRation__25->SetLineWidth(2);
   TracksNRation__25->GetXaxis()->SetTitle("#beta_{PV Tracks}^{dijet n}");
   TracksNRation__25->GetXaxis()->SetLabelFont(42);
   TracksNRation__25->GetXaxis()->SetLabelSize(0.035);
   TracksNRation__25->GetXaxis()->SetTitleOffset(1.4);
   TracksNRation__25->GetYaxis()->SetTitle("Arbitrary Units");
   TracksNRation__25->GetYaxis()->SetNdivisions(505);
   TracksNRation__25->GetYaxis()->SetLabelFont(42);
   TracksNRation__25->GetYaxis()->SetTitleOffset(1.5);
   TracksNRation__25->GetZaxis()->SetLabelFont(42);
   TracksNRation__25->GetZaxis()->SetLabelSize(0.035);
   TracksNRation__25->GetZaxis()->SetTitleSize(0.035);
   TracksNRation__25->GetZaxis()->SetTitleFont(42);
   TracksNRation__25->Draw("sameaxis");
   upper->Modified();
   c1_n25->cd();
   c1_n25->Modified();
   c1_n25->cd();
   c1_n25->SetSelected(c1_n25);
}
