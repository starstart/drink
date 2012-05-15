//
//  MADataStore.h
//  Map
//
//  Created by App on 2011/10/17.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

#import "Book.h"

extern NSString * const kMADataStore_hasPerformedInitialImport;

@interface MADataStore : NSObject

+ (id) defaultStore;
- (NSManagedObjectContext *) disposableMOC;

+ (BOOL) hasPerformedInitialImport;
- (void) importData;

@end
