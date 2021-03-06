//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface SCChatNotePreviewRoundContainer : UIView
{
    unsigned long long _type;
    struct CGPoint _bubbleCenter;
    double _waveformValues[14];
}

- (void)setWaveformValues:(double *)arg1;
- (double)toDeviceLength:(double)arg1 percentageOfScreen:(double)arg2;
- (void)_drawAudioNoteWaveformFrameWithValues:(double *)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateView;
- (void)layoutSubviews;
- (id)initForPreviewType:(unsigned long long)arg1;

@end

