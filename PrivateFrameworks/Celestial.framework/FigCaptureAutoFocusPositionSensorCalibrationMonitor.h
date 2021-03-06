/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureAutoFocusPositionSensorCalibrationMonitor : NSObject {
    int  _apsCalibrationSpinLock;
    NSDictionary * _calibrationData;
    bool  _calibrationShouldAbort;
    struct { 
        double x; 
        double y; 
        double z; 
    }  _coreMotionMagneticField;
    double  _coreMotionMagneticFieldMagnitude;
    NSMutableDictionary * _deviceTypesToNames;
    int  _magneticFieldAttempt;
    struct { 
        int attemptCount; 
        double threshold; 
    }  _magneticFieldMagnitudeTiers;
    NSObject<OS_dispatch_queue> * _notifyQueue;
}

+ (id)calibrationData;
+ (id)initializeCalibrationInstance;

- (void)_aggdLogging:(id)arg1;
- (id)_calibrationData;
- (bool)_calibrationShouldAbort;
- (id)_createAPSCalibrationDictionaryWithError:(int*)arg1 didFirmwareHaveCalibrationError:(bool*)arg2;
- (id)_createFailedOutsideFirmwareDictionaryWithReasons:(int)arg1;
- (double)_getMagneticThresholdFromAttempt;
- (void)_logAndSaveCalibrationData:(id)arg1 isValidCalibrationData:(bool)arg2;
- (void)_notifyOfGyroCalAbort;
- (void)_printDebugAPSCalibrationData:(id)arg1;
- (void)_setCalibrationData:(id)arg1;
- (void)_setCalibrationShouldAbort:(bool)arg1;
- (void)_startAPSCalibrationAndLog;
- (void)_writeCalibrationDataToInternalLogFile:(id)arg1;
- (id)init;

@end
