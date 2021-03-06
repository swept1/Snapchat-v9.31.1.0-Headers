//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ADLConnectionLostEvent : NSObject
{
    _Bool _willReconnect;
    int _errCode;
    NSString *_scopeId;
    NSString *_errMessage;
}

+ (id)ConnectionLostEventWithScopeId:(id)arg1 errCode:(int)arg2 errMessage:(id)arg3 willReconnect:(_Bool)arg4;
@property(readonly, nonatomic) _Bool willReconnect; // @synthesize willReconnect=_willReconnect;
@property(readonly, nonatomic) NSString *errMessage; // @synthesize errMessage=_errMessage;
@property(readonly, nonatomic) int errCode; // @synthesize errCode=_errCode;
@property(readonly, nonatomic) NSString *scopeId; // @synthesize scopeId=_scopeId;
- (void).cxx_destruct;
- (id)description;
- (id)initWithScopeId:(id)arg1 errCode:(int)arg2 errMessage:(id)arg3 willReconnect:(_Bool)arg4;

@end

