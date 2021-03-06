//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "NamedEvent.h"

@class NSNumber;

@interface SCAProfileMyContactsPageExit : SCAUserTrackedEvent <NamedEvent>
{
    NSNumber *contactFoundCount;
    NSNumber *contactFoundCountWithDisplayPic;
    NSNumber *nonSnapchatterCount;
    NSNumber *friendAddCount;
    NSNumber *friendAddCountWithDisplayPic;
    NSNumber *snapchatterAddInSearchCount;
    NSNumber *contactInviteCount;
    NSNumber *nonSnapchatterInviteInSearchCount;
    long long destination;
    long long destinationPage;
    long long verificationType;
}

+ (id)copy:(id)arg1;
+ (id)create;
- (void).cxx_destruct;
- (id)asDictionary;
- (long long)getVerificationType;
- (void)setVerificationType:(long long)arg1;
- (long long)getDestinationPage;
- (void)setDestinationPage:(long long)arg1;
- (long long)getDestination;
- (void)setDestination:(long long)arg1;
- (long long)getNonSnapchatterInviteInSearchCount;
- (void)setNonSnapchatterInviteInSearchCount:(long long)arg1;
- (long long)getContactInviteCount;
- (void)setContactInviteCount:(long long)arg1;
- (long long)getSnapchatterAddInSearchCount;
- (void)setSnapchatterAddInSearchCount:(long long)arg1;
- (long long)getFriendAddCountWithDisplayPic;
- (void)setFriendAddCountWithDisplayPic:(long long)arg1;
- (long long)getFriendAddCount;
- (void)setFriendAddCount:(long long)arg1;
- (long long)getNonSnapchatterCount;
- (void)setNonSnapchatterCount:(long long)arg1;
- (long long)getContactFoundCountWithDisplayPic;
- (void)setContactFoundCountWithDisplayPic:(long long)arg1;
- (long long)getContactFoundCount;
- (void)setContactFoundCount:(long long)arg1;
- (id)getEventName;
- (id)init;

@end

