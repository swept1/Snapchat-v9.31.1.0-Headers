//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface SOJUConfigLongConfigPropertyBuilder : NSObject
{
    NSString *_name;
    NSNumber *_reloadAppOnChange;
    NSNumber *_value;
}

+ (id)withJUConfigLongConfigProperty:(id)arg1;
- (void).cxx_destruct;
- (id)setValue:(id)arg1;
- (id)setReloadAppOnChange:(id)arg1;
- (id)setName:(id)arg1;
- (id)build;

@end

