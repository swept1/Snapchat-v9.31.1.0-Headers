//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUScannableAnalyticsScannableDeviceInfo.h"

@class NSString;

@interface SOJUScannableAnalyticsScannableDeviceInfo : NSObject <SOJUScannableAnalyticsScannableDeviceInfo>
{
    NSString *_operatingSystem;
    NSString *_operatingSystemVersion;
    NSString *_deviceManufacturer;
    NSString *_deviceModel;
}

@property(readonly, copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(readonly, copy, nonatomic) NSString *deviceManufacturer; // @synthesize deviceManufacturer=_deviceManufacturer;
@property(readonly, copy, nonatomic) NSString *operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;
@property(readonly, copy, nonatomic) NSString *operatingSystem; // @synthesize operatingSystem=_operatingSystem;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOperatingSystem:(id)arg1 operatingSystemVersion:(id)arg2 deviceManufacturer:(id)arg3 deviceModel:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

