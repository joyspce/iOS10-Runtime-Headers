/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPSubscriptionNotificationAlert, NSMutableArray;

@interface CKDPSubscriptionNotification : PBCodable <NSCopying> {
    NSMutableArray *_additionalFields;
    CKDPSubscriptionNotificationAlert *_alert;
    bool_shouldBadge;
    struct { 
        unsigned int shouldBadge : 1; 
    } _has;
}

@property(readonly) bool hasAlert;
@property(retain) CKDPSubscriptionNotificationAlert * alert;
@property bool hasShouldBadge;
@property bool shouldBadge;
@property(retain) NSMutableArray * additionalFields;


- (bool)hasShouldBadge;
- (void)setHasShouldBadge:(bool)arg1;
- (id)additionalFieldsAtIndex:(unsigned long long)arg1;
- (void)clearAdditionalFields;
- (unsigned long long)additionalFieldsCount;
- (void)addAdditionalFields:(id)arg1;
- (void)setAlert:(id)arg1;
- (void)setAdditionalFields:(id)arg1;
- (id)additionalFields;
- (id)alert;
- (bool)hasAlert;
- (void)copyTo:(id)arg1;
- (void)setShouldBadge:(bool)arg1;
- (bool)shouldBadge;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end