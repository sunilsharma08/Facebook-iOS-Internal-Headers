//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@protocol FBAsyncTransactionContainer
@property(readonly, nonatomic) unsigned int fb_asyncTransactionContainerState;
@property(nonatomic, getter=fb_isAsyncTransactionContainer, setter=fb_setAsyncTransactionContainer:) BOOL fb_asyncTransactionContainer;
- (void)fb_asyncTransactionContainerStateDidChange;
- (void)fb_cancelAsyncTransactions;
@end

