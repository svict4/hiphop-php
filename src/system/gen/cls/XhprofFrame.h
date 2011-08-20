/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_XhprofFrame_hed1dc80a__
#define __GENERATED_cls_XhprofFrame_hed1dc80a__

#include <cls/XhprofFrame.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/xhprof.php line 6 */
FORWARD_DECLARE_CLASS(XhprofFrame);
extern const ObjectStaticCallbacks cw_XhprofFrame;
class c_XhprofFrame : public ExtObjectData {
  public:

  // Properties

  // Class Map
  DECLARE_CLASS_NO_SWEEP(XhprofFrame, XhprofFrame, ObjectData)
  public: void t___construct(Variant v_name);
  public: c_XhprofFrame *create(CVarRef v_name);
  public: void getConstructor(MethodCallPackage &mcp);
  public: Variant t___destruct();
  DECLARE_METHOD_INVOKE_HELPERS(__destruct);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
};
ObjectData *coo_XhprofFrame() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_XhprofFrame_hed1dc80a__
