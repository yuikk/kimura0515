#pragma once
#include "ofxGui.h"

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
        //void sujiButtonPressed();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
        //ofxButton sujiButton;
        //ofxPanel gui;
        //ofImage image1;
        string mNum;
        string suji;
        string suji2;
        string enzan;
        string enzan2;
        string keka;
        string keka2;
        int _key;
        int _key2;
        int Result;
        //int b;
        int input;
        int input2;
        //int val1;
    
};
