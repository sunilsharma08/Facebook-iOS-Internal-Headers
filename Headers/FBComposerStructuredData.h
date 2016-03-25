//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface FBComposerStructuredData : FBValueObject <NSCopying, NSCoding>
{
    BOOL _allowReactionAfterPublication;
    NSString *_authorId;
    NSString *_checkedInPlaceId;
    NSString *_openGraphAction;
    NSString *_openGraphObject;
    NSArray *_withTaggedUserIds;
    NSArray *_photoTaggedUserIds;
    NSArray *_mentionedUserIds;
    NSString *_shareableId;
    NSString *_compositionSessionId;
    NSString *_targetGraphQLID;
    NSString *_postText;
    NSString *_untrimmedPostText;
    NSArray *_hashtags;
    unsigned int _authorType;
    unsigned int _targetType;
    unsigned int _postContentType;
}

@property(readonly, nonatomic) unsigned int postContentType; // @synthesize postContentType=_postContentType;
@property(readonly, nonatomic) unsigned int targetType; // @synthesize targetType=_targetType;
@property(readonly, nonatomic) unsigned int authorType; // @synthesize authorType=_authorType;
@property(readonly, copy, nonatomic) NSArray *hashtags; // @synthesize hashtags=_hashtags;
@property(readonly, copy, nonatomic) NSString *untrimmedPostText; // @synthesize untrimmedPostText=_untrimmedPostText;
@property(readonly, copy, nonatomic) NSString *postText; // @synthesize postText=_postText;
@property(readonly, copy, nonatomic) NSString *targetGraphQLID; // @synthesize targetGraphQLID=_targetGraphQLID;
@property(readonly, copy, nonatomic) NSString *compositionSessionId; // @synthesize compositionSessionId=_compositionSessionId;
@property(readonly, nonatomic) BOOL allowReactionAfterPublication; // @synthesize allowReactionAfterPublication=_allowReactionAfterPublication;
@property(readonly, copy, nonatomic) NSString *shareableId; // @synthesize shareableId=_shareableId;
@property(readonly, copy, nonatomic) NSArray *mentionedUserIds; // @synthesize mentionedUserIds=_mentionedUserIds;
@property(readonly, copy, nonatomic) NSArray *photoTaggedUserIds; // @synthesize photoTaggedUserIds=_photoTaggedUserIds;
@property(readonly, copy, nonatomic) NSArray *withTaggedUserIds; // @synthesize withTaggedUserIds=_withTaggedUserIds;
@property(readonly, copy, nonatomic) NSString *openGraphObject; // @synthesize openGraphObject=_openGraphObject;
@property(readonly, copy, nonatomic) NSString *openGraphAction; // @synthesize openGraphAction=_openGraphAction;
@property(readonly, copy, nonatomic) NSString *checkedInPlaceId; // @synthesize checkedInPlaceId=_checkedInPlaceId;
@property(readonly, copy, nonatomic) NSString *authorId; // @synthesize authorId=_authorId;
- (void).cxx_destruct;
- (id)initWithAuthorId:(id)arg1 checkedInPlaceId:(id)arg2 openGraphAction:(id)arg3 openGraphObject:(id)arg4 withTaggedUserIds:(id)arg5 photoTaggedUserIds:(id)arg6 mentionedUserIds:(id)arg7 shareableId:(id)arg8 allowReactionAfterPublication:(BOOL)arg9 compositionSessionId:(id)arg10 targetGraphQLID:(id)arg11 postText:(id)arg12 untrimmedPostText:(id)arg13 hashtags:(id)arg14 authorType:(unsigned int)arg15 targetType:(unsigned int)arg16 postContentType:(unsigned int)arg17;

@end

