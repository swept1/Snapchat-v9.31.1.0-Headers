//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCImageProcessAnimatedDrawCommandTransformProvider.h"

@class NSString, SCVideoTargetTrajectory;

@interface SCImageProcessAnimatedTrajectoryBackedDrawCommandTransformProvider : NSObject <SCImageProcessAnimatedDrawCommandTransformProvider>
{
    struct CGSize _imageSize;
    struct CGSize _outputVideoSize;
    SCVideoTargetTrajectory *_trajectory;
}

- (void).cxx_destruct;
- (struct CGSize)originalImageSize;
- (struct CGAffineTransform)transformAtPresentationTime:(CDStruct_1b6d18a9)arg1;
- (id)initWithImageSize:(struct CGSize)arg1 outputVideoSize:(struct CGSize)arg2 videoTargetTrajectory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

