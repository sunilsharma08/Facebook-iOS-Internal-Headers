//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBMemModelObject.h"

#import "FBGoodwillCampaign-Protocol.h"
#import "FBHideable-Protocol.h"
#import "FBQueriedFeedUnitFieldsProtocol-Protocol.h"

@class NSString;

@interface FBMemGoodwillAnniversaryCampaignFeedUnit : FBMemModelObject <FBHideable, FBGoodwillCampaign, FBQueriedFeedUnitFieldsProtocol>
{
}

- (void)setSharedWithSession:(id)arg1;
- (id)sharePreviewStoryPlaceholderText;
- (id)sharePreviewIconImageUri;
- (id)sharePreviewTitleText;
- (id)withPerson;
- (id)photoAttachments;
- (id)campaignName;
- (id)campaignID;
- (id)trackingCodesForAllAds;
- (id)sponsoredImpressionURLs;
- (id)sponsoredDataObjects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

