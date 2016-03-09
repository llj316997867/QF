//
//  DetailViewController.h
//  kk
//
//  Created by 凡柳松 on 16/3/9.
//  Copyright © 2016年 凡柳松. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

