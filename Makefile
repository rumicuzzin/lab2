# Makefile for Shapes Project
# Usage: make, make clean, make run

# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -g

# Directories
OBJDIR = obj

# Target executable name
TARGET = main

# Source files (automatically find all .cpp files)
SOURCES = $(wildcard src/*.cpp)

# Object files (replace src/*.cpp with obj/*.o)
OBJECTS = $(SOURCES:src/%.cpp=$(OBJDIR)/%.o)

# Default target - builds the executable
all: $(TARGET)

# Create object directory
$(OBJDIR):
	mkdir -p $(OBJDIR)

# Link object files to create executable
$(TARGET): $(OBJECTS)
	@echo "Linking $(TARGET)..."
	$(CXX) $(OBJECTS) -o $(TARGET)
	@echo "Build complete! Run with: ./$(TARGET)"

# Compile .cpp files to .o files in obj directory
$(OBJDIR)/%.o: src/%.cpp | $(OBJDIR)
	@echo "Compiling $<..."
	$(CXX) $(CXXFLAGS) -Iheaders -c $< -o $@

# Run the program
run: $(TARGET)
	./$(TARGET)

# Clean up generated files
clean:
	@echo "Cleaning up..."
	rm -f $(OBJECTS) $(TARGET)
	rm -rf $(OBJDIR)
	@echo "Clean complete!"

# Rebuild everything from scratch
rebuild: clean all

# Show help
help:
	@echo "Available targets:"
	@echo "  all     - Build the project (default)"
	@echo "  run     - Build and run the program"
	@echo "  clean   - Remove all generated files"
	@echo "  rebuild - Clean and build from scratch"
	@echo "  help    - Show this help message"

# Tell make that these targets don't create files
.PHONY: all run clean rebuild help