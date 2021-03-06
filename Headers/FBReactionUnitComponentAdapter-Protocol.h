//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBReactionAdapterContext, NSEnumerator, NSIndexPath, NSString, UIView;
@protocol FBQueriedReactionUnitComponentFieldsProtocol, FBQueriedReactionUnitFieldsProtocol, FBReactionUnitComponentAdapterDelegate;

@protocol FBReactionUnitComponentAdapter <NSObject>
@property(nonatomic) __weak id <FBReactionUnitComponentAdapterDelegate> delegate;
- (void)updateUnitComponentReloadingStateToIsReloading:(BOOL)arg1;
- (BOOL)isHighlightable;
- (BOOL)performMagicTap;
- (UIView *)componentView;
- (id)initWithReactionContext:(FBReactionAdapterContext *)arg1 resultStyle:(NSString *)arg2 reactionUnit:(id <FBQueriedReactionUnitFieldsProtocol>)arg3 reactionUnitComponent:(id <FBQueriedReactionUnitComponentFieldsProtocol>)arg4 isFirst:(BOOL)arg5 isLast:(BOOL)arg6 indexPath:(NSIndexPath *)arg7;

@optional
- (NSEnumerator *)cardViewLoadingBlockEnumerator;
- (void)didEndDisplayingUnitComponent;
- (void)willDisplayUnitComponent;
@end

