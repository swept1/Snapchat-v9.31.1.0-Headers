//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableDictionary.h"

@interface NSMutableDictionary (SCFindFriendsCache)
- (_Bool)hasNumberUpdatedSinceCached:(id)arg1 number:(id)arg2 isHashed:(_Bool)arg3;
- (id)getOldestNumbersWithLimit:(long long)arg1;
- (id)getExpiredCache:(double)arg1;
- (id)calculateDifferenceFromNumberList:(id)arg1 isHashed:(_Bool)arg2;
- (void)removeCachesForNumberList:(id)arg1 isHashed:(_Bool)arg2;
- (void)updateCachesForNumbers:(id)arg1 numbers:(id)arg2 isHashed:(_Bool)arg3;
- (void)setCacheForNumber:(id)arg1 number:(id)arg2 isHashed:(_Bool)arg3;
@end

