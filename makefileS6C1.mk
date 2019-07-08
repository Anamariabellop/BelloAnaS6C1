Pulso.pdf: pulso.dat S6C1plot.py BelloAnaMS6C1.cpp
	python S6C1plot.py
pulso.dat: a.out
	./a.out
a.out: BelloAnaMS6C1.cpp
	g++ BelloAnaMS6C1.cpp