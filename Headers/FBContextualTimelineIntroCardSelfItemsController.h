//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CKComponentHostingViewDelegate-Protocol.h"

@class FBTimelineCKComponentHostingViewCell, NSString;
@protocol FBProfileIntroCardSelfItemsUpdateDelegate;

@interface FBContextualTimelineIntroCardSelfItemsController : NSObject <CKComponentHostingViewDelegate>
{
    FBTimelineCKComponentHostingViewCell *_introCardselfItemsCell;
    id <FBProfileIntroCardSelfItemsUpdateDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)componentHostingViewDidInvalidateSize:(id)arg1;
- (id)introCardSelfItemsCell;
- (void)configureIntroCardSelfItemsWithPerson:(id)arg1;
- (float)desiredHeightForWidth:(float)arg1;
- (id)initWithToolbox:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

