# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall

# Target executable
TARGET = program

all:
# Compile .cpp files into .o files
	$(CXX) $(CXXFLAGS) -c ./src/program.cpp -o ./build/program.o
	
# Link object files into the target executable
	$(CXX) $(CXXFLAGS) -o ./build/$(TARGET) ./build/program.o

run:
# Run the executable
# script starts a fake terminal and records everything printed or typed
# -q disables extra messages ("Script started...").
# script -q <log file> <command to execute>
	script -q ./output/output.txt ./build/$(TARGET)

clean:
# Remove generated files
	rm -rf ./build/$(TARGET) ./build/*.*