//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBComposerAudienceEducationProtocol-Protocol.h"
#import "FBComposerAudiencePickerEducationViewControllerDelegate-Protocol.h"

@class FBPopoverController, FBUserSession, NSString;
@protocol FBComposerAudienceEducationProtocolDelegate;

@interface FBEducationAudiencePicker : NSObject <FBComposerAudiencePickerEducationViewControllerDelegate, FBComposerAudienceEducationProtocol>
{
    FBUserSession *_session;
    FBPopoverController *_popoverEducationController;
    id <FBComposerAudienceEducationProtocolDelegate> _delegate;
    unsigned int _platform;
}

@property(readonly, nonatomic) unsigned int platform; // @synthesize platform=_platform;
@property(nonatomic) __weak id <FBComposerAudienceEducationProtocolDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)audiencePickerEducationViewControllerUserDidDismissView:(id)arg1;
- (void)_sendAudiencePickerEducationRequestForEvent:(unsigned int)arg1;
- (id)presentablePopoverControllerWithFrame:(struct CGRect)arg1;
- (void)sendAudienceEducationRequestForEvent:(unsigned int)arg1;
- (void)didInsertAudienceEducationToView;
- (BOOL)shouldShowTooltip;
- (unsigned int)tooltipType;
- (id)tooltipIdentifier;
- (unsigned int)audienceEducationViewType;
- (id)audienceEducationData;
- (BOOL)showEducationForPrivacySetting:(id)arg1;
- (unsigned int)audienceEducationType;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

