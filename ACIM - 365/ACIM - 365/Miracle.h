//
//  Miracle.h
//  ACIM - 365
//
//  Created by Josh Montross on 8/12/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Miracle : NSManagedObject

@property (nonatomic, retain) NSNumber * day;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * lesson;

@end
