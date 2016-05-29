//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString, SOJUConversationsResponseInfo, SOJUDiscoverResponse, SOJUFriendsResponse, SOJUIdentityIdentityCheckResponse, SOJUIdentityVerificationNeeded, SOJUMessagingGatewayInfo, SOJUServerInfoResponse, SOJUSponsoredSlug, SOJUStoriesResponse, SOJUSupportToolsSupportToolsResponse, SOJUUpdatesResponse;

@interface SOJULoginResponseBuilder : NSObject
{
    SOJUServerInfoResponse *_serverInfo;
    SOJUMessagingGatewayInfo *_messagingGatewayInfo;
    SOJUUpdatesResponse *_updatesResponse;
    SOJUFriendsResponse *_friendsResponse;
    SOJUStoriesResponse *_storiesResponse;
    NSArray *_conversationsResponse;
    SOJUConversationsResponseInfo *_conversationsResponseInfo;
    SOJUDiscoverResponse *_discover;
    SOJUIdentityIdentityCheckResponse *_identityCheckResponse;
    SOJUSponsoredSlug *_sponsored;
    SOJUSupportToolsSupportToolsResponse *_supportToolsResponse;
    NSString *_message;
    NSNumber *_status;
    NSString *_dtoken1i;
    NSString *_dtoken1v;
    NSNumber *_twoFaNeeded;
    NSString *_username;
    NSString *_messageFormat;
    NSString *_phoneNumber;
    NSString *_preAuthToken;
    NSNumber *_recoveryCodeUsed;
    NSNumber *_isSmsTwoFaEnabled;
    NSNumber *_isOtpTwoFaEnabled;
    SOJUIdentityVerificationNeeded *_verificationNeeded;
    NSString *_latestOutAlpha;
    NSString *_latestBackupOutBeta;
    NSString *_reactivationStatus;
}

+ (id)withJULoginResponse:(id)arg1;
- (void).cxx_destruct;
- (id)setReactivationStatus:(id)arg1;
- (id)setLatestBackupOutBeta:(id)arg1;
- (id)setLatestOutAlpha:(id)arg1;
- (id)setVerificationNeeded:(id)arg1;
- (id)setIsOtpTwoFaEnabled:(id)arg1;
- (id)setIsSmsTwoFaEnabled:(id)arg1;
- (id)setRecoveryCodeUsed:(id)arg1;
- (id)setPreAuthToken:(id)arg1;
- (id)setPhoneNumber:(id)arg1;
- (id)setMessageFormat:(id)arg1;
- (id)setUsername:(id)arg1;
- (id)setTwoFaNeeded:(id)arg1;
- (id)setDtoken1v:(id)arg1;
- (id)setDtoken1i:(id)arg1;
- (id)setStatus:(id)arg1;
- (id)setMessage:(id)arg1;
- (id)setSupportToolsResponse:(id)arg1;
- (id)setSponsored:(id)arg1;
- (id)setIdentityCheckResponse:(id)arg1;
- (id)setDiscover:(id)arg1;
- (id)setConversationsResponseInfo:(id)arg1;
- (id)setConversationsResponse:(id)arg1;
- (id)setStoriesResponse:(id)arg1;
- (id)setFriendsResponse:(id)arg1;
- (id)setUpdatesResponse:(id)arg1;
- (id)setMessagingGatewayInfo:(id)arg1;
- (id)setServerInfo:(id)arg1;
- (id)build;

@end
