//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "NamedEvent.h"

@class NSNumber, NSString;

@interface SCADiscoverSnapShareCreate : SCAUserTrackedEvent <NamedEvent>
{
    NSNumber *snapIndexCount;
    NSNumber *snapIndexPos;
    NSNumber *timeViewed;
    long long mediaType;
    long long source;
    NSString *editionId;
    NSString *publisherId;
    NSString *dsnapId;
}

+ (id)copy:(id)arg1;
+ (id)create;
- (void).cxx_destruct;
- (id)asDictionary;
- (id)getDsnapId;
- (void)setDsnapId:(id)arg1;
- (id)getPublisherId;
- (void)setPublisherId:(id)arg1;
- (id)getEditionId;
- (void)setEditionId:(id)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getMediaType;
- (void)setMediaType:(long long)arg1;
- (double)getTimeViewed;
- (void)setTimeViewed:(double)arg1;
- (long long)getSnapIndexPos;
- (void)setSnapIndexPos:(long long)arg1;
- (long long)getSnapIndexCount;
- (void)setSnapIndexCount:(long long)arg1;
- (id)getEventName;
- (id)init;

@end

