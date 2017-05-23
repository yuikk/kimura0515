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
    ofSetColor(30, 200, 200); // 文字色を指定
    //TODO: intからStringへの変換方法
    string ab = "a=";
    ofDrawBitmapString(ab,10,10);
    ofDrawBitmapString(a,40,10);
    // scanf("%d",&a);
    
    string ac = "b=";
    ofDrawBitmapString(ac,10,20);
    ofDrawBitmapString(b,40,20);
    }

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
        case 1:
            a=1;
            break;
        case 2:
            b=2;
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 0:
            break;
        defauly:
            break;
    }
    
    
  //  scanf("%d",&a);
    
  //  scanf("%d",&b);
    
    //kekka = a + b;
 //   string aa = "計算結果";
   // ofDrawBitmapString(aa,10,30);
    //ofDrawBitmapString(kekka,10,40);

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
