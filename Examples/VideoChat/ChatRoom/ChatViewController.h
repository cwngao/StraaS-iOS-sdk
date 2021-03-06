//
//  MessageViewController.h
//  Messenger
//
//  Created by Ignacio Romero Zurbuchen on 8/15/14.
//  Copyright (c) 2014 Slack Technologies, Inc. All rights reserved.
//

#import <SlackTextViewController/SLKTextViewController.h>
#import "ChatStickerDelegate.h"
#import "StickerInputViewDelegate.h"


@interface ChatViewController : SLKTextViewController<StickerInputViewDelegate>

@property (weak, nonatomic) id<ChatStickerDelegate> delegate;

@end
