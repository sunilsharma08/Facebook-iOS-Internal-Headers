//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class FBComposerAuthor, NSString;

@interface FBPageOthersPostsViewModel : FBValueObject <NSCopying>
{
    BOOL _canWritePost;
    BOOL _canSharePhoto;
    BOOL _enablePublisherBar;
    BOOL _enableOthersPostsUnit;
    BOOL _canViewAdminTimeline;
    NSString *_pageFBID;
    FBComposerAuthor *_composerAuthor;
}

+ (id)viewModelForPage:(id)arg1 session:(id)arg2;
@property(readonly, nonatomic) BOOL canViewAdminTimeline; // @synthesize canViewAdminTimeline=_canViewAdminTimeline;
@property(readonly, nonatomic) BOOL enableOthersPostsUnit; // @synthesize enableOthersPostsUnit=_enableOthersPostsUnit;
@property(readonly, nonatomic) BOOL enablePublisherBar; // @synthesize enablePublisherBar=_enablePublisherBar;
@property(readonly, nonatomic) BOOL canSharePhoto; // @synthesize canSharePhoto=_canSharePhoto;
@property(readonly, nonatomic) BOOL canWritePost; // @synthesize canWritePost=_canWritePost;
@property(readonly, copy, nonatomic) FBComposerAuthor *composerAuthor; // @synthesize composerAuthor=_composerAuthor;
@property(readonly, copy, nonatomic) NSString *pageFBID; // @synthesize pageFBID=_pageFBID;
- (void).cxx_destruct;
- (id)initWithPageFBID:(id)arg1 composerAuthor:(id)arg2 canWritePost:(BOOL)arg3 canSharePhoto:(BOOL)arg4 enablePublisherBar:(BOOL)arg5 enableOthersPostsUnit:(BOOL)arg6 canViewAdminTimeline:(BOOL)arg7;

@end

