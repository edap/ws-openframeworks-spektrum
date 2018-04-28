#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    palette.insert(make_pair(1, ofColor(255,0,0)));
    palette.insert(make_pair(2, ofColor(255,100,0)));
    palette.insert(make_pair(3, ofColor(200,0,60)));
    palette.insert(make_pair(4, ofColor(50,100,255)));

    for (int i = 0; i<400; i++) {
        auto randKey = ofRandom(0,3);
        auto color = palette[randKey];

        auto randomPos = glm::vec2(ofRandom(0, ofGetWidth()), ofRandom(0, ofGetHeight()));
        auto randomRadius = 10;
        auto c = Circle(randomPos, randomRadius, color);

        circles.push_back(c);

    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    for (auto c:circles) {
        c.draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
