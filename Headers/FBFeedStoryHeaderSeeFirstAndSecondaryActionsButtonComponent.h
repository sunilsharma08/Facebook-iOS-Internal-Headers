//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class CKComponent, FBFeedStoryHeaderSeeFirstButtonComponent;

@interface FBFeedStoryHeaderSeeFirstAndSecondaryActionsButtonComponent : CKCompositeComponent
{
    CKComponent *_chevronComponent;
    FBFeedStoryHeaderSeeFirstButtonComponent *_starComponent;
}

+ (id)newWithUnit:(id)arg1 element:(id)arg2 options:(int)arg3 toolbox:(id)arg4;
@property(readonly, nonatomic) FBFeedStoryHeaderSeeFirstButtonComponent *starComponent; // @synthesize starComponent=_starComponent;
@property(readonly, nonatomic) CKComponent *chevronComponent; // @synthesize chevronComponent=_chevronComponent;
- (void).cxx_destruct;
- (vector_035bbd4a)animationsFromPreviousComponent:(id)arg1;

@end

