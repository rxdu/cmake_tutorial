# Add executables
add_executable(image_app image_app.cpp)
target_link_libraries(image_app image)

add_executable(cvimage_app cvimage_app.cpp)
target_link_libraries(cvimage_app image)