project(GNU-Kanban_gui)

set(GUI_DIR "${CMAKE_SOURCE_DIR}/extern/GUI/")
message("GUI DIR: " ${GUI_DIR})

set(gui_files
	"${GUI_DIR}/Base/mainframe.h"
	"${GUI_DIR}/Base/mainframe.cpp"
)

add_library(GNU-Kanban_gui STATIC ${gui_files})
target_link_libraries(GNU-Kanban_gui ${wxWidgets_LIBRARIES})