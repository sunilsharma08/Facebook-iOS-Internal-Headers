//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBNetworkerRequest.h"

@class NSString;

@interface SBVaultDeviceQueryRequest : FBNetworkerRequest
{
    NSString *_identifier;
}

- (void).cxx_destruct;
- (id)networkRequest;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 callbackPerformer:(id)arg2;

@end

