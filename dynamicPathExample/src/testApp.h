#pragma once

#include "ofMain.h"
#include "ofxShivaVGRenderer.h"

class testApp : public ofBaseApp
{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
	private:
	    ofPoint _center;
	    vector<ofPath> _paths;
	    ofPoint _prevPoint;
	    bool _useShiva;
	    ofPtr<ofBaseRenderer> _defaultRenderer;
	    ofPtr<ofxShivaVGRenderer> _shivaRenderer;
    
	    void _addNewPath();
    	ofPoint _calculateNextPoint();
};