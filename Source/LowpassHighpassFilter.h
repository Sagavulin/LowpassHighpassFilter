#pragma once
#include <vector>
#include "JuceHeader.h"

class LowpassHighpassFilter
{
	// setting up interface for LowpassHighpassFilter
public:
	void setHighpass(bool highpass);
	void setCutoffFrequency(float cutoffFrequency);
	void setSamplingRate(float samplingRate);
	
	void ProcessBlock(juce::AudioBuffer<float>&, juce::MidiBuffer&);

private:
	bool highpass;
	float cutoffFrequency;
	float samplingRate;
	std::vector<float>dnBuffer;
};

