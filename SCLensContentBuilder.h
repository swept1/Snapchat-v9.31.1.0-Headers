//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface SCLensContentBuilder : NSObject
{
    UIImage *_image;
    NSString *_contentPath;
}

+ (id)withLensContent:(id)arg1;
- (void).cxx_destruct;
- (id)setContentPath:(id)arg1;
- (id)setImage:(id)arg1;
- (id)build;

@end

