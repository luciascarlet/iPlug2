#include "IPlugEffect.h"
#include "IPlug_include_in_plug_src.h"

IPlugEffect::IPlugEffect(const InstanceInfo& info)
: Plugin(info, MakeConfig(static_cast<int>(Parameters::Count), presetCount))
{
  GetParam(static_cast<int>(Parameters::Gain))->InitDouble("Gain", 0., 0., 100.0, 0.01, "%");
}

void IPlugEffect::ProcessBlock(sample** inputs, sample** outputs, int frameCount)
{
  const double gain = static_cast<int>(Parameters::Gain)->Value() / 100.;
  const int channelCount = NOutChansConnected();
  
  for (int s = 0; s < frameCount; s++)
  {
    for (int c = 0; c < channelCount; c++)
    {
      outputs[c][s] = inputs[c][s] * gain;
    }
  }
}

void* IPlugEffect::OpenWindow(void* parent)
{

}

void IPlugEffect::CloseWindow()
{

}