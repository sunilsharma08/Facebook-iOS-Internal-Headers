//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

#import "FBHScrollImpressionLogging-Protocol.h"

@class FBFeedComponentToolbox, FBMemStoryAttachment, NSArray, NSURL;

@interface FBArticleChainingFeedUnitArticleComponent : CKCompositeComponent <FBHScrollImpressionLogging>
{
    FBFeedComponentToolbox *_toolbox;
    NSURL *_navigationURL;
    SEL _xoutAction;
    FBMemStoryAttachment *_article;
    NSArray *_trackingCodes;
}

+ (id)newWithUnit:(id)arg1 toolbox:(id)arg2 xoutAction:(SEL)arg3;
- (void).cxx_destruct;
- (void)becameFullyVisible;
- (void)didTapArticle:(id)arg1;
- (void)didTapXout;

@end

