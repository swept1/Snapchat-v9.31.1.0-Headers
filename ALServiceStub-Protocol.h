//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class ALDirectRenderRequest, ALDrawRequest, ALInitOptions, ALRenderRequest, ALResponder, ALVideoFrame, NSData, NSMutableDictionary, NSNumber;

@protocol ALServiceStub
@property(copy, nonatomic) CDUnknownBlockType logHandler;
@property(retain, nonatomic) NSMutableDictionary *activeConnections;
- (void)injectFrame:(ALVideoFrame *)arg1;
- (void)handleEvent:(NSData *)arg1;
- (void)handleResponse:(NSData *)arg1;
- (void)draw:(ALDrawRequest *)arg1;
- (void)stopRender:(NSNumber *)arg1;
- (void)directRenderSink:(ALDirectRenderRequest *)arg1 withResponder:(ALResponder *)arg2;
- (void)renderSink:(ALRenderRequest *)arg1 withResponder:(ALResponder *)arg2;
- (void)removeServiceListener:(id <ALServiceListener>)arg1;
- (void)addServiceListener:(id <ALServiceListener>)arg1;
- (id)getNativeServiceObject;
- (void)dispose;
- (id)initWithOptions:(ALInitOptions *)arg1;
@end

