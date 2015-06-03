#pragma once

#include "ofMain.h"
#include "Segment.h"

class ofApp : public ofBaseApp{

public:
    void setup();
    void update();
    void draw();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    void walk(Segment* segA, Segment* segB, float cyc);
    
    Segment* segment0;
    Segment* segment1;
    Segment* segment2;
    Segment* segment3;
    float cycle;
    float offset = - PI/2;
};
