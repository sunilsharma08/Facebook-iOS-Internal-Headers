//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBTableViewSectionDataSource-Protocol.h"
#import "FBTimelineSectionButtonViewDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBUserSession, NSString, UIFont;
@protocol FBTableViewMutating, FBTimelineButtonDataSourceDelegate;

@interface FBTimelineButtonDataSource : NSObject <FBTimelineSectionButtonViewDelegate, FBTableViewSectionDataSource, UITableViewDelegate>
{
    float _cellHeight;
    FBUserSession *_session;
    BOOL _active;
    BOOL _showBottomSeparator;
    BOOL _disableUserInteraction;
    BOOL _useNarrowSeparators;
    id <FBTableViewMutating> _tableViewMutator;
    id <FBTimelineButtonDataSourceDelegate> _delegate;
    NSString *_buttonText;
    UIFont *_buttonFont;
    SEL _actionOverride;
    struct UIEdgeInsets _insets;
}

@property(nonatomic) BOOL useNarrowSeparators; // @synthesize useNarrowSeparators=_useNarrowSeparators;
@property(nonatomic) BOOL disableUserInteraction; // @synthesize disableUserInteraction=_disableUserInteraction;
@property(nonatomic) SEL actionOverride; // @synthesize actionOverride=_actionOverride;
@property(nonatomic) BOOL showBottomSeparator; // @synthesize showBottomSeparator=_showBottomSeparator;
@property(retain, nonatomic) UIFont *buttonFont; // @synthesize buttonFont=_buttonFont;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) __weak id <FBTimelineButtonDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(nonatomic) id <FBTableViewMutating> tableViewMutator; // @synthesize tableViewMutator=_tableViewMutator;
- (void).cxx_destruct;
- (id)_retrieveCell;
- (void)_updateCell:(id)arg1;
- (void)_update;
- (void)_calculateHeight;
- (void)_updateIfNecessary;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)sectionLabelTapped:(id)arg1;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

