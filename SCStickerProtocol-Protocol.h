//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSDictionary, NSString;

@protocol SCStickerProtocol <NSObject, NSCoding, NSCopying>
- (NSDictionary *)loggingParamters;
- (unsigned long long)type;

@optional
- (void)thumbnailImage:(void (^)(UIImage *))arg1;
- (void)image:(void (^)(UIImage *))arg1;
- (NSString *)text;
@end

