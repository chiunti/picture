//
//  ViewController.h
//  takePicture
//
//  Created by Chiunti on 22/01/15.
//  Copyright (c) 2015 chiunti. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIImagePickerControllerDelegate>
{
 UIImagePickerController *imagePicker;
 IBOutlet UIImageView *imageView;
}
- (IBAction)btnPressed:(id)sender;

@end

