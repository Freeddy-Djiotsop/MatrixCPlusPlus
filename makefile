#Freeddy Djiotsop

run: all matrix.in
	./matrix < matrix.in > matrix.out

all: matrix_main.o matrix_arith.o matrix_dyn.o matrix_io.o
	g++ -Wall matrix_main.o matrix_arith.o matrix_dyn.o matrix_io.o -o matrix

matrix_main.o: matrix_main.cpp matrix_arith.hpp matrix_dyn.hpp matrix_io.hpp
	g++ -Wall -c matrix_main.cpp

matrix_arith.o: matrix_arith.cpp matrix_arith.hpp
	g++ -Wall -c matrix_arith.cpp

matrix_dyn.o: matrix_dyn.cpp matrix_dyn.hpp
	g++ -Wall -c matrix_dyn.cpp


matrix_io.o: matrix_io.cpp matrix_io.hpp
	g++ -Wall -c matrix_io.cpp