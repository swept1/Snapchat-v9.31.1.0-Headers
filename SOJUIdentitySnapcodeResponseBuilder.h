//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SOJUIdentitySnapcodeResponseBuilder : NSObject
{
    NSString *_imageData;
    NSString *_qrPath;
}

+ (id)withJUIdentitySnapcodeResponse:(id)arg1;
- (void).cxx_destruct;
- (id)setQrPath:(id)arg1;
- (id)setImageData:(id)arg1;
- (id)build;

@end

