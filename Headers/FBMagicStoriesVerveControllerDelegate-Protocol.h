//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class FBMagicStoriesVerveController, NSArray, NSError;
@protocol FBDisplayableMediaViewProvider;

@protocol FBMagicStoriesVerveControllerDelegate
- (void)verveViewShouldPresentPhotoControllerWithPhotos:(NSArray *)arg1 selectedIndex:(unsigned int)arg2 photoViewProvider:(id <FBDisplayableMediaViewProvider>)arg3;
- (void)verveViewDidCreatePageModel;
- (void)verveView:(FBMagicStoriesVerveController *)arg1 failedToFetchTemplateWithError:(NSError *)arg2;
- (void)verveViewDidFetchTemplate:(FBMagicStoriesVerveController *)arg1;
@end

