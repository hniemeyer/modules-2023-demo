# CMakeList.txt: CMake-Projekt für "Modules2023". Schließen Sie die Quelle ein, und definieren Sie
# projektspezifische Logik hier.
#

add_library(core)
target_sources(core
  PUBLIC
    FILE_SET cxx_modules TYPE CXX_MODULES FILES
    foo.cxx
)

# Fügen Sie der ausführbaren Datei dieses Projekts eine Quelle hinzu.
add_executable (example "main.cpp")
target_link_libraries(example PRIVATE core)

# TODO: Fügen Sie bei Bedarf Tests hinzu, und installieren Sie Ziele.
