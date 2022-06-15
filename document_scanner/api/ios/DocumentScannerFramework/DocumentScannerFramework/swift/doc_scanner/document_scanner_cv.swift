/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 06/14/2022-07:21.
 * Please do not change it manually.
 */

import DocumentScannerFramework.Private
import Foundation

public class DocCornerPointsExtractor {

  /**
   * An internal property to keep a reference to the original C++ object.
   * It is intended to be used by the generated code.
   */
  public let cself: CppBindCObject

  /**
   * An internal property to keep track whether Swift is responsible for deallocating the underlying C++ object or not.
   * It is intended to be used by the generated code.
   */
  public let owner: Bool
  private var refs: [Any]

  /// internal main initializer
  internal required init(_ _cself: CppBindCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
    self.refs = []
  }

  deinit {
    release_DocCornerPointsExtractor(cself, owner)
  }

  /**
   * An internal method to bind the lifetimes of the current and another object.
   * It is intended to be used by the generated code.
   */
  public func keepCppBindReference(_ object: Any) {
    self.refs.append(object)
  }

  public convenience init() {
    var cppbindErr = CppBindCObject()
    self.init(create_DocCornerPointsExtractor(&cppbindErr), true)
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
  }

  public convenience init(image: Mat) {
    let swifttoscimage = image.cself
    var cppbindErr = CppBindCObject()
    self.init(create_DocCornerPointsExtractor_1(swifttoscimage, &cppbindErr), true)
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
  }

  public var image: Mat {
    get {
      var cppbindErr = CppBindCObject()
      let result = _prop_get_DocCornerPointsExtractor_image(cself, &cppbindErr)
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

    set(value) {
      let swifttoscvalue = value.cself
      var cppbindErr = CppBindCObject()
      _prop_set_DocCornerPointsExtractor_image(cself, swifttoscvalue, &cppbindErr)
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
    }
  }

  public var points: Array<PointInt> {
    var cppbindErr = CppBindCObject()
    let result = _prop_get_DocCornerPointsExtractor_points(cself, &cppbindErr)
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
    let _resultBuffer = UnsafeBufferPointer<CppBindCObject>(
      start: result.data.assumingMemoryBound(to: CppBindCObject.self),
      count: Int(result.size))
    var sctoswiftresult: [PointInt] = []
    defer {
      _resultBuffer.deallocate()
    }
    for i in 0..<Int(result.size) {
      let resultValue = _resultBuffer[i]
      var sctoswiftresultValue: PointInt
      sctoswiftresultValue = PointInt(resultValue, true)
      sctoswiftresult.append(sctoswiftresultValue)
    }
    return sctoswiftresult
  }

  public func computeCornerPoints() -> Void {

    var cppbindErr = CppBindCObject()
    _func_DocCornerPointsExtractor_computeCornerPoints(cself, &cppbindErr)
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
  }

  /**
   * An internal property to keep an information about the underlying C++ object type.
   * It is intended to be used by the generated code.
   */
  class var cppbindCxxTypeName : String { return "DocCornerPointsExtractor" }
}

public class DocExtractor {

  /**
   * An internal property to keep a reference to the original C++ object.
   * It is intended to be used by the generated code.
   */
  public let cself: CppBindCObject

  /**
   * An internal property to keep track whether Swift is responsible for deallocating the underlying C++ object or not.
   * It is intended to be used by the generated code.
   */
  public let owner: Bool
  private var refs: [Any]

  /// internal main initializer
  internal required init(_ _cself: CppBindCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
    self.refs = []
  }

  deinit {
    release_DocExtractor(cself, owner)
  }

  /**
   * An internal method to bind the lifetimes of the current and another object.
   * It is intended to be used by the generated code.
   */
  public func keepCppBindReference(_ object: Any) {
    self.refs.append(object)
  }

  public convenience init(image: Mat, docCornerPoints: Array<PointInt>, w: Float = 420, h: Float = 596, margin: Int = 5) {
    let swifttoscimage = image.cself
    let _swifttoscdocCornerPointsData = UnsafeMutablePointer<CppBindCObject>.allocate(capacity: docCornerPoints.count)
    var swifttoscdocCornerPoints = CppBindCDataArray()
    swifttoscdocCornerPoints.data = UnsafeMutableRawPointer(_swifttoscdocCornerPointsData)
    swifttoscdocCornerPoints.size = Int64(docCornerPoints.count)
    for i in 0..<docCornerPoints.count {
      let docCornerPointsVal = docCornerPoints[i]
      let swifttoscdocCornerPointsVal = docCornerPointsVal.cself
      _swifttoscdocCornerPointsData[i] = swifttoscdocCornerPointsVal
    }
    let swifttoscmargin = CInt(margin)
    var cppbindErr = CppBindCObject()
    self.init(create_DocExtractor(swifttoscimage, swifttoscdocCornerPoints, w, h, swifttoscmargin, &cppbindErr), true)
    
    swifttoscdocCornerPoints.data.deallocate()
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
  }

  public var image: Mat {
    get {
      var cppbindErr = CppBindCObject()
      let result = _prop_get_DocExtractor_image(cself, &cppbindErr)
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

    set(value) {
      let swifttoscvalue = value.cself
      var cppbindErr = CppBindCObject()
      _prop_set_DocExtractor_image(cself, swifttoscvalue, &cppbindErr)
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
    }
  }

  public func warp() -> Mat {

    var cppbindErr = CppBindCObject()
    let result = _func_DocExtractor_warp(cself, &cppbindErr)
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

  public func drawPoints(R: Int, G: Int, B: Int) -> Mat {

    let swifttoscR = CInt(R)
    let swifttoscG = CInt(G)
    let swifttoscB = CInt(B)
    var cppbindErr = CppBindCObject()
    let result = _func_DocExtractor_drawPoints(cself, swifttoscR, swifttoscG, swifttoscB, &cppbindErr)
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

  /**
   * An internal property to keep an information about the underlying C++ object type.
   * It is intended to be used by the generated code.
   */
  class var cppbindCxxTypeName : String { return "DocExtractor" }
}

public func saveImage(filename: String, img: Mat) -> Bool {
  let swifttoscfilename = strdup(filename)!
  let swifttoscimg = img.cself
  var cppbindErr = CppBindCObject()
  let result = _func__saveImage(swifttoscfilename, swifttoscimg, &cppbindErr)
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
  return result
}