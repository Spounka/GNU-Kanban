project(GNU-Kanban_src)

if(wxWidgets_FOUND)
	include(${wxWidgets_USE_FILE})
else()
	message("WX NOT FOUND")
endif()

include_directories("${CMAKE_SOURCE_DIR}/include")
include_directories("${CMAKE_SOURCE_DIR}/extern")


set(CORE_HEADERS "${HEADERS_DIRECTORY}/core")

set(HEADER_FILES "${CORE_HEADERS}/mainwindow.h")

set(SOURCE_FILES "./core/mainwindow.cpp")

set(BUILD_FILES
	"${SOURCE_FILES}"
	"${HEADER_FILES}"
)

add_library(GNU-Kanban_lib STATIC "${BUILD_FILES}")
target_link_libraries(GNU-Kanban_lib ${wxWidgets_LIBRARIES})
target_link_libraries(GNU-Kanban_lib GNU-Kanban_gui)
