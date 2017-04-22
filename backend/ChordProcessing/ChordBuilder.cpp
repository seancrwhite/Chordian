#include "Chromagram.h"
#include "ChordDetector.h"

ChordBuilder::ChordBuilder(){
    Chromagram chromagram (512, 44100);
    ChordDetector detector = new ChordDetector();
}