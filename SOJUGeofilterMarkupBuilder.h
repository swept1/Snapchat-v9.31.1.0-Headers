//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, SOJUGeofilterDisplayParameters, SOJUGeofilterLayoutParameters, SOJULocalDateTimeInterval;

@interface SOJUGeofilterMarkupBuilder : NSObject
{
    NSNumber *_refreshRate;
    NSString *_type;
    NSString *_source;
    SOJUGeofilterLayoutParameters *_layoutParameters;
    SOJUGeofilterDisplayParameters *_displayParameters;
    SOJULocalDateTimeInterval *_displaySchedule;
}

+ (id)withJUGeofilterMarkup:(id)arg1;
- (void).cxx_destruct;
- (id)setDisplaySchedule:(id)arg1;
- (id)setDisplayParameters:(id)arg1;
- (id)setLayoutParameters:(id)arg1;
- (id)setSource:(id)arg1;
- (id)setType:(id)arg1;
- (id)setRefreshRate:(id)arg1;
- (id)build;

@end
