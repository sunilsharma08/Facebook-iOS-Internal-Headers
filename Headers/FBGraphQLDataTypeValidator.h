//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBContentValidating-Protocol.h"
#import "FBDataHooking-Protocol.h"

@class FBGraphQLQuery, NSData, NSString;

@interface FBGraphQLDataTypeValidator : NSObject <FBContentValidating, FBDataHooking>
{
    NSData *_data;
    FBGraphQLQuery *_query;
}

@property(readonly, retain, nonatomic) FBGraphQLQuery *query; // @synthesize query=_query;
- (BOOL)validateContent:(id)arg1 responseProcessor:(id)arg2 error:(id *)arg3;
- (void)hookResponseProcessor:(id)arg1 withData:(id)arg2;
- (void)dealloc;
- (id)initWithQuery:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

