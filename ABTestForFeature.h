//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ABTestForFeature : NSObject
{
    NSString *_studyId;
    NSString *_variable;
    NSString *_onValue;
}

@property(copy, nonatomic) NSString *onValue; // @synthesize onValue=_onValue;
@property(copy, nonatomic) NSString *variable; // @synthesize variable=_variable;
@property(copy, nonatomic) NSString *studyId; // @synthesize studyId=_studyId;
- (void).cxx_destruct;
- (id)initWithStudyId:(id)arg1 variable:(id)arg2 onValue:(id)arg3;

@end

