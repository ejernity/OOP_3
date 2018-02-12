askisi3: main.o artifact.o masterpiece.o painting.o sculpture.o
	g++ main.o artifact.o masterpiece.o painting.o sculpture.o -o askisi3

main.o: main.cpp
	g++ -c main.cpp

artifact.o: artifact.cpp artifact.hpp
	g++ -c artifact.cpp

masterpiece.o: masterpiece.cpp masterpiece.hpp
	g++ -c masterpiece.cpp

painting.o: painting.cpp painting.hpp
	g++ -c painting.cpp

sculpture.o: sculpture.cpp sculpture.hpp
	g++ -c sculpture.cpp

clean:
	rm *.o askisi3