//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "SCSnapAdsSerializableData.h"

@class NSString, SCAdRemoteWebpageImpressionTrackData, SCAppInstallImpressionTrackData, SCLongformVideoImpressionTrackData, SCThreeVImpressionTrackData;

@interface SCAdImpressionData : NSObject <SCSnapAdsSerializableData, NSCopying>
{
    NSString *_adType;
    SCThreeVImpressionTrackData *_threeV;
    SCAppInstallImpressionTrackData *_appInstall;
    SCLongformVideoImpressionTrackData *_longformVideo;
    SCAdRemoteWebpageImpressionTrackData *_remoteWebpage;
}

@property(readonly, copy, nonatomic) SCAdRemoteWebpageImpressionTrackData *remoteWebpage; // @synthesize remoteWebpage=_remoteWebpage;
@property(readonly, copy, nonatomic) SCLongformVideoImpressionTrackData *longformVideo; // @synthesize longformVideo=_longformVideo;
@property(readonly, copy, nonatomic) SCAppInstallImpressionTrackData *appInstall; // @synthesize appInstall=_appInstall;
@property(readonly, copy, nonatomic) SCThreeVImpressionTrackData *threeV; // @synthesize threeV=_threeV;
@property(readonly, copy, nonatomic) NSString *adType; // @synthesize adType=_adType;
- (void).cxx_destruct;
- (id)serialize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAdType:(id)arg1 threeV:(id)arg2 appInstall:(id)arg3 longformVideo:(id)arg4 remoteWebpage:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

