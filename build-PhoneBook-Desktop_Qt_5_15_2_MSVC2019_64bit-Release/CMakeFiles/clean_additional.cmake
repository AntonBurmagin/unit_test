# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\PhoneBook_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\PhoneBook_autogen.dir\\ParseCache.txt"
  "PhoneBook_autogen"
  "test\\testPhoneBook\\CMakeFiles\\testPhoneBook_autogen.dir\\AutogenUsed.txt"
  "test\\testPhoneBook\\CMakeFiles\\testPhoneBook_autogen.dir\\ParseCache.txt"
  "test\\testPhoneBook\\testPhoneBook_autogen"
  )
endif()
