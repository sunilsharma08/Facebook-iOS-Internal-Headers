//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBFollowSheetComponentToolbox, FBRichTextComponent;

@interface FBFollowSheetFeedAwesomizerPromotionComponent : CKCompositeComponent
{
    FBFollowSheetComponentToolbox *_toolbox;
    struct FBFollowSheetFeedAwesomizerPromotionComponentConfiguration _config;
    FBRichTextComponent *_messageComponent;
}

+ (id)newWithTarget:(id)arg1 toolbox:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1;
- (vector_035bbd4a)animationsFromPreviousComponent:(id)arg1;
- (void)didTapStartButton;

@end

