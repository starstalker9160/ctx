CXX ?= g++
CXXFLAGS := -std=c++20
SRC := ./src/main.cpp
OUT := ./builds/app

app: $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)
