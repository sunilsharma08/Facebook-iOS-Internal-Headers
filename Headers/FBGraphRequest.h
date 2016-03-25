//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGraphBatchParticipatingRequest.h"

#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface FBGraphRequest : FBGraphBatchParticipatingRequest <NSCopying>
{
    NSString *_path;
    NSString *_httpMethod;
    NSDictionary *_parameters;
    NSString *_relativePath;
    BOOL _shouldHandleCookies;
    BOOL _sentUDPPrimingPacket;
    BOOL _useMultipartForm;
    CDUnknownBlockType _responseHandlerFactory;
    NSString *_version;
}

@property(nonatomic) BOOL useMultipartForm; // @synthesize useMultipartForm=_useMultipartForm;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) BOOL sentUDPPrimingPacket; // @synthesize sentUDPPrimingPacket=_sentUDPPrimingPacket;
- (void)setResponseHandlerFactory:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)responseHandlerFactory;
@property(nonatomic) BOOL shouldHandleCookies; // @synthesize shouldHandleCookies=_shouldHandleCookies;
- (void).cxx_destruct;
- (id)batchParameters;
- (id)parameters;
- (id)relativePath;
- (id)host;
- (id)httpMethod;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)debugDescription;
- (void)copyMembersFromRequest:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)requestForUDPPriming;
- (void)setUDPPrimedChannelID:(id)arg1 withRequestForHeader:(id)arg2;
@property(nonatomic) BOOL includeMigrationBundle;
- (void)removeQueryParameterForKey:(id)arg1;
- (void)setQueryParameter:(id)arg1 forKey:(id)arg2;
- (id)description;
- (id)init;
- (id)initWithPath:(id)arg1 parameters:(id)arg2 httpMethod:(id)arg3 friendlyName:(id)arg4 callerClass:(Class)arg5;
- (id)initWithPath:(id)arg1 parameters:(id)arg2 httpMethod:(id)arg3;

@end

