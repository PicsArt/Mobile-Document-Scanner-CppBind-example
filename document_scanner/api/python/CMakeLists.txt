find_package(pybind11 REQUIRED)

include_directories(${pybind11_INCLUDE_DIRS})

pybind11_add_module(
        document_scanner_pybind
        SHARED
        THIN_LTO
        generated/wrappers/document_scanner_pybind_module.cpp
        generated/wrappers/document_scanner_pybind.cpp
        generated/wrappers/document_scanner_pybind.h
        generated/wrappers/cv/imgcodecs_pybind.cpp
        generated/wrappers/cv/imgcodecs_pybind.h
        generated/wrappers/cv/mat_pybind.cpp
        generated/wrappers/cv/mat_pybind.h
        generated/wrappers/cv/types_pybind.cpp
        generated/wrappers/cv/types_pybind.h
        generated/wrappers/doc_scanner/document_scanner_cv_pybind.cpp
        generated/wrappers/doc_scanner/document_scanner_cv_pybind.h
)


target_link_libraries(document_scanner_pybind PRIVATE document_scanner_lib)
target_link_libraries(document_scanner_pybind PRIVATE ${OpenCV_LIBS})

target_compile_definitions(
        document_scanner_pybind
        PRIVATE VERSION_INFO=0.0.1
)
