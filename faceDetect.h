#ifndef FACEDETECT_H
#define FACEDETECT_H

// Prototypes
int detectFaces(cv::Mat frame); 
void setStep(int w1, int w2, int w3, int w4);
void rotateMotor(int dir, int numTicks, int wait); 
void resetPins(void);
void setPosition(int tickCount);
void setSpeedFactor(void); 
void microStepUp(int coil); 
void microStepDown(int coil);
void createMicrostepPulseIncrements(void);  

#endif
