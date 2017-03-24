//
//  TableActivity+CoreDataProperties.m
//  Nextcloud
//
//  Created by Marino Faggiana on 01/03/17.
//  Copyright © 2017 TWS. All rights reserved.
//

#import "TableActivity+CoreDataProperties.h"

@implementation TableActivity (CoreDataProperties)

+ (NSFetchRequest<TableActivity *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"TableActivity"];
}

@dynamic account;
@dynamic action;
@dynamic date;
@dynamic file;
@dynamic fileID;
@dynamic idActivity;
@dynamic link;
@dynamic note;
@dynamic selector;
@dynamic type;
@dynamic verbose;

@end
