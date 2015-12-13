.PHONY: clean all

CHAPTERS =FrontMatter/frontmatter.tex 
CHAPTERS+=FrontMatter/Acknowledgements_FCT.tex
CHAPTERS+=Chapter01/Theory.tex 
CHAPTERS+=Chapter02/ExperimentalApparatus.tex
CHAPTERS+=Chapter03/TechnicalWork.tex
CHAPTERS+=Chapter04/PhysicsObjects.tex
CHAPTERS+=Chapter05/PromptDataAnalysis.tex
CHAPTERS+=Chapter06/RunIParkedAnalysisPreparation.tex
CHAPTERS+=Chapter07/ParkedDataAnalysis.tex
CHAPTERS+=Chapter08/RunIIPreparation.tex
CHAPTERS+=Chapter09/Conclusions.tex
CHAPTERS+=backmatter.tex

all: thesis.pdf

thesis.bbl: thesis.tex thesis.bib
	pdflatex thesis.tex
	bibtex thesis

thesis.acr: $(CHAPTERS) thesis.tex Glossary.tex
	pdflatex thesis.tex
	makeglossaries thesis

thesis.pdf: thesis.tex thesis.bbl thesis.acr $(CHAPTERS)
	pdflatex thesis.tex
	pdflatex thesis.tex

chapters: $(CHAPTERS) thesis.tex thesis.bbl thesis.acr
	pdflatex -jobname=chapter01_Theory                "\includeonly{Chapter01/Theory}\input{thesis}"
	pdflatex -jobname=chapter02_ExperimentalApparatus "\includeonly{Chapter02/ExperimentalApparatus}\input{thesis}"
	pdflatex -jobname=chapter03_TechnicalWork         "\includeonly{Chapter03/TechnicalWork}\input{thesis}"
	pdflatex -jobname=chapter04_PhysicsObjects        "\includeonly{Chapter04/PhysicsObjects}\input{thesis}"
	pdflatex -jobname=chapter05_PromptDataAnalysis    "\includeonly{Chapter05/PromptDataAnalysis}\input{thesis}"
	pdflatex -jobname=chapter06_ParkedDataAnalysis    "\includeonly{Chapter06/ParkedDataAnalysis}\input{thesis}"
	pdflatex -jobname=chapter07_RunIIPreparation      "\includeonly{Chapter07/RunIIPreparation}\input{thesis}"
	pdflatex -jobname=chapter08_Conclusions           "\includeonly{Chapter08/Conclusions}\input{thesis}"

clean:
	@rm -f thesis.pdf thesis.log thesis.aux
	@rm -f *.bbl *.blg *.lof *.cut
	@rm -f *.lot *.out *.toc
