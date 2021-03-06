//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BCOVPlaybackSessionPrivate.h"

@class AVMediaSelectionGroup, AVMediaSelectionOption, AVPlayer, AVPlayerLayer, BCOVPlaybackSessionLifecycleEvent, BCOVSessionProviderExtension, BCOVSource, BCOVVideo, NSString, UIView;

@interface BCOVErrorSession : NSObject <BCOVPlaybackSessionPrivate>
{
    id <BCOVPlaybackSessionPrivate> _innerPlaybackSession;
    BCOVPlaybackSessionLifecycleEvent *_errorEvent;
}

@property(retain, nonatomic) BCOVPlaybackSessionLifecycleEvent *errorEvent; // @synthesize errorEvent=_errorEvent;
@property(retain, nonatomic) id <BCOVPlaybackSessionPrivate> innerPlaybackSession; // @synthesize innerPlaybackSession=_innerPlaybackSession;
- (void).cxx_destruct;
- (id)lifecycle;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)initWithPlaybackSession:(id)arg1 errorEvent:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) _Bool attemptedToLoadURL; // @dynamic attemptedToLoadURL;
@property(readonly, nonatomic) AVMediaSelectionGroup *audibleMediaSelectionGroup; // @dynamic audibleMediaSelectionGroup;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) AVMediaSelectionGroup *legibleMediaSelectionGroup; // @dynamic legibleMediaSelectionGroup;
@property(readonly, nonatomic) AVPlayer *player; // @dynamic player;
@property(readonly, nonatomic) AVPlayerLayer *playerLayer; // @dynamic playerLayer;
@property(readonly, nonatomic) UIView *playerLayerView; // @dynamic playerLayerView;
@property(readonly, nonatomic) BCOVSessionProviderExtension *providerExtension; // @dynamic providerExtension;
@property(retain, nonatomic) AVMediaSelectionOption *selectedAudibleMediaOption; // @dynamic selectedAudibleMediaOption;
@property(retain, nonatomic) AVMediaSelectionOption *selectedLegibleMediaOption; // @dynamic selectedLegibleMediaOption;
@property(readonly, copy, nonatomic) BCOVSource *source; // @dynamic source;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) BCOVVideo *video; // @dynamic video;

@end

