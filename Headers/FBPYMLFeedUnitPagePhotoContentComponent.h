//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBFeedComponentToolbox, FBIntentAnalyticsInfo;

@interface FBPYMLFeedUnitPagePhotoContentComponent : CKCompositeComponent
{
    vector_1d9eaa07 _children;
    FBFeedComponentToolbox *_toolbox;
    FBIntentAnalyticsInfo *_analyticsInfo;
}

+ (id)newWithItem:(id)arg1 height:(float)arg2 toolbox:(id)arg3;
@property(readonly, nonatomic) FBIntentAnalyticsInfo *analyticsInfo; // @synthesize analyticsInfo=_analyticsInfo;
@property(readonly, nonatomic) FBFeedComponentToolbox *toolbox; // @synthesize toolbox=_toolbox;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const vector_1d9eaa07 *)children;

@end

