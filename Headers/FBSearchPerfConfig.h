//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBSearchPerfConfig : FBExperimentContext
{
    BOOL _useGlobalSuggestionCache;
    BOOL _useRecentSearchesInBootstrap;
}

+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) BOOL useRecentSearchesInBootstrap; // @synthesize useRecentSearchesInBootstrap=_useRecentSearchesInBootstrap;
@property(readonly, nonatomic) BOOL useGlobalSuggestionCache; // @synthesize useGlobalSuggestionCache=_useGlobalSuggestionCache;

@end

