# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Gestion_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Gestion_autogen.dir\\ParseCache.txt"
  "Gestion_autogen"
  )
endif()
