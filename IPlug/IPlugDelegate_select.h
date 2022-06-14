/*
 ==============================================================================
 
 This file is part of the iPlug 2 library. Copyright (C) the iPlug 2 developers. 
 
 See LICENSE.txt for  more info.
 
 ==============================================================================
*/

/**
 * @file
 * @brief Used for choosing an editor delegate @see IEditorDelegate
 */

#if defined COCOA_EDITOR_DELEGATE
  #include "IPlugCocoaEditorDelegate.h"
  using EDITOR_DELEGATE_CLASS = iplug::CocoaEditorDelegate;
#elif defined WEBVIEW_EDITOR_DELEGATE
  #include "IPlugWebViewEditorDelegate.h"
  using EDITOR_DELEGATE_CLASS = iplug::WebViewEditorDelegate;
#else
  #include "IPlugEditorDelegate.h"
  using EDITOR_DELEGATE_CLASS = iplug::IEditorDelegate;
#endif
