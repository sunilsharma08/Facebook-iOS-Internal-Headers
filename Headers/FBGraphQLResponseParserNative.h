//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBGraphQLResponseParserImpl-Protocol.h"

@class NSString;
@protocol FBGraphQLObjectFactory;

@interface FBGraphQLResponseParserNative : NSObject <FBGraphQLResponseParserImpl>
{
    const unordered_map_a1506d7e *_aliasMap;
    id <FBGraphQLObjectFactory> _objectFactory;
    BOOL _allowResponsesWithStrippedNulls;
}

@property(nonatomic) BOOL allowResponsesWithStrippedNulls; // @synthesize allowResponsesWithStrippedNulls=_allowResponsesWithStrippedNulls;
@property(readonly, retain, nonatomic) id <FBGraphQLObjectFactory> objectFactory; // @synthesize objectFactory=_objectFactory;
- (id)_parseTopLevelResult:(id)arg1 forNodelessQuery:(id)arg2 error:(id *)arg3;
- (id)parse:(id)arg1 query:(id)arg2 managedObjectContext:(id)arg3 error:(id *)arg4;
- (id)_topLevelResultsInResponse:(id)arg1 error:(id *)arg2;
- (id)_nodelessParseJSON:(id)arg1 forGraphQLField:(const struct GraphQLFieldDescriptionish *)arg2 withExplicitResultType:(const char *)arg3 forQueriedFieldSets:(const set_e2b71e5c *)arg4 expectPlural:(BOOL)arg5 error:(id *)arg6;
- (const char *)_creatableGraphQLTypeName:(const char *)arg1 forApparentGraphQLType:(const char *)arg2;
- (const char *)_nodelessResultGraphQLTypeNameInJSON:(id)arg1 forApparentGraphQLType:(const char *)arg2 error:(id *)arg3;
- (id)__type__NameInJSON:(id)arg1 error:(id *)arg2;
- (id)_schemaDrivenParseJSON:(id)arg1 forScalarGraphQLType:(const char *)arg2 expectPlural:(BOOL)arg3 error:(id *)arg4;
- (id)_nodelessSchemaDrivenParseJSON:(id)arg1 forGraphQLField:(const struct GraphQLFieldDescriptionish *)arg2 ofActualGraphQLType:(const char *)arg3 forQueriedFieldSets:(const set_e2b71e5c *)arg4 error:(id *)arg5;
- (id)_genericSchemaDrivenParseJSON:(id)arg1 forGraphQLField:(const struct GraphQLFieldDescriptionish *)arg2 ofActualGraphQLType:(const char *)arg3 forQueriedFieldSets:(const set_e2b71e5c *)arg4 withSubfieldsParseFunc:(CDUnknownFunctionPointerType)arg5 error:(id *)arg6;
- (BOOL)_nodelessParseSubfieldsOfModelObject:(id)arg1 ofActualGraphQLType:(const char *)arg2 forQueriedFieldSets:(const set_e2b71e5c *)arg3 JSON:(id)arg4 error:(id *)arg5;
- (void)dealloc;
- (id)initWithObjectFactory:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

