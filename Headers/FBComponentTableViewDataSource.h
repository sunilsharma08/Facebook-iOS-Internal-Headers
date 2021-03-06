//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CKComponentDataSourceDelegate-Protocol.h"
#import "FBComponentCellAppearanceEventDeprecatedListener-Protocol.h"
#import "FBComponentCellAppearanceEventListener-Protocol.h"
#import "FBSectionedDataSourceTransformerUpdateHandler-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CKComponentDataSource, FBComponentCellAppearanceEventDeprecatedListenerAnnouncer, FBComponentCellAppearanceEventListenerAnnouncer, FBComponentCellAppearanceTracker, FBComponentCellAppearanceTrackerDeprecated, FBComponentScrollEventRouter, FBComponentTableViewDataSourceEventListenerAnnouncer, FBComponentTableViewDataSourceSelectionEventListenerAnnouncer, FBSectionedDataSourceTransformer, NSString, UITableView;
@protocol CKComponentDeciding, CKComponentSuspendable, FBComponentDataSourceScrollEventHandler, FBComponentFallbackTableViewCellConfiguring, FBComponentTableViewCellProviding, FBComponentTableViewDataSourceAnimationDelegate, FBComponentTableViewDataSourceCellConfigProvider, FBComponentTableViewDataSourceEditingHandler, FBComponentTableViewDataSourceIndexPathMunger, FBComponentTableViewDataSourceSectionHeaderHandler, FBComponentTableViewDataSourceSelectionHandler, FBSectionedDataSourceReading, FBSectionedDataSourceWriting;

@interface FBComponentTableViewDataSource : NSObject <UITableViewDataSource, UITableViewDelegate, CKComponentDataSourceDelegate, FBComponentCellAppearanceEventListener, FBComponentCellAppearanceEventDeprecatedListener, FBSectionedDataSourceTransformerUpdateHandler>
{
    CKComponentDataSource *_componentDataSource;
    id <CKComponentDeciding> _decider;
    NSString *_identifier;
    FBSectionedDataSourceTransformer *_sectionedDataSourceReaderWriter;
    FBComponentScrollEventRouter *_scrollEventRouter;
    FBComponentCellAppearanceTracker *_cellAppearanceTracker;
    FBComponentCellAppearanceEventListenerAnnouncer *_cellAppearanceAnnouncer;
    FBComponentCellAppearanceTrackerDeprecated *_deprecatedCellAppearanceTracker;
    FBComponentCellAppearanceEventDeprecatedListenerAnnouncer *_deprecatedCellAppearanceAnnouncer;
    FBComponentTableViewDataSourceSelectionEventListenerAnnouncer *_selectionEventAnnouncer;
    FBComponentTableViewDataSourceEventListenerAnnouncer *_eventAnnouncer;
    BOOL _shouldCheckRowAnimations;
    struct unique_ptr<FBComponentTableViewDataSourceCellConfig, std::__1::default_delete<FBComponentTableViewDataSourceCellConfig>> _cellConfig;
    id <FBComponentTableViewDataSourceAnimationDelegate> _animationDelegate;
    id <FBComponentTableViewCellProviding> _fallbackCellProvider;
    id <FBComponentTableViewDataSourceCellConfigProvider> _cellConfigProvider;
    id <FBComponentTableViewDataSourceSelectionHandler> _selectionHandler;
    id <FBComponentTableViewDataSourceSectionHeaderHandler> _sectionHeaderHandler;
    id <FBComponentTableViewDataSourceEditingHandler> _editingHandler;
    UITableView *_tableView;
    id <FBComponentTableViewDataSourceIndexPathMunger> _indexPathMunger;
    id <FBComponentFallbackTableViewCellConfiguring> _fallbackCellConfigurer;
}

