//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class FBComposerFixedPrivacyExplanation, FBComposerPublishTargetFetchStatus, NSString;

@interface FBComposerPublishTarget : FBValueObject <NSCopying, NSCoding>
{
    BOOL _canViewerPostMediaToTimeline;
    BOOL _allowMultiPhotoAttachments;
    BOOL _allowMultiMediaAttachments;
    NSString *_graphQLID;
    unsigned int _targetType;
    NSString *_targetDescription;
    NSString *_name;
    NSString *_displayName;
    NSString *_profilePictureURI;
    FBComposerFixedPrivacyExplanation *_fixedPrivacyExplanation;
    NSString *_albumMediaOwnerIdentifier;
    unsigned int _albumMediaOwnerType;
    NSString *_albumType;
    FBComposerPublishTargetFetchStatus *_fetchStatus;
}

@property(readonly, copy, nonatomic) FBComposerPublishTargetFetchStatus *fetchStatus; // @synthesize fetchStatus=_fetchStatus;
@property(readonly, copy, nonatomic) NSString *albumType; // @synthesize albumType=_albumType;
@property(readonly, nonatomic) unsigned int albumMediaOwnerType; // @synthesize albumMediaOwnerType=_albumMediaOwnerType;
@property(readonly, copy, nonatomic) NSString *albumMediaOwnerIdentifier; // @synthesize albumMediaOwnerIdentifier=_albumMediaOwnerIdentifier;
@property(readonly, copy, nonatomic) FBComposerFixedPrivacyExplanation *fixedPrivacyExplanation; // @synthesize fixedPrivacyExplanation=_fixedPrivacyExplanation;
@property(readonly, nonatomic) BOOL allowMultiMediaAttachments; // @synthesize allowMultiMediaAttachments=_allowMultiMediaAttachments;
@property(readonly, nonatomic) BOOL allowMultiPhotoAttachments; // @synthesize allowMultiPhotoAttachments=_allowMultiPhotoAttachments;
@property(readonly, nonatomic) BOOL canViewerPostMediaToTimeline; // @synthesize canViewerPostMediaToTimeline=_canViewerPostMediaToTimeline;
@property(readonly, copy, nonatomic) NSString *profilePictureURI; // @synthesize profilePictureURI=_profilePictureURI;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *targetDescription; // @synthesize targetDescription=_targetDescription;
@property(readonly, nonatomic) unsigned int targetType; // @synthesize targetType=_targetType;
@property(readonly, copy, nonatomic) NSString *graphQLID; // @synthesize graphQLID=_graphQLID;
- (void).cxx_destruct;
- (id)initWithGraphQLID:(id)arg1 targetType:(unsigned int)arg2 targetDescription:(id)arg3 name:(id)arg4 displayName:(id)arg5 profilePictureURI:(id)arg6 canViewerPostMediaToTimeline:(BOOL)arg7 allowMultiPhotoAttachments:(BOOL)arg8 allowMultiMediaAttachments:(BOOL)arg9 fixedPrivacyExplanation:(id)arg10 albumMediaOwnerIdentifier:(id)arg11 albumMediaOwnerType:(unsigned int)arg12 albumType:(id)arg13 fetchStatus:(id)arg14;

@end

