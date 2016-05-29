//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CADisplayLink, SCChatNotePreviewRoundContainer;

@interface SCChatNotePreviewAnimationView : UIView
{
    id <SCChatNotePreviewAnimationViewDelegate> _delegate;
    SCChatNotePreviewRoundContainer *_roundContainer;
    CADisplayLink *_displayLink;
    double _elapsedTime;
    double _maxRecordingDuration;
    _Bool _isAudioNoteAnimation;
    _Bool _isVideoNoteAnimation;
    _Bool _startTimeout;
}

- (void).cxx_destruct;
- (void)_drawChatNoteProgressCircle;
- (void)drawRect:(struct CGRect)arg1;
- (void)cleanUp;
- (void)stopAnimating;
- (void)startAnimating;
- (void)startAnimatingForVideoNote;
- (void)startAnimatingForAudioNote;
- (void)startNoteTimeout;
- (void)displayDidRefresh:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 roundContainer:(id)arg2;

@end
