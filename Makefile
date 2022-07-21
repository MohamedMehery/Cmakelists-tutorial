build:
	g++ .\main.cpp -lgtest -lgtest_main -pthread -o .\main.exe
clean:
	rm .\main.exe
run:
	.\main.exe