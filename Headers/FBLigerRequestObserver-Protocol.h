//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSError, NSHTTPURLResponse, NSURLRequest;

@protocol FBLigerRequestObserver
- (void)request:(NSURLRequest *)arg1 wasCancelledWithEvents:(const vector_31c84f95 *)arg2;
- (void)request:(NSURLRequest *)arg1 failedWithError:(NSError *)arg2 events:(const vector_31c84f95 *)arg3;
- (void)request:(NSURLRequest *)arg1 completedWithResponse:(NSHTTPURLResponse *)arg2 events:(const vector_31c84f95 *)arg3;
@end

