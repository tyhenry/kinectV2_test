#pragma once

#include "ofMain.h"
#include "ofxKinectForWindows2.h"


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		int getCentralBodyIdx();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		ofxKFW2::Device kinect;
		bool bStreams;
		ofImage kColImg;
		ICoordinateMapper* coordinateMapper;

		map<JointType, ofVec2f> jts2d; // joints/pos in color img space

		int numTracked = 0; 
		int bodyIdx = -1;
		
		const int colW = 1920;
		const int colH = 1080;
		const int colA = colW * colH;

};
