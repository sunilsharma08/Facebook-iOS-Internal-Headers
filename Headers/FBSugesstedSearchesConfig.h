//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBExperimentContext.h"

@class NSString;

@interface FBSugesstedSearchesConfig : FBExperimentContext
{
    BOOL _enabled;
    BOOL _hideSuggestedSearchAfterTapped;
    BOOL _suggestedSearchesBeforeRecentSearches;
    NSString *_sectionName;
    int _impressionLimitForSuggestedSearch;
    int _maxNumberOfSuggestedSearches;
}

+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) BOOL suggestedSearchesBeforeRecentSearches; // @synthesize suggestedSearchesBeforeRecentSearches=_suggestedSearchesBeforeRecentSearches;
@property(readonly, nonatomic) int maxNumberOfSuggestedSearches; // @synthesize maxNumberOfSuggestedSearches=_maxNumberOfSuggestedSearches;
@property(readonly, nonatomic) BOOL hideSuggestedSearchAfterTapped; // @synthesize hideSuggestedSearchAfterTapped=_hideSuggestedSearchAfterTapped;
@property(readonly, nonatomic) int impressionLimitForSuggestedSearch; // @synthesize impressionLimitForSuggestedSearch=_impressionLimitForSuggestedSearch;
@property(readonly, copy, nonatomic) NSString *sectionName; // @synthesize sectionName=_sectionName;
@property(readonly, nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;

@end

