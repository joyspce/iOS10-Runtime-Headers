/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAnchoredObjectQueryServer : HDQueryServer {
    NSMutableArray * _addedSamplesPendingResume;
    HKQueryAnchor * _anchor;
    NSObject<OS_dispatch_queue> * _batchQueue;
    NSMutableArray * _deletedSamplesPendingResume;
    unsigned long long  _deliveredResults;
    bool  _deliversUpdates;
    bool  _includeDeletedObjects;
    bool  _initialResultsSent;
    unsigned long long  _limit;
    bool  _objectsDeleted;
    bool  _shouldResetAnchor;
    HKQueryAnchor * _startAnchor;
    bool  _suspended;
}

@property (nonatomic, readonly) HKQueryAnchor *anchor;
@property (nonatomic, readonly) unsigned long long limit;

- (void).cxx_destruct;
- (id)_maxRowIDInDatabaseWithError:(id*)arg1;
- (void)_queue_samplesWereRemovedWithAnchor:(id)arg1;
- (bool)_queue_shouldAcceptUpdates;
- (bool)_queue_shouldAccumulateUpdates;
- (void)_queue_start;
- (bool)_shouldListenForUpdates;
- (bool)_shouldObserveOnPause;
- (id)anchor;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;
- (unsigned long long)limit;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;

@end
