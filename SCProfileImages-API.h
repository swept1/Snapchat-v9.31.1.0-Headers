//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCProfileImages.h"

@interface SCProfileImages (API)
- (_Bool)_isValidUsernameForDownloadingProfileImages:(id)arg1;
- (_Bool)_isValidUserIdForModifyingProfileImages:(id)arg1;
- (void)downloadProfileImages:(id)arg1 size:(id)arg2 inContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteProfileImagesAt:(long long)arg1 forUserId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)uploadProfileImages:(id)arg1 forUserId:(id)arg2 completion:(CDUnknownBlockType)arg3;
@end
