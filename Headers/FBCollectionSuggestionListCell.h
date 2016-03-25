//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBCollectionListCell.h"

@class FBMemPerson, FBMemTimelineAppSection, FBUserSession;
@protocol FBQueriedNodeFieldsProtocol;

@interface FBCollectionSuggestionListCell : FBCollectionListCell
{
    FBUserSession *_session;
    id _observation;
    id <FBQueriedNodeFieldsProtocol> _suggestedItem;
    FBMemTimelineAppSection *_collectionSection;
    FBMemPerson *_collectionOwner;
    BOOL _isDisplayedInSuggestionsViewController;
}

@property(nonatomic) BOOL isDisplayedInSuggestionsViewController; // @synthesize isDisplayedInSuggestionsViewController=_isDisplayedInSuggestionsViewController;
- (void).cxx_destruct;
- (BOOL)renderingInCard;
- (BOOL)hasCustomBorder;
- (id)subtitleString;
- (id)titleString;
- (id)imageURLString;
- (void)updateImageView;
- (void)configureAccessoryButtonView;
- (void)_objectCollectionsContainingChanged:(id)arg1;
- (void)setSuggestedItem:(id)arg1 inCollectionSection:(id)arg2 collectionOwner:(id)arg3;
- (id)backgroundColorWhenHighlighted:(BOOL)arg1;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1 session:(id)arg2;

@end

