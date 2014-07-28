//
//  DCGMasterViewController.h
//  linguiz
//
//  Created by Daniel Gubler on 7/28/14.
//
//

#import <UIKit/UIKit.h>

@class DCGDetailViewController;

#import <CoreData/CoreData.h>

@interface DCGMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) DCGDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
