//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTimeProfilable.h"

@class CALayer, CAShapeLayer, NSString, UIImageView, UIPanGestureRecognizer, UIView;

@interface SCPullToDismissEffectHandler : NSObject <SCTimeProfilable>
{
    _Bool _shouldDismissPresentedView;
    _Bool _inFastDismissMode;
    _Bool _showIcon;
    unsigned long long _dismissRegion;
    double _dismissPercentage;
    CAShapeLayer *_maskLayer;
    double _contentWidth;
    UIView *_presentedView;
    UIView *_gestureReceivingView;
    UIView *_overlay;
    id <SCPullToDismissVolumeController> _volumeControllerDelegate;
    UIImageView *_circleIconView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    CALayer *_iconToHideLayer;
    struct CGPoint _initialTouchPoint;
    struct CGPoint _contentOffsetForView;
    struct CGRect _maskRect;
    struct CGRect _circleFrame;
}

+ (long long)context;
+ (id)profiledSelectorNames;
@property(nonatomic) CALayer *iconToHideLayer; // @synthesize iconToHideLayer=_iconToHideLayer;
@property(nonatomic) _Bool showIcon; // @synthesize showIcon=_showIcon;
@property(nonatomic) struct CGPoint contentOffsetForView; // @synthesize contentOffsetForView=_contentOffsetForView;
@property(nonatomic) _Bool inFastDismissMode; // @synthesize inFastDismissMode=_inFastDismissMode;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UIImageView *circleIconView; // @synthesize circleIconView=_circleIconView;
@property(nonatomic) struct CGRect circleFrame; // @synthesize circleFrame=_circleFrame;
@property(nonatomic) __weak id <SCPullToDismissVolumeController> volumeControllerDelegate; // @synthesize volumeControllerDelegate=_volumeControllerDelegate;
@property(nonatomic) struct CGPoint initialTouchPoint; // @synthesize initialTouchPoint=_initialTouchPoint;
@property(retain, nonatomic) UIView *overlay; // @synthesize overlay=_overlay;
@property(retain, nonatomic) UIView *gestureReceivingView; // @synthesize gestureReceivingView=_gestureReceivingView;
@property(retain, nonatomic) UIView *presentedView; // @synthesize presentedView=_presentedView;
@property(nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) double dismissPercentage; // @synthesize dismissPercentage=_dismissPercentage;
@property(nonatomic) unsigned long long dismissRegion; // @synthesize dismissRegion=_dismissRegion;
@property(nonatomic) struct CGRect maskRect; // @synthesize maskRect=_maskRect;
@property(nonatomic) _Bool shouldDismissPresentedView; // @synthesize shouldDismissPresentedView=_shouldDismissPresentedView;
- (void).cxx_destruct;
- (_Bool)isPullToDismissInFastModeWithRecognizer:(id)arg1 inView:(id)arg2;
- (double)rubberBandedTranslate:(double)arg1 withScreenScale:(double)arg2;
- (void)setupMaskWithXOrigin:(double)arg1 withYOigin:(double)arg2 withRadius:(double)arg3;
- (void)cleanupStatusBar;
- (void)updateStatusBar;
- (void)setupPullLeftToDismissEffect;
- (void)setupPullRightToDismissEffect;
- (void)setupPullDownToDismissEffect;
- (void)handleDismissEffectForSwipeDirection:(unsigned long long)arg1;
- (void)didEndPullToDismiss;
- (void)prepareForPullToDismiss;
- (void)updateCircleFrame:(struct CGRect)arg1;
- (void)presentedViewHierarchyDidChange;
- (id)initWithPanGestureRecognizer:(id)arg1 presentedView:(id)arg2 gestureReceivingView:(id)arg3 contentOffsetForView:(struct CGPoint)arg4 initialTouchPoint:(struct CGPoint)arg5 overlay:(id)arg6 volumeController:(id)arg7 finalCircleFrame:(struct CGRect)arg8 circleIcon:(id)arg9 showIcon:(_Bool)arg10 iconToHideLayer:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

