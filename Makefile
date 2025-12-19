# C Learning Project Makefile
# Compiler and flags for development with debugging and strict error checking

CC = gcc
CFLAGS = -Wall -Wextra -g -O0
DEBUGFLAGS = -Wall -Wextra -g -O0 -DDEBUG
LDFLAGS =

# Source files and output names
SOURCES = try.c pry.c bry.c
TARGETS = try pry bry

# Default target
all: $(TARGETS)

# Build try program
try: try.c
	$(CC) try.c -o try $(CFLAGS)
	@echo "✓ Built: try (with debugging symbols and warnings enabled)"

# Build pry program
pry: pry.c
	$(CC) pry.c -o pry $(CFLAGS)
	@echo "✓ Built: pry (with debugging symbols and warnings enabled)"

# Build bry program
bry: bry.c
	$(CC) bry.c -o bry $(CFLAGS)
	@echo " Built bry (with debugging symbols and warnings enables)"


# Debug target - build with debug symbols
debug: CFLAGS = $(DEBUGFLAGS)
debug: clean all
	@echo "✓ Debug build complete. Use: gdb ./try or gdb ./pry or gdb ./bry"

# Run try program
run-try: try
	./try

# Run pry program
run-pry: pry
	./pry

# Run bry program
run-bry: bry
	./bry

# Run all programs
run-all: $(TARGETS)
	@echo "\n=== Running try ==="
	./try
	@echo "\n=== Running pry ==="
	./pry
	@echo "\n=== Running bry ==="
	./bry


# Debug try with gdb
debug-try: debug
	gdb ./try

# Debug pry with gdb
debug-pry: debug
	gdb ./pry


# Debug pry with gdb
debug-bry: debug
	gdb ./bry

# Clean compiled files
clean:
	rm -f $(TARGETS)
	@echo "✓ Cleaned: removed all compiled programs"

# Remove all generated files including object files
distclean: clean
	@echo "✓ Distclean: workspace reset"

# Compile with all strict warnings (extra strict mode)
strict: CFLAGS = -Wall -Wextra -Werror -g -O0 -pedantic
strict: clean all
	@echo "✓ Built with strict mode: all warnings treated as errors"

# Compile with optimization (release mode)
release: CFLAGS = -Wall -O2
release: clean all
	@echo "✓ Release build: optimized, debugging symbols removed"

# Help command
help:
	@echo "C Learning Project - Make Commands"
	@echo "===================================="
	@echo ""
	@echo "Build commands:"
	@echo "  make                   - Build all programs (default, with debugging enabled)"
	@echo "  make try              - Build try program only"
	@echo "  make pry              - Build pry program only"
	@echo "  make debug            - Build with extra debugging symbols"
	@echo "  make strict           - Build with strict warnings (warnings as errors)"
	@echo "  make release          - Build optimized version without debug symbols"
	@echo ""
	@echo "Run commands:"
	@echo "  make run-try          - Compile and run try program"
	@echo "  make run-pry          - Compile and run pry program"
	@echo "  make run-all          - Compile and run all programs"
	@echo ""
	@echo "Debug commands:"
	@echo "  make debug-try        - Build and debug try with gdb"
	@echo "  make debug-pry        - Build and debug pry with gdb"
	@echo ""
	@echo "Cleanup commands:"
	@echo "  make clean            - Remove compiled programs"
	@echo "  make distclean        - Full cleanup"
	@echo ""
	@echo "Compiler flags used:"
	@echo "  -Wall                 - Enable all common warnings"
	@echo "  -Wextra               - Enable extra warnings"
	@echo "  -g                    - Include debugging symbols (for gdb)"
	@echo "  -O0                   - No optimization (for debugging)"
	@echo "  -O2                   - Performance optimization (for release)"
	@echo ""

.PHONY: all debug run-try run-pry run-all debug-try debug-pry clean distclean strict release help
