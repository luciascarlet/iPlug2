#pragma once

#include "IPlug_include_in_plug_hdr.h"

const int presetCount = 1;

enum class Parameters: int
{
  Gain = 0,
  Count
};

using namespace iplug;

class IPlugEffect final: public Plugin
{
public:
  IPlugEffect(const InstanceInfo& info);
  
  void ProcessBlock(sample** inputs, sample** outputs, int nFrames) override;
  
  /**
   * Takes and returns a pointer to a platform-native window handle; normally this will just be an empty window.
   * Add platform-specific code here to attach a GUI, casting the void pointer to a platform view/window pointer.
   *
   * @param parent - Void pointer to a platform-native window handle (NSView on macOS, HWND on Windows)
   * @return The handle to the initialised window
   */
  void* OpenWindow(void* parent) override;
  
  /**
   * Perform any necessary cleanup when the window is closed.
   */
  void CloseWindow() override;
};
