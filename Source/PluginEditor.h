/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Pfmproject0_version2AudioProcessorEditor  : public AudioProcessorEditor
{
public:
    Pfmproject0_version2AudioProcessorEditor (Pfmproject0_version2AudioProcessor&);
    ~Pfmproject0_version2AudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Pfmproject0_version2AudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Pfmproject0_version2AudioProcessorEditor)
};
