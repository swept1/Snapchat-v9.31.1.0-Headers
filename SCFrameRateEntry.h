//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCFrameRateEntry : NSObject
{
    double _duration;
    double _endTime;
    double _frameRate;
}

@property(readonly, nonatomic) double frameRate; // @synthesize frameRate=_frameRate;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (id)description;
- (id)initWithFrameRate:(double)arg1 duration:(double)arg2 endTime:(double)arg3;

@end

