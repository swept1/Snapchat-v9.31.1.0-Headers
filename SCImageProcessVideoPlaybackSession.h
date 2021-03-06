//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, AVMutableComposition, AVMutableCompositionTrack, AVPlayer, AVPlayerItemVideoOutput, CADisplayLink, FBKVOController, NSArray, NSObject<OS_dispatch_semaphore>, SCImageProcessPlaybackRenderer, SCImageProcessQueue, SCImageProcessVideoPlaybackSessionListenerAnnouncer;

@interface SCImageProcessVideoPlaybackSession : NSObject
{
    SCImageProcessQueue *_queue;
    long long _orientation;
    NSArray *_intermediateCommands;
    NSArray *_outputCommands;
    SCImageProcessPlaybackRenderer *_renderer;
    CADisplayLink *_displayLink;
    NSObject<OS_dispatch_semaphore> *_frameRenderSemaphore;
    AVPlayerItemVideoOutput *_videoOutput;
    AVPlayer *_player;
    AVAsset *_asset;
    AVPlayer *_reverseAudioPlayer;
    FBKVOController *_KVOController;
    int _displayLinkCountDown;
    int _displayLinkFrameInterval;
    float _offset;
    float _volume;
    float _playerItemTimeScale;
    _Bool _paused;
    _Bool _wantToPlay;
    _Bool _playedToEndTime;
    _Bool _isOffsetLandscape;
    _Bool _reversePlaybackEnabled;
    _Bool _needToSeek;
    double _playerRate;
    AVMutableComposition *_assetComposition;
    AVMutableCompositionTrack *_assetVideoTrack;
    AVMutableCompositionTrack *_assetAudioTrack;
    SCImageProcessVideoPlaybackSessionListenerAnnouncer *_announcer;
    _Bool _shouldUseStabilization;
    _Bool _firstTime;
    long long _frameCounter;
    _Bool _initialDisplay;
    _Bool _shouldLoop;
}

@property(nonatomic) _Bool shouldLoop; // @synthesize shouldLoop=_shouldLoop;
@property(nonatomic) float volume; // @synthesize volume=_volume;
- (void).cxx_destruct;
- (void)displayLinkCallback:(id)arg1;
- (void)playerItemDidPlayToEndTime:(id)arg1;
- (void)seekVideoAndAudioToBeginning;
- (void)_startRunningWithSeekToStartFirst:(_Bool)arg1;
- (void)_pause;
- (void)_play;
- (void)setPlayerItemTimeScale:(double)arg1;
- (void)setReversePlaybackEnabled:(_Bool)arg1 reverseAudioPlayer:(id)arg2;
- (void)stopRunning;
- (void)resumeRunning;
- (void)pauseRunning;
- (void)startRunningFromBeginning;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)setPlayerRate:(double)arg1;
- (void)setOffset:(float)arg1;
- (void)setIsOffsetLandscape:(_Bool)arg1;
- (void)setOutputCommands:(id)arg1;
@property(readonly, nonatomic) _Bool isReversePlaying;
- (void)dealloc;
- (void)_resetPlayerItem:(id)arg1;
- (void)prepareToPlay;
- (void)_setupAssetCompositionTracks;
- (id)initWithQueue:(id)arg1 player:(id)arg2 asset:(id)arg3 layer:(id)arg4 orientation:(long long)arg5 intermediateCommands:(id)arg6 outputCommands:(id)arg7;

@end

