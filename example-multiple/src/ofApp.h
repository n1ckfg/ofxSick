#pragma once

#include "ofMain.h"
#include "ofxSick.h"


class ofApp : public ofBaseApp {

	public:
		void setup();
		void update();
		void draw();
		
		vector<ofPtr<ofxSickGrabber> > sick;
	
};