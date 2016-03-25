//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBFeedTruncationExperimentContext : FBExperimentContext
{
    unsigned int _withoutAttachment;
    unsigned int _withoutAttachmentSponsored;
    unsigned int _withAttachmentDefault;
    unsigned int _withAttachmentSponsoredDefault;
    unsigned int _withVideoAttachment;
    unsigned int _withVideoAttachmentSponsored;
    unsigned int _withPhotoAttachment;
    unsigned int _withPhotoAttachmentSponsored;
    unsigned int _withLinkAttachment;
    unsigned int _withLinkAttachmentSponsored;
    unsigned int _withPageAttachment;
    unsigned int _withPageAttachmentSponsored;
    unsigned int _withAlbumAttachment;
    unsigned int _withAlbumAttachmentSponsored;
    unsigned int _withinStorySet;
    unsigned int _nestedInStory;
    unsigned int _nestedInStorySponsored;
    unsigned int _withNestedStory;
    unsigned int _withNestedStorySponsored;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(nonatomic) unsigned int withNestedStorySponsored; // @synthesize withNestedStorySponsored=_withNestedStorySponsored;
@property(nonatomic) unsigned int withNestedStory; // @synthesize withNestedStory=_withNestedStory;
@property(nonatomic) unsigned int nestedInStorySponsored; // @synthesize nestedInStorySponsored=_nestedInStorySponsored;
@property(nonatomic) unsigned int nestedInStory; // @synthesize nestedInStory=_nestedInStory;
@property(nonatomic) unsigned int withinStorySet; // @synthesize withinStorySet=_withinStorySet;
@property(nonatomic) unsigned int withAlbumAttachmentSponsored; // @synthesize withAlbumAttachmentSponsored=_withAlbumAttachmentSponsored;
@property(nonatomic) unsigned int withAlbumAttachment; // @synthesize withAlbumAttachment=_withAlbumAttachment;
@property(nonatomic) unsigned int withPageAttachmentSponsored; // @synthesize withPageAttachmentSponsored=_withPageAttachmentSponsored;
@property(nonatomic) unsigned int withPageAttachment; // @synthesize withPageAttachment=_withPageAttachment;
@property(nonatomic) unsigned int withLinkAttachmentSponsored; // @synthesize withLinkAttachmentSponsored=_withLinkAttachmentSponsored;
@property(nonatomic) unsigned int withLinkAttachment; // @synthesize withLinkAttachment=_withLinkAttachment;
@property(nonatomic) unsigned int withPhotoAttachmentSponsored; // @synthesize withPhotoAttachmentSponsored=_withPhotoAttachmentSponsored;
@property(nonatomic) unsigned int withPhotoAttachment; // @synthesize withPhotoAttachment=_withPhotoAttachment;
@property(nonatomic) unsigned int withVideoAttachmentSponsored; // @synthesize withVideoAttachmentSponsored=_withVideoAttachmentSponsored;
@property(nonatomic) unsigned int withVideoAttachment; // @synthesize withVideoAttachment=_withVideoAttachment;
@property(nonatomic) unsigned int withAttachmentSponsoredDefault; // @synthesize withAttachmentSponsoredDefault=_withAttachmentSponsoredDefault;
@property(nonatomic) unsigned int withAttachmentDefault; // @synthesize withAttachmentDefault=_withAttachmentDefault;
@property(nonatomic) unsigned int withoutAttachmentSponsored; // @synthesize withoutAttachmentSponsored=_withoutAttachmentSponsored;
@property(nonatomic) unsigned int withoutAttachment; // @synthesize withoutAttachment=_withoutAttachment;

@end

