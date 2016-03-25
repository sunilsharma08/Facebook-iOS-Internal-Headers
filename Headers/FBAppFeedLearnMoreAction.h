//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAppFeedSecondaryAction-Protocol.h"

@class FBAppFeedActionRouter, NSString;
@protocol FBAppFeedModuleResourceProvider;

@interface FBAppFeedLearnMoreAction : NSObject <FBAppFeedSecondaryAction>
{
    id <FBAppFeedModuleResourceProvider> _resourceProvider;
    FBAppFeedActionRouter *_actionRouter;
}

- (void).cxx_destruct;
- (BOOL)delayDismissalOfMenu;
- (id)imageWithSponsorable:(id)arg1;
- (id)detailWithSponsorable:(id)arg1;
- (id)titleWithSponsorable:(id)arg1;
- (void)performActionWithSponsorable:(id)arg1 parentUnit:(id)arg2;
- (void)willPerformActionWithSponsorable:(id)arg1 parentUnit:(id)arg2;
- (id)initWithActionRouter:(id)arg1 resourceProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

