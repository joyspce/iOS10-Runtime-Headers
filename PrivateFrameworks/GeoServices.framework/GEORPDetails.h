/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPDetails : PBCodable <NSCopying> {
    GEOMapRegion * _displayRegion;
    int  _displayStyle;
    struct { 
        unsigned int displayStyle : 1; 
    }  _has;
    GEORPUpdatedLabel * _label;
    NSString * _localizedDescription;
    NSString * _localizedTitle;
    GEOPDPlace * _place;
}

@property (nonatomic, retain) GEOMapRegion *displayRegion;
@property (nonatomic) int displayStyle;
@property (nonatomic, readonly) BOOL hasDisplayRegion;
@property (nonatomic) BOOL hasDisplayStyle;
@property (nonatomic, readonly) BOOL hasLabel;
@property (nonatomic, readonly) BOOL hasLocalizedDescription;
@property (nonatomic, readonly) BOOL hasLocalizedTitle;
@property (nonatomic, readonly) BOOL hasPlace;
@property (nonatomic, retain) GEORPUpdatedLabel *label;
@property (nonatomic, retain) NSString *localizedDescription;
@property (nonatomic, retain) NSString *localizedTitle;
@property (nonatomic, retain) GEOPDPlace *place;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayRegion;
- (int)displayStyle;
- (BOOL)hasDisplayRegion;
- (BOOL)hasDisplayStyle;
- (BOOL)hasLabel;
- (BOOL)hasLocalizedDescription;
- (BOOL)hasLocalizedTitle;
- (BOOL)hasPlace;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)label;
- (id)localizedDescription;
- (id)localizedTitle;
- (void)mergeFrom:(id)arg1;
- (id)place;
- (BOOL)readFrom:(id)arg1;
- (void)setDisplayRegion:(id)arg1;
- (void)setDisplayStyle:(int)arg1;
- (void)setHasDisplayStyle:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setPlace:(id)arg1;
- (void)writeTo:(id)arg1;

@end