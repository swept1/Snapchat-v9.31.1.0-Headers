//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVMediaSelectionGroup, AVMediaSelectionOption, AVPlayer, AVPlayerLayer, BCOVSessionProviderExtension, BCOVSource, BCOVVideo, NSString;

@protocol BCOVPlaybackSession <NSObject>
@property(readonly, nonatomic) BCOVSessionProviderExtension *providerExtension;
@property(retain, nonatomic) AVMediaSelectionOption *selectedLegibleMediaOption;
@property(readonly, nonatomic) AVMediaSelectionGroup *legibleMediaSelectionGroup;
@property(retain, nonatomic) AVMediaSelectionOption *selectedAudibleMediaOption;
@property(readonly, nonatomic) AVMediaSelectionGroup *audibleMediaSelectionGroup;
@property(readonly, nonatomic) AVPlayerLayer *playerLayer;
@property(readonly, nonatomic) AVPlayer *player;
@property(readonly, copy, nonatomic) BCOVSource *source;
@property(readonly, copy, nonatomic) BCOVVideo *video;
- (void)terminate;
- (NSString *)displayNameFromLegibleMediaSelectionOption:(AVMediaSelectionOption *)arg1;
- (NSString *)displayNameFromAudibleMediaSelectionOption:(AVMediaSelectionOption *)arg1;
- (void)selectLegibleMediaOptionAutomatically;
- (void)selectAudibleMediaOptionAutomatically;
@end

