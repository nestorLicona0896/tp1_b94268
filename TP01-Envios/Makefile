FLAGS = -g -c --std=c++17

all:

	mkdir -p bin
	g++ $(FLAGS) src/fedex.cpp -o bin/fedex.o
	g++ $(FLAGS) src/postal.cpp -o bin/postal.o	
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o  bin/envios  bin/fedex.o bin/postal.o bin/main.o

test:
	mkdir -p bin
	g++ $(FLAGS) tests/fedex_tests.cpp -o bin/fedex_tests.o
	g++ $(FLAGS) src/fedex.cpp -o bin/fedex.o
	g++ -g -o bin/tests -lgtest_main -lgtest -lpthread bin/fedex_tests.o bin/fedex.o

	g++ $(FLAGS) tests/postal_tests.cpp -o bin/postal_tests.o
	g++ $(FLAGS) src/postal.cpp -o bin/postal.o
	g++ -g -o bin/tests -lgtest_main -lgtest -lpthread bin/postal_tests.o bin/postal.o


clean:

	rm -Rf bin