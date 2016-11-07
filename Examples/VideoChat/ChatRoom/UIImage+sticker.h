//
//  UIImage+sticker.h
//  VideoChat
//
//  Created by Lee on 03/11/2016.
//  Copyright © 2016 StraaS.io. All rights reserved.
//

#import <UIKit/UIKit.h>
static CGFloat const stickerMainImageSideLength = 30.0;

@interface UIImage (sticker)

+ (instancetype)imageWithStickerMainImage:(NSString *)mainImage;
+ (instancetype)desaturatedImage:(UIImage *)image;
+ (instancetype)imageWithImage:(UIImage *)image scaledToSize:(CGSize)newSize;

@end
