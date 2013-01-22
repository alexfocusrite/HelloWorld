//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by Alex Lucas on 21/01/2013.
//  Copyright (c) 2013 Alex Lucas. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (weak, nonatomic) IBOutlet UITextField *textField;
- (IBAction)changeGreeting:(id)sender;
@property (copy, nonatomic) NSString *userName;

@end
