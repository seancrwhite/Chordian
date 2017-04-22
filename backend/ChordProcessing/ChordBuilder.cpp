#include "Chromagram.h"
#include "ChordDetector.h"
#include "ChordBuilder.h"

ChordBuilder::ChordBuilder(){
    Chromagram chromagram (512, 44100);
    ChordDetector detector = new ChordDetector();
}