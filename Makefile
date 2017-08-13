CXX:= g++
CXXFLAG:= -g

output: Main.o Fraction.o
	$(CXX) $(CXXFLAG) Main.o Fraction.o -o output

Main.o: Main.cpp
	$(CXX) $(CXXFLAG) Main.cpp -c

Fraction.o: Fraction.cpp Fraction.h
	$(CXX) $(CXXFLAG) Fraction.cpp -c

clean:
	rm *.o output