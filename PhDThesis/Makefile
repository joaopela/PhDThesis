.PHONY: clean all

CHAPTERS=frontmatter.tex theory.tex Chapter02_ExperimentalApparatus/ExperimentalApparatus.tex objects.tex technical.tex physics.tex conclusions.tex backmatter.tex

all: thesis.pdf

thesis.bbl: thesis.tex thesis.bib
	pdflatex thesis.tex
	bibtex thesis

thesis.acr: $(CHAPTERS) thesis.tex Glossary.tex
	pdflatex thesis.tex
	makeglossaries thesis

thesis.pdf: $(CHAPTERS) thesis.tex thesis.bbl thesis.acr
	pdflatex thesis.tex
	pdflatex thesis.tex

clean:
	@rm -f thesis.pdf thesis.log thesis.aux
	@rm -f *.bbl *.blg *.lof *.cut
	@rm -f *.lot *.out *.toc
