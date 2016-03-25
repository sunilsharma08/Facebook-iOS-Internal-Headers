//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBGraphQLQuery, NSDictionary, NSManagedObjectContext;
@protocol FBGraphQLObjectFactory;

@protocol FBGraphQLResponseParserImpl <NSObject>
@property(nonatomic) BOOL allowResponsesWithStrippedNulls;
@property(readonly, retain, nonatomic) id <FBGraphQLObjectFactory> objectFactory;
- (NSDictionary *)parse:(NSDictionary *)arg1 query:(FBGraphQLQuery *)arg2 managedObjectContext:(NSManagedObjectContext *)arg3 error:(id *)arg4;
@end

