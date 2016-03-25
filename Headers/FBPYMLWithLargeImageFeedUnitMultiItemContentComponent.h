//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBFeedDynamicSecondaryActionComponent, FBFeedHScrollPaginatorComponent, FBMemPYMLWithLargeImageFeedUnit, FBPYMLWithLargeImageFeedUnitPagesComponent;

@interface FBPYMLWithLargeImageFeedUnitMultiItemContentComponent : CKCompositeComponent
{
    FBFeedDynamicSecondaryActionComponent *_secondaryActionComponent;
    BOOL _isPaginatorEnabled;
    unsigned int _numDotsPerPage;
    unsigned int _numTotalStories;
    FBFeedHScrollPaginatorComponent *_paginatorComponent;
    FBPYMLWithLargeImageFeedUnitPagesComponent *_contentComponent;
    FBMemPYMLWithLargeImageFeedUnit *_unit;
    BOOL _isPaginatorInteractionEnabled;
}

+ (id)newWithUnit:(id)arg1 insets:(struct UIEdgeInsets)arg2 toolbox:(id)arg3;
- (void).cxx_destruct;
- (void)didPanPaginator:(id)arg1 panRecognizer:(id)arg2;
- (void)didTapPaginator:(id)arg1 tapRecognizer:(id)arg2;

@end

