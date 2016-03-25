//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@interface FBSearchResultsConfig : FBValueObject <NSCopying>
{
    BOOL _useGraphSearchQuery;
    BOOL _needModules;
    unsigned int _resultType;
    unsigned int _resultVertical;
    unsigned int _resultsSection;
}

@property(readonly, nonatomic) unsigned int resultsSection; // @synthesize resultsSection=_resultsSection;
@property(readonly, nonatomic) BOOL needModules; // @synthesize needModules=_needModules;
@property(readonly, nonatomic) BOOL useGraphSearchQuery; // @synthesize useGraphSearchQuery=_useGraphSearchQuery;
@property(readonly, nonatomic) unsigned int resultVertical; // @synthesize resultVertical=_resultVertical;
@property(readonly, nonatomic) unsigned int resultType; // @synthesize resultType=_resultType;
- (id)initWithResultType:(unsigned int)arg1 resultVertical:(unsigned int)arg2 useGraphSearchQuery:(BOOL)arg3 needModules:(BOOL)arg4 resultsSection:(unsigned int)arg5;

@end

