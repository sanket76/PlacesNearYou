//
//  PNYPlaceDetails+CoreDataProperties.h
//  PlacesNearYou
//
//  Created by sanket likhe on 17/04/16.
//  Copyright © 2016 sanket likhe. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "PNYPlaceDetails.h"

NS_ASSUME_NONNULL_BEGIN

@interface PNYPlaceDetails (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *iD;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSString *address;
@property (nullable, nonatomic, retain) NSString *placeId;
@property (nullable, nonatomic, retain) NSData *image;
@property (nullable, nonatomic, retain) NSString *rating;
@property (nonatomic) BOOL isOpen;
@property (nullable, nonatomic, retain) NSString *latitude;
@property (nullable, nonatomic, retain) NSString *longitude;
@property (nullable, nonatomic, retain) NSString *usersLongitude;
@property (nullable, nonatomic, retain) NSString *usersLatitude;

@end

NS_ASSUME_NONNULL_END
