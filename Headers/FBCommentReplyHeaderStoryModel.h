//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class FBMemTextWithEntities, NSURL;

@interface FBCommentReplyHeaderStoryModel : FBValueObject <NSCopying>
{
    FBMemTextWithEntities *_commentPermalinkText;
    NSURL *_storyURL;
}

@property(readonly, copy, nonatomic) NSURL *storyURL; // @synthesize storyURL=_storyURL;
@property(readonly, copy, nonatomic) FBMemTextWithEntities *commentPermalinkText; // @synthesize commentPermalinkText=_commentPermalinkText;
- (void).cxx_destruct;
- (id)initWithCommentPermalinkText:(id)arg1 storyURL:(id)arg2;

@end

