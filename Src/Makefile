# Quark ver: 1.0.0e
# Version number order: major.minor.patch
# e = early (Not even pre-alpha)
# pa = Pre-Alpha
# a = Alpha
# b = Beta
# o = Offical

exec = q.exe # Change this to your executables names

$(exec): Q-SRC/QS-main.o  *.cpp
	g++ -std=c++11 -Werror Q-SRC/QS-main.o -I Q-SRC *.cpp -o $(exec)

QS-main.o: Q-SRC/QS-main.cpp
	g++ -std=c++11 -Werror -c Q-SRC/QS-main.cpp
	
clean:
	clean.bat