+ (void)initialize;
@property(nonatomic) __weak id <FBComponentFallbackTableViewCellConfiguring> fallbackCellConfigurer; // @synthesize fallbackCellConfigurer=_fallbackCellConfigurer;
@property(nonatomic) __weak id <FBComponentTableViewDataSourceIndexPathMunger> indexPathMunger; // @synthesize indexPathMunger=_indexPathMunger;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <FBComponentTableViewDataSourceEditingHandler> editingHandler; // @synthesize editingHandler=_editingHandler;
@property(nonatomic) __weak id <FBComponentTableViewDataSourceSectionHeaderHandler> sectionHeaderHandler; // @synthesize sectionHeaderHandler=_sectionHeaderHandler;
@property(nonatomic) __weak id <FBComponentTableViewDataSourceSelectionHandler> selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property(nonatomic) __weak id <FBComponentTableViewDataSourceCellConfigProvider> cellConfigProvider; // @synthesize cellConfigProvider=_cellConfigProvider;
@property(nonatomic) __weak id <FBComponentTableViewCellProviding> fallbackCellProvider; // @synthesize fallbackCellProvider=_fallbackCellProvider;
@property(nonatomic) __weak id <FBComponentTableViewDataSourceAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setTableViewWithoutHijackingDelegateAndDataSource:(id)arg1;
- (id)concurrentQueue;
- (void)removePreparationQueueListener:(id)arg1;
- (void)addPreparationQueueListener:(id)arg1;
- (void)updateContextAndEnqeueReload:(id)arg1;
- (BOOL)isComputingChanges;
- (void)componentDataSource:(id)arg1 didChangeSizeForObject:(id)arg2 atIndexPath:(id)arg3 animation:(const struct CKComponentBoundsAnimation *)arg4;
- (void)componentDataSource:(id)arg1 hasChangesOfTypes:(unsigned int)arg2 changesetApplicator:(CDUnknownBlockType)arg3 ticker:(CDUnknownBlockType)arg4;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)removeSelectionEventListener:(id)arg1;
- (void)addSelectionEventListener:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)componentDidDisappearFromCell:(id)arg1 model:(id)arg2;
- (void)componentWillAppearInCell:(id)arg1 model:(id)arg2;
- (void)removeAppearanceEventListenerDeprecated:(id)arg1;
- (void)addAppearanceEventListenerDeprecated:(id)arg1;
- (void)componentDidDisappearFromViewWithFrame:(struct CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3;
- (void)componentWillAppearInViewWithFrame:(struct CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3;
- (void)removeAppearanceEventListener:(id)arg1;
- (void)addAppearanceEventListener:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)removeScrollEventListener:(id)arg1;
- (void)addScrollEventListener:(id)arg1;
@property(nonatomic) __weak id <FBComponentDataSourceScrollEventHandler> scrollEventHandler;
- (void)sectionedDataSourceTransformer:(id)arg1 didEnqueueChangeset:(const struct Changeset *)arg2;
- (void)sectionedDataSourceTransformer:(id)arg1 willEnqueueChangeset:(const struct Changeset *)arg2;
- (void)removeEventListener:(id)arg1;
- (void)addEventListener:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)setTableViewAndReloadData:(id)arg1;
@property(readonly, nonatomic) id <CKComponentSuspendable> suspensionInterface;
@property(readonly, nonatomic) id <FBSectionedDataSourceWriting> writeInterface;
@property(readonly, nonatomic) id <FBSectionedDataSourceReading> readInterface;
- (void)dealloc;
- (id)init;
- (id)initWithComponentProvider:(Class)arg1 context:(id)arg2 constraintProvider:(id)arg3 identifier:(id)arg4;
- (id)initWithComponentProvider:(Class)arg1 context:(id)arg2 constraintProvider:(id)arg3 identifier:(id)arg4 decider:(id)arg5;
- (id)initWithDecider:(id)arg1 identifier:(id)arg2 componentDataSource:(id)arg3 sectionedDataSourceReaderWriter:(id)arg4 eventAnnouncer:(id)arg5 scrollEventRouter:(id)arg6 cellAppearanceTracker:(id)arg7 cellAppearanceAnnouncer:(id)arg8 deprecatedCellAppearanceTracker:(id)arg9 deprecatedCellAppearanceAnnouncer:(id)arg10 selectionEventAnnouncer:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

