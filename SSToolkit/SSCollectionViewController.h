//
//  SSCollectionViewController.h
//  SSToolkit
//
//  Created by Sam Soffes on 8/26/10.
//  Copyright 2010-2011 Sam Soffes. All rights reserved.
//

#import "SSViewController.h"
#import "SSCollectionView.h"

/**
 Creates a controller object that manages a collection view.
 */
@interface SSCollectionViewController : SSViewController <SSCollectionViewDataSource, SSCollectionViewDelegate>

/**
 Returns the table view managed by the controller object. (read-only)
 */
@property (nonatomic, retain, readonly) SSCollectionView *collectionView;

@end
