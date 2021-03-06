//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class CALayer, NSString, SCPullToDismissEffectHandler, UIImage, UIPanGestureRecognizer, UIView;

@interface SCPullToDismissPresenter : NSObject <UIGestureRecognizerDelegate>
{
    UIView *_presentedView;
    UIView *_gestureReceivingView;
    UIView *_overlay;
    UIPanGestureRecognizer *_panGestureRecognizer;
    SCPullToDismissEffectHandler *_dismissEffectHandler;
    struct CGRect _circleFrame;
    UIImage *_circleIcon;
    _Bool _showIcon;
    CALayer *_iconToHideLayer;
    unsigned long long _swipeDirection;
    id <SCPullToDismissVolumeController> _volumeController;
    _Bool _hidesStatusBarWhenDismissed;
    id <SCPullToDismissFollowUpAnimationDelegate> _animationDelegate;
    id <SCPullToDismissGestureDelegate> _gestureDelegate;
}

@property(nonatomic) _Bool hidesStatusBarWhenDismissed; // @synthesize hidesStatusBarWhenDismissed=_hidesStatusBarWhenDismissed;
@property(nonatomic) __weak id <SCPullToDismissGestureDelegate> gestureDelegate; // @synthesize gestureDelegate=_gestureDelegate;
@property(nonatomic) __weak id <SCPullToDismissFollowUpAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
- (void).cxx_destruct;
- (void)presentedViewHierarchyDidChange;
- (void)updateIconToDisplay:(id)arg1;
- (void)updateIconToHideLayer:(id)arg1;
- (void)updateFinalCircleFrame:(struct CGRect)arg1;
- (unsigned long long)pullToDismissFinalDismissRegion;
- (struct CGRect)pullToDismissFinalRect;
- (void)finishPullToDismiss;
- (_Bool)isPanning;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_didPan:(id)arg1;
- (void)setupPresentedView:(id)arg1 gestureReceivingView:(id)arg2 volumeController:(id)arg3 finalCircleFrame:(struct CGRect)arg4 circleIcon:(id)arg5 showIcon:(_Bool)arg6 iconToHideLayer:(id)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

