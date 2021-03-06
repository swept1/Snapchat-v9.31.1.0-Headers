//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSAttributedString, UIButton, UILabel, UIProgressView;

@interface SCProgressOverlayView : UIView
{
    UILabel *_label;
    UIView *_footerView;
    UIButton *_cancelButton;
    UIProgressView *_progressView;
    _Bool _cancellable;
    id <SCProgressOverlayViewDelegate> _delegate;
}

@property(nonatomic) _Bool cancellable; // @synthesize cancellable=_cancellable;
@property(nonatomic) __weak id <SCProgressOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didPressCancelButton;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
@property(nonatomic) float progress;
@property(copy, nonatomic) NSAttributedString *attributedText;
- (id)initWithFrame:(struct CGRect)arg1;

@end

