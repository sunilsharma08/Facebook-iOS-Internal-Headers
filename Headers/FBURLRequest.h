//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBNetworkRequest.h"

#import "FBURLRequestDefiningWithUrlBody-Protocol.h"

@class NSData, NSDictionary, NSString, NSURL;

@interface FBURLRequest : FBNetworkRequest <FBURLRequestDefiningWithUrlBody>
{
    BOOL _includeAccessToken;
    NSURL *_URL;
    NSData *_body;
    NSString *_httpMethod;
}

@property(nonatomic) BOOL includeAccessToken; // @synthesize includeAccessToken=_includeAccessToken;
@property(readonly, copy, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
@property(readonly, nonatomic) NSData *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithHttpMethod:(id)arg1 body:(id)arg2 URL:(id)arg3;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *headers;
@property(readonly, nonatomic) BOOL shouldHandleCookies;
@property(readonly) Class superclass;

@end

