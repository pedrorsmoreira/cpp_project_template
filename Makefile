# Default target is debug
default: debug

# Directories for build outputs
BUILD_DIR = build

# Target for Debug build
debug:
	@mkdir -p $(BUILD_DIR)
	cd $(BUILD_DIR) && cmake -DCMAKE_BUILD_TYPE=Debug .. && cmake --build .

# Target for Release build
release:
	@mkdir -p $(BUILD_DIR)
	cd $(BUILD_DIR) && cmake -DCMAKE_BUILD_TYPE=Release .. && cmake --build .

# Target for RelWithDebInfo (Release with Debug Info) build
releasewithdebuginfo:
	@mkdir -p $(BUILD_DIR)
	cd $(BUILD_DIR) && cmake -DCMAKE_BUILD_TYPE=RelWithDebInfo .. && cmake --build .

# Clean target (removes the build directory)
clean:
	@rm -rf $(BUILD_DIR)
