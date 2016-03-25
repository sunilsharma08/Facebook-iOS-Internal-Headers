//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBMediaSetRequestProvider-Protocol.h"

@class NSString;

@interface FBAbstractMediaSetRequestProvider : NSObject <FBMediaSetRequestProvider>
{
    NSString *_accessTokenOverwrite;
    int _type;
    NSString *_targetID;
    unsigned int _pageSize;
}

@property(readonly, nonatomic) unsigned int pageSize; // @synthesize pageSize=_pageSize;
@property(readonly, copy, nonatomic) NSString *targetID; // @synthesize targetID=_targetID;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)mediaSetTitleForResponse:(id)arg1 session:(id)arg2;
- (const struct FBGraphQLFieldSet *)edgeFieldSet;
- (id)connectionPageForResponse:(id)arg1;
- (id)connectionSyncStore:(id)arg1 findRequest:(id)arg2;
- (id)connectionSyncStore:(id)arg1 previousRequestBefore:(id)arg2;
- (id)connectionSyncStore:(id)arg1 nextRequestAfter:(id)arg2;
- (id)requestProviderID;
- (id)queryForAfter:(id)arg1;
- (id)initWithTargetID:(id)arg1 type:(int)arg2 accessTokenOverride:(id)arg3 pageSize:(unsigned int)arg4;
- (id)initWithTargetID:(id)arg1 type:(int)arg2 accessTokenOverride:(id)arg3;
- (id)initWithMediaSetToken:(id)arg1;
- (id)initWithMediaSetID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

