//
//  ZDKHelpCenterArticleRatingView.h
//  ZendeskSDK
//
//  Created by Ronan Mchugh on 16/05/2017.
//  Copyright © 2017 Zendesk. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZDKHelpCenterArticleRatingHandlerProtocol.h"

@interface ZDKHelpCenterArticleRatingView : UIView
@property (weak, nonatomic) IBOutlet UIButton *downVoteButton;
@property (weak, nonatomic) IBOutlet UILabel *articleRatingLabel;
@property (weak, nonatomic) IBOutlet UIButton *upVoteButton;

@property (weak, nonatomic) id<ZDKHelpCenterArticleRatingHandlerProtocol> delegate;

- (void)updateButtonStatesForButtonAtIndexSelected:(NSUInteger)index;

@end
