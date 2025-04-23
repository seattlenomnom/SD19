# makefile for sd19
#
sd19: sd19.cpp
	g++ -Wall -g sd19.cpp -o ./Build/DEBUG/sd19

.PHONY: clean
	clean:
	rm Build/DEBUG/sd19


