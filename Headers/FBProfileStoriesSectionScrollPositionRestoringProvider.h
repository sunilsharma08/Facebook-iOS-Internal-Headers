//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBScrollPositionRestoringScrollViewRestorationIndexPathProvider-Protocol.h"
#import "FBScrollPositionRestoringTableViewRowIdentifierProvider-Protocol.h"

@class NSString, UITableView;
@protocol FBProfileStoriesSectionIdentifierProvider, FBSectionedDataSourceReading;

@interface FBProfileStoriesSectionScrollPositionRestoringProvider : NSObject <FBScrollPositionRestoringScrollViewRestorationIndexPathProvider, FBScrollPositionRestoringTableViewRowIdentifierProvider>
{
    UITableView *_tableView;
    id <FBSectionedDataSourceReading> _readInterface;
    unsigned int _storiesSectionStartIndex;
    id <FBProfileStoriesSectionIdentifierProvider> _storiesSectionIdentifierProvider;
}

@property(nonatomic) __weak id <FBProfileStoriesSectionIdentifierProvider> storiesSectionIdentifierProvider; // @synthesize storiesSectionIdentifierProvider=_storiesSectionIdentifierProvider;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 indexPathForRowWithIdentifier:(id)arg2;
- (id)tableView:(id)arg1 identifierForRowAtIndexPath:(id)arg2;
- (id)indexPathForScrollPositionRestorationInScrollView:(id)arg1;
- (id)initWithTableView:(id)arg1 readInterface:(id)arg2 storiesSectionStartIndex:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

