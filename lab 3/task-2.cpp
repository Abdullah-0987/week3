#include<iostream>
using namespace std;
main() {
	cout<< " Number of Minutes: ";
	int minutes;
	cin>>minutes;
	cout<< " Frames per Second: ";
	int second;
	cin>>second;
	int frames;
	frames=minutes*60*second;
	cout<< " Total Number of Frames: "<<frames;}