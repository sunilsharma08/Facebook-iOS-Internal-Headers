//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class FBAuthenticationHandlerResponse, NSError;
@protocol FBAuthControlling;

@protocol FBAuthControllingDelegate
- (void)authenticationDeferred:(id <FBAuthControlling>)arg1 withReason:(NSError *)arg2;
- (void)authenticationCompleted:(id <FBAuthControlling>)arg1 withResponse:(FBAuthenticationHandlerResponse *)arg2;
@end

