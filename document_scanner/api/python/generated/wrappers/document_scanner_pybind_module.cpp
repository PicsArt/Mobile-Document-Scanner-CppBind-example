/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 11/16/2022-12:37.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include "document_scanner/api/python/generated/wrappers/document_scanner_pybind.h"

namespace py = pybind11;
PYBIND11_MODULE(document_scanner_pybind, m) {
    py::module_ parent = m;
    bindDocumentScannerPybind(parent);
}
