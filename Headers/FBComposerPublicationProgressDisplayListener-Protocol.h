//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBComposerPublisherData, FBPublicationResponse, NSString;

@protocol FBComposerPublicationProgressDisplayListener <NSObject>
- (void)uploadViewUpdatedForSuccessOfPublicationForPublisherData:(FBComposerPublisherData *)arg1 response:(FBPublicationResponse *)arg2;
- (void)uploadViewUpdatedForTransientFailureOfPublicationForPublisherData:(FBComposerPublisherData *)arg1;
- (void)uploadViewUpdatedForTerminalFailureOfPublicationForPublisherData:(FBComposerPublisherData *)arg1;
- (void)uploadViewUpdatedForCancellationOfPublicationForPublisherData:(FBComposerPublisherData *)arg1;
- (void)retryButtonTappedForPublisherData:(FBComposerPublisherData *)arg1;
- (void)dismissButtonTappedForPublisherData:(FBComposerPublisherData *)arg1;
- (void)cancelButtonTappedForPublisherData:(FBComposerPublisherData *)arg1 withReason:(NSString *)arg2;
@end

