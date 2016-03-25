//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class FBActivityPreviewTemplate, FBTaggableActivityEventObject, FBTypedNSArrayOfFBActivityIcon, NSString, NSURL;

@interface FBTaggableActivityComposition : FBValueObject <NSCopying, NSCoding>
{
    BOOL _showAttachmentPreview;
    BOOL _hideAttachment;
    BOOL _hasCustomIcon;
    BOOL _isSelected;
    NSString *_graphQLID;
    NSString *_presentParticiple;
    NSString *_taggableActivityID;
    NSString *_objectID;
    NSString *_iconID;
    NSString *_freeformObjectName;
    NSString *_objectLabel;
    NSString *_objectSubtext;
    NSString *_suggestionMechanism;
    NSURL *_smallIconURL;
    NSURL *_largeIconURL;
    NSURL *_profilePictureURL;
    NSURL *_glyphURL;
    FBActivityPreviewTemplate *_previewTemplate;
    FBActivityPreviewTemplate *_previewTemplateWithUser;
    FBActivityPreviewTemplate *_previewTemplateWithMultipleUsers;
    FBActivityPreviewTemplate *_previewTemplateWithUserAtPlace;
    FBActivityPreviewTemplate *_previewTemplateWithMultipleUsersAtPlace;
    FBActivityPreviewTemplate *_previewTemplateAtPlace;
    FBTaggableActivityEventObject *_eventObject;
    FBTypedNSArrayOfFBActivityIcon *_allIcons;
    FBTypedNSArrayOfFBActivityIcon *_objectIcons;
}

@property(readonly, nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(readonly, nonatomic) BOOL hasCustomIcon; // @synthesize hasCustomIcon=_hasCustomIcon;
@property(readonly, copy, nonatomic) FBTypedNSArrayOfFBActivityIcon *objectIcons; // @synthesize objectIcons=_objectIcons;
@property(readonly, copy, nonatomic) FBTypedNSArrayOfFBActivityIcon *allIcons; // @synthesize allIcons=_allIcons;
@property(readonly, copy, nonatomic) FBTaggableActivityEventObject *eventObject; // @synthesize eventObject=_eventObject;
@property(readonly, copy, nonatomic) FBActivityPreviewTemplate *previewTemplateAtPlace; // @synthesize previewTemplateAtPlace=_previewTemplateAtPlace;
@property(readonly, copy, nonatomic) FBActivityPreviewTemplate *previewTemplateWithMultipleUsersAtPlace; // @synthesize previewTemplateWithMultipleUsersAtPlace=_previewTemplateWithMultipleUsersAtPlace;
@property(readonly, copy, nonatomic) FBActivityPreviewTemplate *previewTemplateWithUserAtPlace; // @synthesize previewTemplateWithUserAtPlace=_previewTemplateWithUserAtPlace;
@property(readonly, copy, nonatomic) FBActivityPreviewTemplate *previewTemplateWithMultipleUsers; // @synthesize previewTemplateWithMultipleUsers=_previewTemplateWithMultipleUsers;
@property(readonly, copy, nonatomic) FBActivityPreviewTemplate *previewTemplateWithUser; // @synthesize previewTemplateWithUser=_previewTemplateWithUser;
@property(readonly, copy, nonatomic) FBActivityPreviewTemplate *previewTemplate; // @synthesize previewTemplate=_previewTemplate;
@property(readonly, nonatomic) BOOL hideAttachment; // @synthesize hideAttachment=_hideAttachment;
@property(readonly, nonatomic) BOOL showAttachmentPreview; // @synthesize showAttachmentPreview=_showAttachmentPreview;
@property(readonly, copy, nonatomic) NSURL *glyphURL; // @synthesize glyphURL=_glyphURL;
@property(readonly, copy, nonatomic) NSURL *profilePictureURL; // @synthesize profilePictureURL=_profilePictureURL;
@property(readonly, copy, nonatomic) NSURL *largeIconURL; // @synthesize largeIconURL=_largeIconURL;
@property(readonly, copy, nonatomic) NSURL *smallIconURL; // @synthesize smallIconURL=_smallIconURL;
@property(readonly, copy, nonatomic) NSString *suggestionMechanism; // @synthesize suggestionMechanism=_suggestionMechanism;
@property(readonly, copy, nonatomic) NSString *objectSubtext; // @synthesize objectSubtext=_objectSubtext;
@property(readonly, copy, nonatomic) NSString *objectLabel; // @synthesize objectLabel=_objectLabel;
@property(readonly, copy, nonatomic) NSString *freeformObjectName; // @synthesize freeformObjectName=_freeformObjectName;
@property(readonly, copy, nonatomic) NSString *iconID; // @synthesize iconID=_iconID;
@property(readonly, copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(readonly, copy, nonatomic) NSString *taggableActivityID; // @synthesize taggableActivityID=_taggableActivityID;
@property(readonly, copy, nonatomic) NSString *presentParticiple; // @synthesize presentParticiple=_presentParticiple;
@property(readonly, copy, nonatomic) NSString *graphQLID; // @synthesize graphQLID=_graphQLID;
- (void).cxx_destruct;
- (id)initWithGraphQLID:(id)arg1 presentParticiple:(id)arg2 taggableActivityID:(id)arg3 objectID:(id)arg4 iconID:(id)arg5 freeformObjectName:(id)arg6 objectLabel:(id)arg7 objectSubtext:(id)arg8 suggestionMechanism:(id)arg9 smallIconURL:(id)arg10 largeIconURL:(id)arg11 profilePictureURL:(id)arg12 glyphURL:(id)arg13 showAttachmentPreview:(BOOL)arg14 hideAttachment:(BOOL)arg15 previewTemplate:(id)arg16 previewTemplateWithUser:(id)arg17 previewTemplateWithMultipleUsers:(id)arg18 previewTemplateWithUserAtPlace:(id)arg19 previewTemplateWithMultipleUsersAtPlace:(id)arg20 previewTemplateAtPlace:(id)arg21 eventObject:(id)arg22 allIcons:(id)arg23 objectIcons:(id)arg24 hasCustomIcon:(BOOL)arg25 isSelected:(BOOL)arg26;

@end

