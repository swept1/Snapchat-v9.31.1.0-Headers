//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "NamedEvent.h"

@class NSString;

@interface SCAExperimentUserTreatment : SCAUserTrackedEvent <NamedEvent>
{
    NSString *studyName;
    NSString *experimentId;
}

+ (id)copy:(id)arg1;
+ (id)create;
- (void).cxx_destruct;
- (id)asDictionary;
- (id)getExperimentId;
- (void)setExperimentId:(id)arg1;
- (id)getStudyName;
- (void)setStudyName:(id)arg1;
- (id)getEventName;
- (id)init;

@end

