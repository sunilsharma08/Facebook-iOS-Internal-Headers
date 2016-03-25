//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBFeedSecondaryAction-Protocol.h"

@class FBFeedSecondaryActionContext, NSArray, NSString;
@protocol FBFeedSeeMoreContentHandler><FBFeedSeeMoreContentUIFactory, FBQueriedFeedUnitFieldsProtocol><FBActionLinkDestinationsProtocol;

@interface FBSeeMoreContentAction : NSObject <FBFeedSecondaryAction>
{
    id <FBQueriedFeedUnitFieldsProtocol><FBActionLinkDestinationsProtocol> _unit;
    NSArray *_trackingCodes;
    FBFeedSecondaryActionContext *_context;
    id <FBFeedSeeMoreContentHandler><FBFeedSeeMoreContentUIFactory> _handler;
}

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)icon;
- (id)detail;
- (id)title;
- (void)performWithSourceView:(id)arg1 sourceRect:(struct CGRect)arg2;
- (id)initWithUnit:(id)arg1 handler:(id)arg2 trackingCodes:(id)arg3 context:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

