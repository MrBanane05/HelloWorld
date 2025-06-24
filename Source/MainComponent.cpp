#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    //Boutton en haut a gauche
    addAndMakeVisible(UpLeftButtun);

    setSize (800, 600);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setFont (juce::FontOptions (50.0f));
    g.setColour (juce::Colours::red);
    g.drawText ("GROS CACA BOUDIN !", getLocalBounds(), juce::Justification::centred, true);
}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.

    UpLeftButtun.setBounds( 10, 10, 50, 50);
    
}
