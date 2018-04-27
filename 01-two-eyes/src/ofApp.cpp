#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    bgOne = ofColor(0, 0, 255);
    bgTwo = ofFloatColor::mistyRose;
    // try to pass other arguments to the Circle constructor.
    circle = Circle(glm::vec2(200, 400), 40., ofFloatColor::fuchsia);
    ofDisableAlphaBlending(); // What happen if you remove this line? observe
    // carefully the colors of your application.
}

//--------------------------------------------------------------
void ofApp::update(){
    circle.update(2);
}

//--------------------------------------------------------------
void ofApp::draw(){
    /// Try differents background.
    /// - Circular: `OF_GRADIENT_CIRCULAR`
    /// - Linear: `OF_GRADIENT_LINEAR`
    /// - Bar: `OF_GRADIENT_BAR`
    ofBackgroundGradient(bgOne, bgTwo, OF_GRADIENT_LINEAR);

    // Draw Two Circles
    auto x1 = ofGetWidth()/2 - 200;
    auto x2 = ofGetWidth()/2 + 200;
    ofPushStyle();
    ofSetColor(250,200,100);
    ofDrawCircle(glm::vec2(x1, 300), 300.);
    ofPopStyle();

    ofPushStyle();
    ofSetColor(100,50,100);
    ofDrawCircle(glm::vec2(x2, 300), 30.);
    ofPopStyle();

    // Use the Circle class to draw a circle
    circle.draw();
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
