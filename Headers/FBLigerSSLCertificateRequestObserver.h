//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBLigerSamplingRequestObserver.h"

@interface FBLigerSSLCertificateRequestObserver : FBLigerSamplingRequestObserver
{
}

- (void)logCertificateVerification:(id)arg1 stats:(const struct RequestStats *)arg2;
- (void)request:(id)arg1 wasCancelledWithEvents:(const vector_31c84f95 *)arg2;
- (void)request:(id)arg1 failedWithError:(id)arg2 events:(const vector_31c84f95 *)arg3;
- (void)request:(id)arg1 completedWithResponse:(id)arg2 events:(const vector_31c84f95 *)arg3;

@end

