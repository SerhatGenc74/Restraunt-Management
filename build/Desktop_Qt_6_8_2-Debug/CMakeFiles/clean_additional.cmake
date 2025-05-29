# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Restraunt-Management_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Restraunt-Management_autogen.dir/ParseCache.txt"
  "Restraunt-Management_autogen"
  )
endif()
