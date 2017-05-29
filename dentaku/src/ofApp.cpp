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
    ofTrueTypeFont myfont;
    myfont.load("Arial.ttf",60);
    myfont.drawString(suji,20,60);
    myfont.drawString(enzan,20,120);
    if(ope == true){
        myfont.drawString(suji2,20,180);
    }
    myfont.drawString(enzan2,20,250);
    if(equalFlag == true){
        if(enzan == "+"){
            keka = input + input2;
        }else if(enzan == "-"){
            keka = input -input2;
        }else if(enzan == "×"){
            keka = input * input2;
        }else{
            keka = input / input2;
        }
        keka2 = ofToString(keka);
        myfont.drawString(keka2,20,330);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if(opeFlag == true){
        switch(key){
            case '1':
                ope = true;
                _key=1;
                input2 = input2* 10 +_key;
                break;
            case '2':
                ope = true;
                _key=2;
                input2 = input2* 10 +_key;
                break;
            case '3':
                ope = true;
                _key=3;
                input2 = input2* 10 +_key;
                break;
            case '4':
                ope = true;
                _key=4;
                input2 = input2* 10 +_key;
                break;
            case '5':
                ope = true;
                _key=5;
                input2 = input2* 10 +_key;
                break;
            case '6':
                ope = true;
                _key=6;
                input2 = input2* 10 +_key;
                break;
            case '7':
                ope = true;
                _key=7;
                input2 = input2* 10 +_key;
                break;
            case '8':
                ope = true;
                _key=8;
                input2 = input2* 10 +_key;
                break;
            case '9':
                ope = true;
                _key=9;
                input2 = input2* 10 +_key;
                break;
            case '0':
                ope = true;
                _key=0;
                input2 = input2* 10 +_key;
                break;
            case'q':
                //_key = 'q';
                equalFlag = true;
                enzan2 = "||";
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
                opeFlag = true;
                break;
            case 's':
                enzan = "-";
                opeFlag = true;
                break;
            case 'z':
                enzan = "×";
                opeFlag = true;
                break;
            case 'x':
                enzan = "÷";
                opeFlag = true;
                break;
            default:
                break;
                
        }
        
        
        
    }
    
    suji = ofToString(input);
    suji2 = ofToString(input2);
   
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
