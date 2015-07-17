/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNRecordingPauseEvent : KNRecordingEvent {
    int  mPauseEventType;
}

@property (nonatomic, readonly) int pauseEventType;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)hash;
- (id)initWithContext:(id)arg1 archive:(const struct RecordingEventArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; struct RecordingNavigationEventArchive {} *x6; struct RecordingLaserEventArchive {} *x7; struct RecordingPauseEventArchive {} *x8; struct RecordingMovieEventArchive {} *x9; }*)arg2 unarchiver:(id)arg3;
- (id)initWithStartTime:(double)arg1;
- (id)initWithStartTime:(double)arg1 pauseEventType:(int)arg2;
- (BOOL)isEqual:(id)arg1;
- (int)pauseEventType;
- (void)saveToArchive:(struct RecordingEventArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; struct RecordingNavigationEventArchive {} *x6; struct RecordingLaserEventArchive {} *x7; struct RecordingPauseEventArchive {} *x8; struct RecordingMovieEventArchive {} *x9; }*)arg1 archiver:(id)arg2;

@end