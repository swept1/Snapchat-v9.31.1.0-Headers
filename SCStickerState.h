//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCStickerState.h"

@class NSArray, NSString;

@interface SCStickerState : NSObject <SCStickerState>
{
    _Bool _isTracking;
    unsigned long long _type;
    NSString *_emoji;
    double _rotation;
    double _scale;
    NSArray *_trackingTrajectory;
    struct CGSize _relativeSize;
    struct CGPoint _center;
}

@property(readonly, copy, nonatomic) NSArray *trackingTrajectory; // @synthesize trackingTrajectory=_trackingTrajectory;
@property(readonly, nonatomic) _Bool isTracking; // @synthesize isTracking=_isTracking;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(readonly, nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(readonly, nonatomic) struct CGSize relativeSize; // @synthesize relativeSize=_relativeSize;
@property(readonly, copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(unsigned long long)arg1 emoji:(id)arg2 relativeSize:(struct CGSize)arg3 center:(struct CGPoint)arg4 rotation:(double)arg5 scale:(double)arg6 isTracking:(_Bool)arg7 trackingTrajectory:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

