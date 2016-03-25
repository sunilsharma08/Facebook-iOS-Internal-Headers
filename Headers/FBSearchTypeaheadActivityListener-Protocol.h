//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol FBSearchSuggestionProtocol;

@protocol FBSearchTypeaheadActivityListener <NSObject>

@optional
- (void)graphSearchWillOpenSearchResults;
- (void)graphSearchNullStateRecentSearchesExpandedWithModels:(NSArray *)arg1;
- (void)graphSearchDidTapOnSuggestedSearchAboutButton;
- (void)graphSearchDidTapOnRecentSearchEditButton;
- (void)graphSearchDidTapOnSuggestion:(id <FBSearchSuggestionProtocol>)arg1 position:(unsigned int)arg2;
- (void)graphSearchSuggestionWillAppear:(id <FBSearchSuggestionProtocol>)arg1 position:(unsigned int)arg2;
- (void)graphSearchCustomContentWasUpdatedWithResultsSesionId:(NSString *)arg1 didReceivedProfilePivots:(BOOL)arg2;
- (void)graphSearchContentWasUpdated;
@end

