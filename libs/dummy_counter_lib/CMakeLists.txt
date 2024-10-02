# Add the dummy_counter_lib as a static library
add_library(dummy_counter_lib dummy_counter.cc)

# Tells Cmake where to find heards for the dummy_counter_lib
target_include_directories(dummy_counter_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})