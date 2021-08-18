all:
	g++ src/*.cpp -Iinclude -o main.exe && mv main.exe build