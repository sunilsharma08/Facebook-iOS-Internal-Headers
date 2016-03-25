//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class CLLocation, FBComposerAlbumAttachment, FBComposerAppAttribution, FBComposerAudienceSuggestion, FBComposerChannelsPostingSummary, FBComposerConfiguration, FBComposerContentSuggestion, FBComposerDestination, FBComposerGoodwillCampaignAttachment, FBComposerHighlightedText, FBComposerLifeEventAttachments, FBComposerPostEditingSummary, FBComposerProductItemAttachment, FBComposerSelectableDate, FBComposerTaggedUsersBundle, FBComposerTraits, FBNearbyPlace, FBTaggableActivityComposition, FBTypedNSArrayOfFBComposerPublishedHashtag, FBTypedNSArrayOfFBComposerPublishedMention, FBTypedNSArrayOfNSString, NSArray, NSDate, NSDictionary, NSString;

@interface FBComposerCompositionDisplayState : FBValueObject <NSCopying, NSCoding>
{
    BOOL _placeIsUserSelected;
    BOOL _suggestedPhoto;
    BOOL _isLoadingTaggedActivitySuggestions;
    BOOL _tagsAreUserSelected;
    BOOL _compositionIncludesMediaAttachments;
    BOOL _userRemovedAllExistingLinks;
    BOOL _compositionIsStoryShare;
    BOOL _publishAsQuestionAndAnswerSession;
    BOOL _hasTargeting;
    FBComposerDestination *_destination;
    NSString *_statusText;
    NSString *_untrimmedStatusText;
    FBNearbyPlace *_taggedPlace;
    CLLocation *_placePickerLocation;
    FBTaggableActivityComposition *_taggableActivityComposition;
    NSArray *_mentions;
    FBTypedNSArrayOfFBComposerPublishedMention *_composerMentions;
    FBTypedNSArrayOfFBComposerPublishedHashtag *_hashtags;
    FBComposerTaggedUsersBundle *_taggedUsers;
    NSArray *_assetIDs;
    NSDictionary *_photoTags;
    FBComposerAlbumAttachment *_albumAttachment;
    FBTypedNSArrayOfNSString *_deniedLinks;
    FBComposerTraits *_traits;
    FBComposerConfiguration *_configuration;
    unsigned int _postContentType;
    NSDate *_scheduledDate;
    unsigned int _allowedPostContentTypeOptions;
    unsigned int _starRating;
    FBComposerProductItemAttachment *_productItemAttachment;
    FBComposerPostEditingSummary *_postEditingSummary;
    FBComposerHighlightedText *_openGraphRobotext;
    FBComposerAppAttribution *_appAttribution;
    NSString *_ref;
    NSString *_actionType;
    NSDictionary *_actionParameters;
    NSDictionary *_actionPropertyToCreatedObjectType;
    NSArray *_openGraphMediaAttachmentsForDisplay;
    NSArray *_openGraphMediaAttachmentsForUpload;
    FBComposerGoodwillCampaignAttachment *_goodwillCampaignAttachment;
    FBComposerSelectableDate *_lifeEventDate;
    FBComposerLifeEventAttachments *_lifeEventAttachments;
    FBComposerChannelsPostingSummary *_channelsPostingSummary;
    NSArray *_montagePhotoAttachments;
    FBComposerContentSuggestion *_contentSuggestion;
    FBComposerAudienceSuggestion *_audienceSuggestion;
    unsigned int _contributorsState;
}

