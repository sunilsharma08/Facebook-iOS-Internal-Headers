//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBComposerPublisherData, FBMediaUploadItemManager, FBPublicationResponse, NSError, NSString;
@protocol FBMediaPublishingManagerDelegate, FBNetworkerRequestStatus;

@protocol FBMediaPublishingManagerProtocol <NSObject>
@property(retain, nonatomic) FBMediaUploadItemManager *uploadManager;
@property(nonatomic) __weak id <FBMediaPublishingManagerDelegate> delegate;
- (void)publishRequestFailWithError:(NSError *)arg1 status:(id <FBNetworkerRequestStatus>)arg2 numberOfRequestsSent:(int)arg3;
- (void)publishRequestSucceedWithResult:(FBPublicationResponse *)arg1 status:(id <FBNetworkerRequestStatus>)arg2 numberOfRequestsSent:(int)arg3;
- (void)publishRequestDidStart;
- (void)publishRequestWillStart:(NSString *)arg1;
- (void)startPublishAttempt:(BOOL)arg1;
- (void)publishFlowDidTerminallyFail;
- (void)publishFlowDidIncompleteWithState:(NSString *)arg1;
- (void)publishFlowDidRetryWithPublisherData:(FBComposerPublisherData *)arg1 source:(unsigned int)arg2;
- (void)publishFlowDidPauseWithPublisherData:(FBComposerPublisherData *)arg1;
- (void)publishFlowDidCancelWithPublisherData:(FBComposerPublisherData *)arg1 reason:(NSString *)arg2;
- (void)publishFlowDidStartWithPublisherData:(FBComposerPublisherData *)arg1;
@end

