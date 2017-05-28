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
    ofDrawBitmapString(suji ,20,10);
    ofDrawBitmapString(enzan ,40,10);
    ofDrawBitmapString(suji2,60,10);
    ofDrawBitmapString(enzan2,80,10);
    ofDrawBitmapString(keka2,100,10);
    }

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(_key == 'q'){
        if(enzan == "+"){
            keka = input + input2;
        }else if(enzan == "-"){
            keka = input -input2;
        }else if(enzan == "*"){
            keka = input * input2;
        }else{
            keka = input / input2;
        }
    }else if(enzan == "+" || enzan == "-" || enzan == "*" || enzan == "/"){
        switch(key){
            case '1':
                _key=1;
                input2 = input2* 10 +_key;
                break;
            case '2':
                _key=2;
                input2 = input2* 10 +_key;
                break;
            case '3':
                _key=3;
                input2 = input2* 10 +_key;
                break;
            case '4':
                _key=4;
                input2 = input2* 10 +_key;
                break;
            case '5':
                _key=5;
                input2 = input2* 10 +_key;
                break;
            case '6':
                _key=6;
                input2 = input2* 10 +_key;
                break;
            case '7':
                _key=7;
                input2 = input2* 10 +_key;
                break;
            case '8':
                _key=8;
                input2 = input2* 10 +_key;
                break;
            case '9':
                _key=9;
                input2 = input2* 10 +_key;
                break;
            case '0':
                _key=0;
                input2 = input2* 10 +_key;
                break;
            case'q':
                enzan2 = "=";
                break;
            default:
                break;
                
        }

    }else{
        switch(key){
            case '1':
                _key2=1;
                input = input* 10 +_key2;
                break;
            case '2':
                _key2=2;
                input = input* 10 +_key2;
                break;
            case '3':
                _key2=3;
                input = input* 10 +_key2;
                break;
            case '4':
                _key2=4;
                input = input* 10 +_key2;
                break;
            case '5':
                _key2=5;
                input = input* 10 +_key2;
                break;
            case '6':
                _key2=6;
                input = input* 10 +_key2;
                break;
            case '7':
                _key2=7;
                input = input* 10 +_key2;
                break;
            case '8':
                _key2=8;
                input = input* 10 +_key2;
                break;
            case '9':
                _key2=9;
                input = input* 10 +_key2;
                break;
            case '0':
                _key2=0;
                input = input* 10 +_key2;
                break;
            case 'a':
                enzan = "+";
                break;
            case 's':
                enzan = "-";
                break;
            case 'z':
                enzan = "*";
                break;
            case 'x':
                enzan = "/";
                break;
            default:
                break;
                
        }

    }
   
    suji = ofToString(input);
    suji2 = ofToString(input2 );
    keka2 = ofToString(keka);
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
