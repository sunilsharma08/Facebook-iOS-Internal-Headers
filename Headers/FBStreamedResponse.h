//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBMultipleResponding-Protocol.h"

@class FBResponse, NSDictionary, NSString;
@protocol FBRequest;

@interface FBStreamedResponse : NSObject <FBMultipleResponding>
{
    id <FBRequest> _request;
    NSDictionary *_headers;
    unsigned int _index;
    NSString *_name;
    FBResponse *_response;
}

@property(readonly, nonatomic) FBResponse *response; // @synthesize response=_response;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned int index; // @synthesize index=_index;
@property(readonly, copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(readonly, nonatomic) id <FBRequest> request; // @synthesize request=_request;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithRequest:(id)arg1 name:(id)arg2 headers:(id)arg3 content:(id)arg4 index:(unsigned int)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

