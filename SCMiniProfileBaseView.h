//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIPanGestureRecognizer, UITapGestureRecognizer;

@interface SCMiniProfileBaseView : UIView
{
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    struct CGRect _startPanGestureFrame;
    UIView *_card;
}

@property(retain, nonatomic) UIView *card; // @synthesize card=_card;
- (void).cxx_destruct;
- (void)presentMiniProfileFromBottom;
- (void)_presentMiniProfile;
- (void)_dismissMiniProfileWithDuration:(double)arg1;
- (void)_dismissMiniProfile;
- (void)didPerformPanGesture:(id)arg1;
- (void)didPerformTapGesture:(id)arg1;
- (void)_updateMiniProfileAfterPresentingAnimation;
- (void)_miniProfileDismissAnimationDidFinish;
- (void)_moveMiniProfileBelowBottom;
- (void)_updateCardConstraint;
- (id)initWithFrame:(struct CGRect)arg1;

@end

