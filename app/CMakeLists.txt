project(GNU-Kanban_exe)


include_directories("${CMAKE_SOURCE_DIR}/include")

if(wxWidgets_FOUND)
	include(${wxWidgets_USE_FILE})
else()
	message("WX NOT FOUND")
endif()

set(SOURCE_FILES
	./main.cpp
	./main.h
)

add_executable(GNU-Kanban ${SOURCE_FILES})
target_link_libraries(GNU-Kanban ${wxWidgets_LIBRARIES})
target_link_libraries(GNU-Kanban GNU-Kanban_lib)