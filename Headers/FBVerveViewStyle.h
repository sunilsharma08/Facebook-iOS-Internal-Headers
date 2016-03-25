//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBVerveNode.h"

@class FBVerveViewState, NSDictionary, NSString;

@interface FBVerveViewStyle : FBVerveNode
{
    FBVerveViewState *_baseState;
    FBVerveViewState *_currentState;
    Class _viewClass;
    NSString *_name;
    NSDictionary *_states;
}

+ (Class)FBVerve_getProperties:(CDStruct_183601bc **)arg1 count:(unsigned int *)arg2;
@property(readonly, nonatomic) Class viewClass; // @synthesize viewClass=_viewClass;
- (void).cxx_destruct;
- (id)JSONDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (id)copyNodeWithFlags:(unsigned int)arg1;
- (void)addResourceNamesToSet:(id)arg1;
@property(readonly, nonatomic) FBVerveViewState *baseState;
- (id)initWithViewClass:(Class)arg1;

// Remaining properties
@property(retain, nonatomic) FBVerveViewState *currentState; // @dynamic currentState;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSDictionary *states; // @dynamic states;

@end

