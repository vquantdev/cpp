# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall

# Target executable
TARGET = helloworld

all:
# Compile .cpp files into .o files
	$(CXX) $(CXXFLAGS) -c ./src/helloworld.cpp -o ./build/helloworld.o
	
# Link object files into the target executable
	$(CXX) $(CXXFLAGS) -o ./build/$(TARGET) ./build/helloworld.o

run:
# Run the executable
	./build/$(TARGET) > ./output/output.txt

clean:
# Remove generated files
	rm -rf ./build/$(TARGET) ./build/*.*