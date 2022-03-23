.cpp.o:	$*.h
	g++	-c $*.cpp

all:	Vetor VetorEnderecos

Vetor:	Vetor.o 
	g++ -o $@ $^

VetorEnderecos:	VetorEnderecos.o 
	g++ -o $@ $^

clean:
	rm *.*~ *~ *.o Vetor VetorEnderecos
	