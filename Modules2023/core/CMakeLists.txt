add_library(core)
target_sources(core
  PUBLIC
    FILE_SET cxx_modules TYPE CXX_MODULES FILES
    "core.cpp"
    "io.cpp"
    "geometry.cpp")