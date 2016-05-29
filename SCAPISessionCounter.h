//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURLSession;

@interface SCAPISessionCounter : NSObject
{
    unsigned long long _counter;
    _Bool _needsInvalidation;
    NSURLSession *_session;
}

@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)markNeedsInvalidation;
- (void)decreaseCounter;
- (void)increaseCounter;
- (_Bool)shouldInvalidateSession;
- (id)initWithSession:(id)arg1;

@end
