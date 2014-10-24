//
//  DogOwners.h
//  Assessment4
//
//  Created by MIKE LAND on 10/24/14.
//  Copyright (c) 2014 MobileMakers. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface DogOwners : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *belongsToOwner;
@end

@interface DogOwners (CoreDataGeneratedAccessors)

- (void)addBelongsToOwnerObject:(NSManagedObject *)value;
- (void)removeBelongsToOwnerObject:(NSManagedObject *)value;
- (void)addBelongsToOwner:(NSSet *)values;
- (void)removeBelongsToOwner:(NSSet *)values;

@end
