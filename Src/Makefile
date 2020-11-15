# Quark ver: 0.1e

exec = q.exe # Change this to your executables names

$(exec): Q-SRC/QS-main.o  *.cpp
	g++ -std=c++11 -Werror Q-SRC/QS-main.o -I Q-SRC *.cpp -o $(exec)

QS-main.o: Q-SRC/QS-main.cpp
	g++ -std=c++11 -Werror -c Q-SRC/QS-main.cpp
	
clean:
	clean.bat