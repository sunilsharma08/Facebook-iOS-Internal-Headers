//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBMediaSetRequestProvider-Protocol.h"

@class NSString;

@interface FBTaggableFamilyNonUserMembersRequestProvider : NSObject <FBMediaSetRequestProvider>
{
    NSString *_familyMemberID;
}

- (void).cxx_destruct;
- (id)mediaSetTitleForResponse:(id)arg1 session:(id)arg2;
- (const struct FBGraphQLFieldSet *)edgeFieldSet;
- (id)connectionPageForResponse:(id)arg1;
- (id)connectionSyncStore:(id)arg1 findRequest:(id)arg2;
- (id)connectionSyncStore:(id)arg1 previousRequestBefore:(id)arg2;
- (id)connectionSyncStore:(id)arg1 nextRequestAfter:(id)arg2;
- (id)requestProviderID;
- (id)familyMemberForResponse:(id)arg1;
- (id)initWithFamilyMemberID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

