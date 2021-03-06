//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CADisplayLink, SCChatAudioNoteMediaMessage;

@interface SCAudioNoteView : UIView
{
    CADisplayLink *_displayLink;
    double _elapsedTime;
    SCChatAudioNoteMediaMessage *_message;
    unsigned long long _status;
    struct CGPoint _bubbleCenter;
    _Bool _isSender;
}

+ (double)toDeviceLength:(double)arg1 percentageOfScreen:(double)arg2;
+ (id)borderColor;
+ (long long)_waveformStartIndex;
+ (_Bool)_isPlayButtonBarWithIndex:(long long)arg1;
@property(nonatomic) _Bool isSender; // @synthesize isSender=_isSender;
- (void).cxx_destruct;
- (id)progressCircleColor;
- (id)waveformColor;
- (void)_drawAudioNoteProgressCircle;
- (void)_drawActiveStateAudioNoteWaveformFrameWithValues:(double *)arg1 isActiveState:(_Bool)arg2;
- (void)_getInactiveStateWaveformFrameValues:(double *)arg1;
- (void)_drawAudioNoteAnimationForAudioNotePlayerStatusStopped;
- (void)_drawAudioNoteAnimationForAudioNotePlayerStatusPaused;
- (void)_drawAudioNoteAnimationForAudioNotePlayerStatusPlaying;
- (void)clearContents;
- (void)stopAnimating;
- (void)startAnimating;
- (_Bool)isAnimating;
- (void)drawRect:(struct CGRect)arg1;
- (void)displayDidRefresh:(id)arg1;
- (void)setAudioNoteViewStatus:(unsigned long long)arg1 withElapsedTime:(double)arg2;
- (void)setMessage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

