//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBDocumentElementStoryBlockAdapter.h"

@class FBMemDocumentMapElement, FBRichStoryEntityBlock, NSDictionary;

@interface FBMapElementStoryBlockAdapter : FBDocumentElementStoryBlockAdapter
{
    NSDictionary *_annotations;
    FBRichStoryEntityBlock *_block;
    FBMemDocumentMapElement *_mapElement;
    NSDictionary *_presentationAttributes;
}

+ (id)adapterWithDataModel:(id)arg1;
+ (BOOL)canAdaptDataModel:(id)arg1;
- (void).cxx_destruct;
- (id)viewModel;
- (id)presentationAttributes;
- (id)annotations;
- (id)initWithDataModel:(id)arg1;

@end

