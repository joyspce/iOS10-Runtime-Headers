/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKTextViewWithLabelTextMetrics : UITextView <CalendarLabelTextMetrics> {
    int  lineBreakMode;
}

@property (nonatomic, retain) UIFont *font;
@property (nonatomic) int lineBreakMode;
@property (nonatomic) int numberOfLines;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) int textAlignment;
@property (nonatomic, retain) UIColor *textColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)lineBreakMode;
- (int)numberOfLines;
- (void)setLineBreakMode:(int)arg1;
- (void)setNumberOfLines:(int)arg1;
- (void)setURL:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 limitedToNumberOfLines:(int)arg2;

@end