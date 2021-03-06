//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserNotTrackedEvent.h"

#import "NamedEvent.h"

@class NSNumber;

@interface SCAGallerySearchResult : SCAUserNotTrackedEvent <NamedEvent>
{
    NSNumber *isSimilar;
    NSNumber *resultIndex;
    NSNumber *searchTermLength;
    NSNumber *resultTapCount;
    long long resultMatchType;
}

+ (id)copy:(id)arg1;
+ (id)create;
- (void).cxx_destruct;
- (id)asDictionary;
- (long long)getResultMatchType;
- (void)setResultMatchType:(long long)arg1;
- (long long)getResultTapCount;
- (void)setResultTapCount:(long long)arg1;
- (long long)getSearchTermLength;
- (void)setSearchTermLength:(long long)arg1;
- (long long)getResultIndex;
- (void)setResultIndex:(long long)arg1;
- (_Bool)getIsSimilar;
- (void)setIsSimilar:(_Bool)arg1;
- (id)getEventName;
- (id)init;

@end

