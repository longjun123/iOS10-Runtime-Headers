/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class UIColor, NSArray;

@interface GKGroupedSegmentBrush : GKThemeBrush <GKBrushIdentification> {
    UIColor *_shadowColor;
    float _shadowWidth;
    float _borderWidth;
    int _outerEdges;
    int _roundedCorners;
    float _outerCurveRadius;
    NSArray *_segmentBrushes;
    float _occupiedWidth;
    unsigned int _relativeSizedBrushCount;
}

@property(retain) UIColor * shadowColor;
@property float shadowWidth;
@property float borderWidth;
@property int outerEdges;
@property int roundedCorners;
@property float outerCurveRadius;
@property(retain) NSArray * segmentBrushes;
@property float occupiedWidth;
@property unsigned int relativeSizedBrushCount;

+ (id)groupedSegmentBrushWithSegmentBrushes:(id)arg1;

- (float)shadowWidth;
- (void)setShadowWidth:(float)arg1;
- (id)segmentBrushes;
- (void)setOuterCurveRadius:(float)arg1;
- (float)outerCurveRadius;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })partitionRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forBrushAtIndex:(unsigned int)arg2 input:(id)arg3 offset:(struct CGPoint { float x1; float x2; })arg4;
- (struct CGPath { }*)outerShadowPathForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 input:(id)arg2;
- (void)setRelativeSizedBrushCount:(unsigned int)arg1;
- (unsigned int)relativeSizedBrushCount;
- (void)setOccupiedWidth:(float)arg1;
- (float)occupiedWidth;
- (void)setSegmentBrushes:(id)arg1;
- (void)setRoundedCorners:(int)arg1;
- (int)roundedCorners;
- (void)setOuterEdges:(int)arg1;
- (int)outerEdges;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;
- (id)renderedImageIdentifier;
- (void)setShadowColor:(id)arg1;
- (void)setBorderWidth:(float)arg1;
- (float)borderWidth;
- (id)shadowColor;
- (void)dealloc;

@end