@property(readonly, nonatomic) unsigned int contributorsState; // @synthesize contributorsState=_contributorsState;
@property(readonly, nonatomic) BOOL hasTargeting; // @synthesize hasTargeting=_hasTargeting;
@property(readonly, copy, nonatomic) FBComposerAudienceSuggestion *audienceSuggestion; // @synthesize audienceSuggestion=_audienceSuggestion;
@property(readonly, copy, nonatomic) FBComposerContentSuggestion *contentSuggestion; // @synthesize contentSuggestion=_contentSuggestion;
@property(readonly, copy, nonatomic) NSArray *montagePhotoAttachments; // @synthesize montagePhotoAttachments=_montagePhotoAttachments;
@property(readonly, copy, nonatomic) FBComposerChannelsPostingSummary *channelsPostingSummary; // @synthesize channelsPostingSummary=_channelsPostingSummary;
@property(readonly, copy, nonatomic) FBComposerLifeEventAttachments *lifeEventAttachments; // @synthesize lifeEventAttachments=_lifeEventAttachments;
@property(readonly, copy, nonatomic) FBComposerSelectableDate *lifeEventDate; // @synthesize lifeEventDate=_lifeEventDate;
@property(readonly, copy, nonatomic) FBComposerGoodwillCampaignAttachment *goodwillCampaignAttachment; // @synthesize goodwillCampaignAttachment=_goodwillCampaignAttachment;
@property(readonly, copy, nonatomic) NSArray *openGraphMediaAttachmentsForUpload; // @synthesize openGraphMediaAttachmentsForUpload=_openGraphMediaAttachmentsForUpload;
@property(readonly, copy, nonatomic) NSArray *openGraphMediaAttachmentsForDisplay; // @synthesize openGraphMediaAttachmentsForDisplay=_openGraphMediaAttachmentsForDisplay;
@property(readonly, copy, nonatomic) NSDictionary *actionPropertyToCreatedObjectType; // @synthesize actionPropertyToCreatedObjectType=_actionPropertyToCreatedObjectType;
@property(readonly, copy, nonatomic) NSDictionary *actionParameters; // @synthesize actionParameters=_actionParameters;
@property(readonly, copy, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(readonly, copy, nonatomic) NSString *ref; // @synthesize ref=_ref;
@property(readonly, copy, nonatomic) FBComposerAppAttribution *appAttribution; // @synthesize appAttribution=_appAttribution;
@property(readonly, copy, nonatomic) FBComposerHighlightedText *openGraphRobotext; // @synthesize openGraphRobotext=_openGraphRobotext;
@property(readonly, copy, nonatomic) FBComposerPostEditingSummary *postEditingSummary; // @synthesize postEditingSummary=_postEditingSummary;
@property(readonly, copy, nonatomic) FBComposerProductItemAttachment *productItemAttachment; // @synthesize productItemAttachment=_productItemAttachment;
@property(readonly, nonatomic) unsigned int starRating; // @synthesize starRating=_starRating;
@property(readonly, nonatomic) unsigned int allowedPostContentTypeOptions; // @synthesize allowedPostContentTypeOptions=_allowedPostContentTypeOptions;
@property(readonly, nonatomic) BOOL publishAsQuestionAndAnswerSession; // @synthesize publishAsQuestionAndAnswerSession=_publishAsQuestionAndAnswerSession;
@property(readonly, copy, nonatomic) NSDate *scheduledDate; // @synthesize scheduledDate=_scheduledDate;
@property(readonly, nonatomic) unsigned int postContentType; // @synthesize postContentType=_postContentType;
@property(readonly, nonatomic) BOOL compositionIsStoryShare; // @synthesize compositionIsStoryShare=_compositionIsStoryShare;
@property(readonly, copy, nonatomic) FBComposerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy, nonatomic) FBComposerTraits *traits; // @synthesize traits=_traits;
@property(readonly, nonatomic) BOOL userRemovedAllExistingLinks; // @synthesize userRemovedAllExistingLinks=_userRemovedAllExistingLinks;
@property(readonly, copy, nonatomic) FBTypedNSArrayOfNSString *deniedLinks; // @synthesize deniedLinks=_deniedLinks;
@property(readonly, copy, nonatomic) FBComposerAlbumAttachment *albumAttachment; // @synthesize albumAttachment=_albumAttachment;
@property(readonly, nonatomic) BOOL compositionIncludesMediaAttachments; // @synthesize compositionIncludesMediaAttachments=_compositionIncludesMediaAttachments;
@property(readonly, copy, nonatomic) NSDictionary *photoTags; // @synthesize photoTags=_photoTags;
@property(readonly, copy, nonatomic) NSArray *assetIDs; // @synthesize assetIDs=_assetIDs;
@property(readonly, copy, nonatomic) FBComposerTaggedUsersBundle *taggedUsers; // @synthesize taggedUsers=_taggedUsers;
@property(readonly, nonatomic) BOOL tagsAreUserSelected; // @synthesize tagsAreUserSelected=_tagsAreUserSelected;
@property(readonly, copy, nonatomic) FBTypedNSArrayOfFBComposerPublishedHashtag *hashtags; // @synthesize hashtags=_hashtags;
@property(readonly, copy, nonatomic) FBTypedNSArrayOfFBComposerPublishedMention *composerMentions; // @synthesize composerMentions=_composerMentions;
@property(readonly, copy, nonatomic) NSArray *mentions; // @synthesize mentions=_mentions;
@property(readonly, nonatomic) BOOL isLoadingTaggedActivitySuggestions; // @synthesize isLoadingTaggedActivitySuggestions=_isLoadingTaggedActivitySuggestions;
@property(readonly, copy, nonatomic) FBTaggableActivityComposition *taggableActivityComposition; // @synthesize taggableActivityComposition=_taggableActivityComposition;
@property(readonly, nonatomic) BOOL suggestedPhoto; // @synthesize suggestedPhoto=_suggestedPhoto;
@property(readonly, copy, nonatomic) CLLocation *placePickerLocation; // @synthesize placePickerLocation=_placePickerLocation;
@property(readonly, nonatomic) BOOL placeIsUserSelected; // @synthesize placeIsUserSelected=_placeIsUserSelected;
@property(readonly, copy, nonatomic) FBNearbyPlace *taggedPlace; // @synthesize taggedPlace=_taggedPlace;
@property(readonly, copy, nonatomic) NSString *untrimmedStatusText; // @synthesize untrimmedStatusText=_untrimmedStatusText;
@property(readonly, copy, nonatomic) NSString *statusText; // @synthesize statusText=_statusText;
@property(readonly, copy, nonatomic) FBComposerDestination *destination; // @synthesize destination=_destination;
- (void).cxx_destruct;
- (id)initWithDestination:(id)arg1 statusText:(id)arg2 untrimmedStatusText:(id)arg3 taggedPlace:(id)arg4 placeIsUserSelected:(BOOL)arg5 placePickerLocation:(id)arg6 suggestedPhoto:(BOOL)arg7 taggableActivityComposition:(id)arg8 isLoadingTaggedActivitySuggestions:(BOOL)arg9 mentions:(id)arg10 composerMentions:(id)arg11 hashtags:(id)arg12 tagsAreUserSelected:(BOOL)arg13 taggedUsers:(id)arg14 assetIDs:(id)arg15 photoTags:(id)arg16 compositionIncludesMediaAttachments:(BOOL)arg17 albumAttachment:(id)arg18 deniedLinks:(id)arg19 userRemovedAllExistingLinks:(BOOL)arg20 traits:(id)arg21 configuration:(id)arg22 compositionIsStoryShare:(BOOL)arg23 postContentType:(unsigned int)arg24 scheduledDate:(id)arg25 publishAsQuestionAndAnswerSession:(BOOL)arg26 allowedPostContentTypeOptions:(unsigned int)arg27 starRating:(unsigned int)arg28 productItemAttachment:(id)arg29 postEditingSummary:(id)arg30 openGraphRobotext:(id)arg31 appAttribution:(id)arg32 ref:(id)arg33 actionType:(id)arg34 actionParameters:(id)arg35 actionPropertyToCreatedObjectType:(id)arg36 openGraphMediaAttachmentsForDisplay:(id)arg37 openGraphMediaAttachmentsForUpload:(id)arg38 goodwillCampaignAttachment:(id)arg39 lifeEventDate:(id)arg40 lifeEventAttachments:(id)arg41 channelsPostingSummary:(id)arg42 montagePhotoAttachments:(id)arg43 contentSuggestion:(id)arg44 audienceSuggestion:(id)arg45 hasTargeting:(BOOL)arg46 contributorsState:(unsigned int)arg47;

@end

