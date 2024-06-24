#pragma once

#include "ofMain.h"
#include "ofxSick.h"
#include "ofxSickTracker.h"
#include "ofxCv.h"


class ofApp : public ofBaseApp {
	
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		
		ofxSickGrabber grabber;
		ofxSickPlayer player;
		ofxSick* sick;
		bool recording;
		
		ofxSickTracker<ofxSickFollower> tracker;
		ofRectangle trackingRegion;

};