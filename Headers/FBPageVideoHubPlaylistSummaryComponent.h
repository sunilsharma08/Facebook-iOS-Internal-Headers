//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

#import "FBHScrollImpressionLogging-Protocol.h"

@class FBFeedComponentToolbox, FBMemStoryAttachment, NSString;

@interface FBPageVideoHubPlaylistSummaryComponent : CKCompositeComponent <FBHScrollImpressionLogging>
{
    FBFeedComponentToolbox *_toolbox;
    FBMemStoryAttachment *_attachment;
    NSString *_pageid;
}

+ (id)rearrangedThumbnailUrisForThumbnailUris:(id)arg1;
+ (id)newWithAttachment:(id)arg1 toolbox:(id)arg2 pageid:(id)arg3;
- (void).cxx_destruct;
- (void)didTapSummaryView;

@end

