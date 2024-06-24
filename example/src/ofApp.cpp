#include "ofApp.h"

void ofApp::setup() {
	ofSetVerticalSync(true);
	ofSetFrameRate(120);
	ofSetCircleResolution(64);
	ofSetLogLevel(OF_LOG_VERBOSE);
	sick.setup();
}

void ofApp::update() {
	sick.update();
	if (sick.isFrameNew()) {
	}
}

void ofApp::draw() {
	ofBackground(0);
	
	float scale = ofMap(mouseX, 0, ofGetWidth(), 0.05, 2, true);	
	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
	
	ofPushMatrix();
	ofScale(scale, scale);
	ofSetColor(ofColor::white);
	sick.draw();
	ofPopMatrix();
}

void ofApp::keyPressed(int key) {
	if (key == 's') {
		//sick.save();
	}
}
