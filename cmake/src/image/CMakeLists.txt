# Dependency libraries
find_package(OpenCV REQUIRED)

message(STATUS "OpenCV_LIBS: ${OpenCV_LIBS}")
message(STATUS "OpenCV_INCLUDE_DIRS: ${OpenCV_INCLUDE_DIRS}")

# Add libraries
set(IMAGE_SRC
    src/image.cpp
    src/image_utils.cpp
)
add_library(image STATIC ${IMAGE_SRC})
target_link_libraries(image ${OpenCV_LIBS})
target_include_directories(image PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<BUILD_INTERFACE:${OpenCV_INCLUDE_DIRS}>
	PRIVATE src)

