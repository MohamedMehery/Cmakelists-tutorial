build:
	g++ .\src\main.cpp -lgtest -lgtest_main -pthread -o .\src\main.exe

clean:
	rm .\src\main.exe

run:
	.\main.exe