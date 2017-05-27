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
        string enzan;
        string keka;
        int _key;
        int _kke;
        int Result;
        int kaisu;
        //int b;
        //string input;
        //int input2;
        //int val1;
    
};
