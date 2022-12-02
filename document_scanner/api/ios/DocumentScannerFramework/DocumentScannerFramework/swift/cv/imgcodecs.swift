/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 11/16/2022-12:36.
 * Please do not change it manually.
 */

import DocumentScannerFramework.Private
import Foundation

public enum ImreadModes: CInt {
  /// < If set, return the loaded image as is (with alpha channel, otherwise it gets cropped). Ignore EXIF orientation.
  case IMREAD_UNCHANGED = -1
  /// < If set, always convert image to the single channel grayscale image (codec internal conversion).
  case IMREAD_GRAYSCALE = 0
  /// < If set, always convert image to the 3 channel BGR color image.
  case IMREAD_COLOR = 1
  /// < If set, return 16-bit/32-bit image when the input has the corresponding depth, otherwise convert it to 8-bit.
  case IMREAD_ANYDEPTH = 2
  /// < If set, the image is read in any possible color format.
  case IMREAD_ANYCOLOR = 4
  /// < If set, use the gdal driver for loading the image.
  case IMREAD_LOAD_GDAL = 8
  /// < If set, always convert image to the single channel grayscale image and the image size reduced 1/2.
  case IMREAD_REDUCED_GRAYSCALE_2 = 16
  /// < If set, always convert image to the 3 channel BGR color image and the image size reduced 1/2.
  case IMREAD_REDUCED_COLOR_2 = 17
  /// < If set, always convert image to the single channel grayscale image and the image size reduced 1/4.
  case IMREAD_REDUCED_GRAYSCALE_4 = 32
  /// < If set, always convert image to the 3 channel BGR color image and the image size reduced 1/4.
  case IMREAD_REDUCED_COLOR_4 = 33
  /// < If set, always convert image to the single channel grayscale image and the image size reduced 1/8.
  case IMREAD_REDUCED_GRAYSCALE_8 = 64
  /// < If set, always convert image to the 3 channel BGR color image and the image size reduced 1/8.
  case IMREAD_REDUCED_COLOR_8 = 65
  /// < If set, do not rotate the image according to EXIF's orientation flag.
  case IMREAD_IGNORE_ORIENTATION = 128
}

public func imread(filename: String) -> Mat {
  let swifttoscfilename = strdup(filename)!
  var cppbindErr = CppBindCObject()
  let result = _func_Cv_imread_1(swifttoscfilename, &cppbindErr)
  if cppbindErr.type != nil {
    let errorType = String(cString: cppbindErr.type!)
    switch errorType {
    case ("std::exception"):
      let excObj = StdException(cppbindErr, true)
      ExceptionHandler.handleUncaughtException(excObj.what())
    default:
      cppbindErr.type.deallocate()
      ExceptionHandler.handleUncaughtException("Uncaught Exception")
    }
  }
  var sctoswiftresult: Mat
  sctoswiftresult = Mat(result, true)
  return sctoswiftresult
}

public func imread(filename: String, flags: Int) -> Mat {
  let swifttoscfilename = strdup(filename)!
  let swifttoscflags = CInt(flags)
  var cppbindErr = CppBindCObject()
  let result = _func_Cv_imread(swifttoscfilename, swifttoscflags, &cppbindErr)
  if cppbindErr.type != nil {
    let errorType = String(cString: cppbindErr.type!)
    switch errorType {
    case ("std::exception"):
      let excObj = StdException(cppbindErr, true)
      ExceptionHandler.handleUncaughtException(excObj.what())
    default:
      cppbindErr.type.deallocate()
      ExceptionHandler.handleUncaughtException("Uncaught Exception")
    }
  }
  var sctoswiftresult: Mat
  sctoswiftresult = Mat(result, true)
  return sctoswiftresult
}
