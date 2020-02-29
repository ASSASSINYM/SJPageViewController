//
//  SJPageMenuItemViewDefines.h
//  SJPageViewController
//
//  Created by BlueDancer on 2020/2/11.
//  Copyright © 2020 changsanjiang@gmail.com. All rights reserved.
//

#ifndef SJPageMenuItemViewDefines_h
#define SJPageMenuItemViewDefines_h
#import <UIKit/UIKit.h>
@protocol SJPageMenuItemView;

NS_ASSUME_NONNULL_BEGIN
@protocol SJPageMenuItemView <NSObject>
@property (nonatomic, strong, null_resettable) UIColor *tintColor;
- (void)sizeToFit;
@end
NS_ASSUME_NONNULL_END
#endif /* SJPageMenuItemViewDefines_h */
