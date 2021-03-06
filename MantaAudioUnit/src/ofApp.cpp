#include "ofApp.h"



//--------------------------------------------------------------
void ofApp::setup(){
    aalto.setup("Aalto", 'aumu', 'Aalt', 'MLbs');
    kaivo.setup("Kaivo", 'aumu', 'Kaiv', 'MLbs');
    
    aalto.connectTo(mixer, 0);
    kaivo.connectTo(mixer, 1);
    
    mixer.connectTo(output);
    output.start();
    
    manta.registerAudioUnit(aalto);
    manta.registerAudioUnit(kaivo);
    
    manta.setup();
    manta.setupUI();
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    manta.draw(5, 5, 400);
    manta.drawStats(5, 320, 400);
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
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
