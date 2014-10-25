//
//  MasterViewController.h
//  BlogReader
//
//  Created by Hannah Gibson on 10/25/14.
//  Copyright (c) 2014 Hannah Gibson. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

