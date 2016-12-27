include_directories(/usr/local/include/fuse3)
set(SRC 
  main.cpp
  fuse/wrapper.fuse.cpp
  fuse/fsmain.c
)
add_executable(fs.wator.app ${SRC})
target_link_libraries(fs.wator.app
  fuse3
)
