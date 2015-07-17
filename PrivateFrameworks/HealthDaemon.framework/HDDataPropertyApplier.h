/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataPropertyApplier : NSObject {
    id /* block */  _authorizationFilter;
    HDSQLiteDatabase * _database;
    NSMutableDictionary * _deviceByPersistentIDCache;
    NSNumber * _deviceID;
    HDMetadataValueStatement * _metadataValueStatement;
    NSArray * _orderedProperties;
    NSArray * _orderedSetters;
    NSDictionary * _propertySetters;
    NSMutableDictionary * _sourceByPersistentIDCache;
    NSNumber * _sourceID;
    NSMutableDictionary * _sourceRevisionsDictionaryBySourceCache;
    NSString * _sourceVersion;
}

@property (nonatomic, readonly, copy) id /* block */ authorizationFilter;
@property (nonatomic, readonly) HDSQLiteDatabase *database;
@property (nonatomic, retain) NSMutableDictionary *deviceByPersistentIDCache;
@property (nonatomic, retain) HDMetadataValueStatement *metadataValueStatement;
@property (nonatomic, readonly, copy) NSArray *orderedProperties;
@property (nonatomic, readonly, copy) NSArray *orderedSetters;
@property (nonatomic, readonly, copy) NSDictionary *propertySetters;
@property (nonatomic, retain) NSMutableDictionary *sourceByPersistentIDCache;
@property (nonatomic, retain) NSMutableDictionary *sourceRevisionsDictionaryBySourceCache;

- (void).cxx_destruct;
- (id)_deviceForPersistentID:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3;
- (id)_sourceForPersistentID:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3;
- (id)_sourceRevisionForPersistentID:(id)arg1 sourceVersion:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4;
- (void)applyPropertiesToObject:(id)arg1 entity:(id)arg2 row:(struct HDSQLiteRow { }*)arg3 healthDaemon:(id)arg4;
- (id /* block */)authorizationFilter;
- (id)database;
- (id)deviceByPersistentIDCache;
- (void)finish;
- (id)initWithPropertyOrder:(id)arg1 propertySetters:(id)arg2 authorizationFilter:(id /* block */)arg3 database:(id)arg4;
- (id)metadataValueStatement;
- (id)orderedProperties;
- (id)orderedSetters;
- (id)propertySetters;
- (void)setDeviceByPersistentIDCache:(id)arg1;
- (void)setMetadataValueStatement:(id)arg1;
- (void)setSourceByPersistentIDCache:(id)arg1;
- (void)setSourceRevisionsDictionaryBySourceCache:(id)arg1;
- (id)sourceByPersistentIDCache;
- (id)sourceRevisionsDictionaryBySourceCache;

@end