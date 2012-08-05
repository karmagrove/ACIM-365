//
//  CalculatorModelController.h
//  ACIM - Daily Lessons from spiritual ear
//
//  Created by Josh Montross on 8/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CalculatorDataViewController;

@interface CalculatorModelController : NSObject <UIPageViewControllerDataSource>
- (CalculatorDataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(CalculatorDataViewController *)viewController;
@end
