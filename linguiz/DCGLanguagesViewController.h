//
//  DCGMasterViewController.h
//  linguiz
//
//  Created by Daniel Gubler on 7/28/14.
//
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@class DCGLanguageDetailViewController;

@interface DCGLanguagesViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) DCGLanguageDetailViewController *detailViewController;
@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
