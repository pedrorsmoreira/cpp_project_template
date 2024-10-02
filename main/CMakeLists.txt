# Set the binary name
set(TARGET_BINARY_NAME cppprojecttemplatebinary)

# Create a binary from main.cc
add_executable(${TARGET_BINARY_NAME} dummy_main.cc)

# Link the dummy_counter_lib to the binary
target_link_libraries(${TARGET_BINARY_NAME} PRIVATE dummy_counter_lib)
