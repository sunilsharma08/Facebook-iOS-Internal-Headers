//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBComposerBootstrapContent, NSArray, NSDictionary, NSString, UIActionSheet, UIView;
@protocol FBComposerFlowDelegate, FBQueriedReactionUnitFieldsProtocol, FBReactionHeaderAdapter;

@protocol FBReactionHeaderAdapterDelegate <NSObject>
- (void)replaceUnit:(id <FBQueriedReactionUnitFieldsProtocol>)arg1 withUnit:(id <FBQueriedReactionUnitFieldsProtocol>)arg2 forReactionHeaderAdapter:(id <FBReactionHeaderAdapter>)arg3;
- (void)hideUnit:(id <FBQueriedReactionUnitFieldsProtocol>)arg1 forReactionHeaderAdapter:(id <FBReactionHeaderAdapter>)arg2;
- (void)presentActionSheet:(UIActionSheet *)arg1 forReactionHeaderAdapter:(id <FBReactionHeaderAdapter>)arg2;
- (void)presentComposerWithBootstrapContent:(FBComposerBootstrapContent *)arg1 delegate:(id <FBComposerFlowDelegate>)arg2 forReactionHeaderAdapter:(id <FBReactionHeaderAdapter>)arg3;
- (void)userDidPerformInteraction:(NSString *)arg1 withExtras:(NSDictionary *)arg2 forReactionHeaderAdapter:(id <FBReactionHeaderAdapter>)arg3;
- (void)displaySecondaryActions:(NSArray *)arg1 fromView:(UIView *)arg2 forReactionHeaderAdapter:(id <FBReactionHeaderAdapter>)arg3;
@end

