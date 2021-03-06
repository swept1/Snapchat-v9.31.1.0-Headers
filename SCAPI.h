//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCAPI : NSObject
{
}

+ (id)makeDeleteRequestWithEndpoint:(id)arg1 client:(id)arg2 parameters:(id)arg3 successQueue:(id)arg4 failureQueue:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
+ (id)makeGetRequestWithEndpoint:(id)arg1 client:(id)arg2 parameters:(id)arg3 successQueue:(id)arg4 failureQueue:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
+ (id)makePostRequestWithEndpoint:(id)arg1 client:(id)arg2 parameters:(id)arg3 data:(id)arg4 successQueue:(id)arg5 failureQueue:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
+ (id)makePostRequestWithEndpoint:(id)arg1 client:(id)arg2 parameters:(id)arg3 successQueue:(id)arg4 failureQueue:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
+ (id)URLRequestWithURL:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 additionalHTTPHeaders:(id)arg4 method:(long long)arg5 authenticated:(_Bool)arg6;
+ (id)URLRequestWithEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 method:(long long)arg4 authenticated:(_Bool)arg5;
+ (id)_buildRequestParamForEndpoint:(id)arg1 parameters:(id)arg2 authenticated:(_Bool)arg3;
+ (id)makeRequestWithEndpointWithoutParsing:(id)arg1 parameters:(id)arg2 method:(long long)arg3 authenticated:(_Bool)arg4 successQueue:(id)arg5 failureQueue:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
+ (id)makeRequestWithEndpoint:(id)arg1 parameters:(id)arg2 successQueue:(id)arg3 failureQueue:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
+ (id)getParamDictionary:(id)arg1 endpoint:(id)arg2;

@end

