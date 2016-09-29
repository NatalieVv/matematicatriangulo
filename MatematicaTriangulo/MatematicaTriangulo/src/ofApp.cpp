#include "ofApp.h"
#include "time.h"
#include <Vector2D.h>

using namespace math;

//--------------------------------------------------------------
void ofApp::setup() {
	srand(time(NULL));
}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
	ofSetColor(ofColor::cadetBlue);
	
	Vector2D points[3] = { Vector2D(400, 0), Vector2D(0,600), Vector2D(800,600) };

	Vector2D lastPoint = points[0];

	for (int i = 0; i < 100000; i++)
	{
		int n = rand() % 3;
		Vector2D randPoint = points[n];
		Vector2D midPoint = (randPoint + lastPoint) / 2;
		ofDrawCircle(midPoint.x, midPoint.y, 1);
		lastPoint = midPoint;
	}

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}