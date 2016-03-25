//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBSugesstedSearchesConfig, FBUserSession, NSArray, NSAttributedString, NSMutableDictionary;

@interface FBSearchNullStateSuggestedSearchesController : NSObject
{
    FBUserSession *_session;
    FBSugesstedSearchesConfig *_suggestedSearchesConfig;
    NSAttributedString *_suggestedSearchesSectionTitle;
    NSArray *_cachedSuggestedSearchesSuggestions;
    NSMutableDictionary *_suggestedSearchesPreferencesValue;
}

- (void).cxx_destruct;
- (void)_savePreferences;
- (void)_loadPreferences;
- (void)_cleanPreferencesWithReceivedSuggestions;
- (void)_filterSuggestions;
- (id)_createSuggestedSearchesSuggestions:(id)arg1;
- (void)requestSuggestedSearchesWithCompletionBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2 callbackPerformer:(id)arg3;
- (BOOL)isSectionTitleSuggestedSearches:(id)arg1;
- (void)clearCachedData;
- (void)handleSuggestedSearchImpressions:(id)arg1;
- (void)handleSuggestedSearchSelection:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *suggestedSearchesSuggestions;
@property(readonly, copy, nonatomic) NSAttributedString *suggestedSearchesSectionTitle;
- (id)initWithSession:(id)arg1;

@end

