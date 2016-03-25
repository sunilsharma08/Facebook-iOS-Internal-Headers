//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAdditionalSectionDelegate-Protocol.h"
#import "FBBaseFetchedResultsDataSource-Protocol.h"
#import "FBBaseFetchedResultsDataSourceDelegate-Protocol.h"

@class FBAdditionalSection, FBUserSession, NSMutableArray, NSString;
@protocol FBBaseFetchedResultsDataSource, FBBaseFetchedResultsDataSourceDelegate, FBTableViewMutating;

@interface FBFetchedWithAdditionalSuggestionsDataSource : NSObject <FBBaseFetchedResultsDataSourceDelegate, FBBaseFetchedResultsDataSource, FBAdditionalSectionDelegate>
{
    NSMutableArray *_additionalSections;
    FBUserSession *_session;
    FBAdditionalSection *_fallbackSection;
    id <FBBaseFetchedResultsDataSourceDelegate> _delegate;
    NSString *_headerTitleOverride;
    id <FBBaseFetchedResultsDataSource> _baseDataSource;
}

@property(readonly, nonatomic) id <FBBaseFetchedResultsDataSource> baseDataSource; // @synthesize baseDataSource=_baseDataSource;
@property(copy, nonatomic) NSString *headerTitleOverride; // @synthesize headerTitleOverride=_headerTitleOverride;
@property(nonatomic) __weak id <FBBaseFetchedResultsDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)_indexOfSectionName:(id)arg1;
- (void)_reloadSection:(id)arg1;
- (BOOL)_isFallbackSection:(id)arg1;
- (BOOL)_isAdditionalSection:(id)arg1;
- (BOOL)_additionalSectionsLoadedEmpty;
- (BOOL)_isSectionLoaded:(id)arg1;
- (void)_replaceSectionsWithFallback;
- (void)fetchedResultsDataSourceDidFetch:(id)arg1;
- (BOOL)fetchedResultsDataSource:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)fetchedResultsDataSource:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)fetchedResultsDataSourceDidUpdateTableView:(id)arg1;
- (unsigned int)fetchedResultsDataSource:(id)arg1 numberOfRowsForNumberOfObjects:(unsigned int)arg2;
- (void)reloadResultForObject:(id)arg1;
- (void)reloadResultsForSection:(id)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)numberOfRowsInSection:(int)arg1;
- (int)numberOfHiddenResultsForSection:(int)arg1;
- (BOOL)isLoadingCellWithIndex:(id)arg1;
- (BOOL)isMoreCellIndex:(id)arg1;
- (void)showAllForSection:(int)arg1;
- (BOOL)isSectionLoaded:(int)arg1;
- (id)indexPathsForObject:(id)arg1;
- (id)objectAtIndexPath:(id)arg1;
- (void)fetch;
@property(nonatomic) __weak id <FBTableViewMutating> tableViewMutator;
@property(readonly, nonatomic) unsigned int numberOfResults;
@property(nonatomic, getter=isActive) BOOL active;
- (int)additionalSectionCount;
- (id)additionalSectionAtIndexPath:(id)arg1;
- (void)loadSuggestedSections;
- (void)dealloc;
- (id)initWithBaseFetchedResultsDataSource:(id)arg1 additionalSections:(id)arg2 fallbackSection:(id)arg3 session:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

