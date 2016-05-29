//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "NamedEvent.h"

@class NSNumber;

@interface SCAGallerySessionEnd : SCAUserTrackedEvent <NamedEvent>
{
    NSNumber *viewTimeSec;
    NSNumber *snapSendCount;
    NSNumber *snapCreateCount;
    NSNumber *snapLockCount;
    NSNumber *snapUnlockCount;
    NSNumber *snapDeleteCount;
    NSNumber *storyPostCount;
    NSNumber *storyCreateCount;
    NSNumber *storyLockCount;
    NSNumber *storyUnlockCount;
    NSNumber *storyDeleteCount;
    NSNumber *gallerySearchCount;
    NSNumber *flashbackCount;
    NSNumber *nearbyCount;
}

+ (id)copy:(id)arg1;
+ (id)create;
- (void).cxx_destruct;
- (id)asDictionary;
- (long long)getNearbyCount;
- (void)setNearbyCount:(long long)arg1;
- (long long)getFlashbackCount;
- (void)setFlashbackCount:(long long)arg1;
- (long long)getGallerySearchCount;
- (void)setGallerySearchCount:(long long)arg1;
- (long long)getStoryDeleteCount;
- (void)setStoryDeleteCount:(long long)arg1;
- (long long)getStoryUnlockCount;
- (void)setStoryUnlockCount:(long long)arg1;
- (long long)getStoryLockCount;
- (void)setStoryLockCount:(long long)arg1;
- (long long)getStoryCreateCount;
- (void)setStoryCreateCount:(long long)arg1;
- (long long)getStoryPostCount;
- (void)setStoryPostCount:(long long)arg1;
- (long long)getSnapDeleteCount;
- (void)setSnapDeleteCount:(long long)arg1;
- (long long)getSnapUnlockCount;
- (void)setSnapUnlockCount:(long long)arg1;
- (long long)getSnapLockCount;
- (void)setSnapLockCount:(long long)arg1;
- (long long)getSnapCreateCount;
- (void)setSnapCreateCount:(long long)arg1;
- (long long)getSnapSendCount;
- (void)setSnapSendCount:(long long)arg1;
- (double)getViewTimeSec;
- (void)setViewTimeSec:(double)arg1;
- (id)getEventName;
- (id)init;

@end
