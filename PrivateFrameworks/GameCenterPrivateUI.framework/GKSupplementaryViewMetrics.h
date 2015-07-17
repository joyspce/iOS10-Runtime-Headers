/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKSupplementaryViewMetrics : NSObject <NSCopying> {
    int  _animateWithSection;
    SEL  _configurator;
    float  _desiredHeight;
    float  _desiredWidth;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _globalSectionRange;
    BOOL  _hidden;
    NSString * _kind;
    Class  _reusableViewClass;
    BOOL  _shouldPin;
    BOOL  _shouldPinGlobal;
    BOOL  _shouldUseGlobalIndexing;
    id  _target;
}

@property (nonatomic) int animateWithSection;
@property (nonatomic) SEL configurator;
@property (nonatomic) float desiredHeight;
@property (nonatomic) float desiredWidth;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } globalSectionRange;
@property (getter=isHidden, nonatomic) BOOL hidden;
@property (nonatomic, retain) NSString *kind;
@property (nonatomic) Class reusableViewClass;
@property (nonatomic) BOOL shouldPin;
@property (nonatomic) BOOL shouldPinGlobal;
@property (nonatomic) BOOL shouldUseGlobalIndexing;
@property (nonatomic) id target;

+ (id)supplementaryMetrics;

- (int)animateWithSection;
- (SEL)configurator;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (float)desiredHeight;
- (float)desiredWidth;
- (struct _NSRange { unsigned int x1; unsigned int x2; })globalSectionRange;
- (id)init;
- (BOOL)isHidden;
- (id)kind;
- (id)localDescription;
- (Class)reusableViewClass;
- (void)setAnimateWithSection:(int)arg1;
- (void)setConfigurator:(SEL)arg1;
- (void)setDesiredHeight:(float)arg1;
- (void)setDesiredWidth:(float)arg1;
- (void)setGlobalSectionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setKind:(id)arg1;
- (void)setReusableViewClass:(Class)arg1;
- (void)setShouldPin:(BOOL)arg1;
- (void)setShouldPinGlobal:(BOOL)arg1;
- (void)setShouldUseGlobalIndexing:(BOOL)arg1;
- (void)setTarget:(id)arg1;
- (BOOL)shouldPin;
- (BOOL)shouldPinGlobal;
- (BOOL)shouldUseGlobalIndexing;
- (struct CGSize { float x1; float x2; })sizeForCollectionView:(id)arg1;
- (id)target;

@end