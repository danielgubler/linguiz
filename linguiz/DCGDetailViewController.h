//
//  DCGDetailViewController.h
//  linguiz
//
//  Created by Daniel Gubler on 7/28/14.
//
//

#import <UIKit/UIKit.h>

@interface DCGDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
