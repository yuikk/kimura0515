#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255,255,255);
    
    }

//--------------------------------------------------------------
void ofApp::update(){
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0, 0, 255);
    
    string myNum = ofToString(_key );
    string ab = "a=";
    ofDrawBitmapString("ab" ,10,10);
    ofDrawBitmapString("myNum" ,40,10);
    input2 = input2* 10 +_key;
    
    
    //TODO: intからStringへの変換方法
    //int num = _key;
    //string f = _key;
    //ofDrawBitmapString(f,40,10);
    input2 = input2* 10 +_key;
    //strcat
    
    
    string ac = "b=";
    ofDrawBitmapString(ac,10,40);
    string w = ofToString(_key);
    ofDrawBitmapString(w,40,40);
    input2 = input2* 10 +_key;
    
    
    //scanf("%d",&a);
    
   // string ac = "b=";
   // ofDrawBitmapString(ac,10,20);
    //ofDrawBitmapString(b,40,20);
    }

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch(key){
        case 1:
            _key=1;
            break;
        case 2:
            _key=2;
            break;
        case 3:
            _key=3;
            break;
        case 4:
            _key=4;
            break;
        case 5:
            _key=5;
            break;
        case 6:
            _key=6;
            break;
        case 7:
            _key=7;
            break;
        case 8:
            _key=8;
            break;
        case 9:
            _key=9;
            break;
        case 0:
            _key=0;
            break;
        case A;
            
            brake;
        default:
            break;
            
    }
    
    
    
  //  scanf("%d",&a);
    
  //  scanf("%d",&b);
    
    //kekka = a + b;
 //   string aa = "計算結果";
   // ofDrawBitmapString(aa,10,30);
    //ofDrawBitmapString(kekka,10,40);計算のここ

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
