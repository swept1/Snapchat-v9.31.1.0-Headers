//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCAudioSessionListener.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer, NSString, SCChatVideoNoteMediaMessage;

@interface SCChatVideoNotePlayer : NSObject <SCAudioSessionListener>
{
    id <SCChatVideoNotePlayerDelegate> _delegate;
    SCChatVideoNoteMediaMessage *_message;
    NSString *_audioSessionToken;
    unsigned long long _state;
    AVPlayerLayer *_videoPlayerLayer;
    AVPlayer *_videoPlayer;
    AVPlayerItem *_videoPlayerItem;
}

+ (id)sharedInstance;
@property(retain, nonatomic) AVPlayerItem *videoPlayerItem; // @synthesize videoPlayerItem=_videoPlayerItem;
@property(retain, nonatomic) AVPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) AVPlayerLayer *videoPlayerLayer; // @synthesize videoPlayerLayer=_videoPlayerLayer;
- (void).cxx_destruct;
- (void)audioSessionRouteDidChangeReasonOldDeviceUnavailable:(id)arg1;
- (void)audioSessionRouteDidChangeReasonNewDeviceAvailable:(id)arg1;
- (void)audioSessionDidEndInterruption:(id)arg1;
- (void)audioSessionDidBeginInterruption:(id)arg1;
- (void)proximityChanged;
- (void)removeProximitySensorObserver;
- (void)addProximitySensorObserverWithCallback:(CDUnknownBlockType)arg1;
- (id)getVideoNotePlayerLayer;
- (_Bool)isCurrentPlayingMessage:(id)arg1;
- (_Bool)isStopped;
- (_Bool)isPlaying;
- (void)videoPlayerDidFinishPlaying:(id)arg1;
- (double)getCurrentPlaybackTime;
- (void)reset;
- (void)stop;
- (void)play;
- (void)cleanup;
- (void)fadeVolumeWithDuration:(id)arg1;
- (void)playOrStopVideoNote:(id)arg1 withDelegate:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

