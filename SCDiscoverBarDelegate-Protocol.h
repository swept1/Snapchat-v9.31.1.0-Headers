//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCDiscoverBarView, SCDiscoverDSnapExpirationValidator, SCDiscoverMediaMessage;

@protocol SCDiscoverBarDelegate <NSObject>
- (void)handleTapOnBar:(SCDiscoverBarView *)arg1 withMessage:(SCDiscoverMediaMessage *)arg2;
- (SCDiscoverDSnapExpirationValidator *)dSnapValidator;
@end
