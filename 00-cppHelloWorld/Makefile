SOURCE = hello.cpp
BIN = hello.exe
OBJ = hello.o
CXX = g++
CXXFLAGS = -std=c++17

$(BIN):(OBJ)
      $(CXX) $(OBJ) -o $(OBJ) $(CXXFLAGS)

run:$(BIN)
     $(BIN)

$(OBJ): $(SOURCE)
      $(CXX) -c$(SOURCE) -o	$(OBJ) $(CXXFLAGS) 	  
