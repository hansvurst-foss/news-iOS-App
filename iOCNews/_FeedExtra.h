// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to FeedExtra.h instead.

#import <CoreData/CoreData.h>


extern const struct FeedExtraAttributes {
	__unsafe_unretained NSString *articleCount;
	__unsafe_unretained NSString *lastModified;
	__unsafe_unretained NSString *preferWeb;
	__unsafe_unretained NSString *useReader;
} FeedExtraAttributes;

extern const struct FeedExtraRelationships {
	__unsafe_unretained NSString *parent;
} FeedExtraRelationships;

extern const struct FeedExtraFetchedProperties {
} FeedExtraFetchedProperties;

@class Feed;






@interface FeedExtraID : NSManagedObjectID {}
@end

@interface _FeedExtra : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (FeedExtraID*)objectID;





@property (nonatomic, strong) NSNumber* articleCount;



@property int32_t articleCountValue;
- (int32_t)articleCountValue;
- (void)setArticleCountValue:(int32_t)value_;

//- (BOOL)validateArticleCount:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSNumber* lastModified;



@property int32_t lastModifiedValue;
- (int32_t)lastModifiedValue;
- (void)setLastModifiedValue:(int32_t)value_;

//- (BOOL)validateLastModified:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSNumber* preferWeb;



@property BOOL preferWebValue;
- (BOOL)preferWebValue;
- (void)setPreferWebValue:(BOOL)value_;

//- (BOOL)validatePreferWeb:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSNumber* useReader;



@property BOOL useReaderValue;
- (BOOL)useReaderValue;
- (void)setUseReaderValue:(BOOL)value_;

//- (BOOL)validateUseReader:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) Feed *parent;

//- (BOOL)validateParent:(id*)value_ error:(NSError**)error_;





@end

@interface _FeedExtra (CoreDataGeneratedAccessors)

@end

@interface _FeedExtra (CoreDataGeneratedPrimitiveAccessors)


- (NSNumber*)primitiveArticleCount;
- (void)setPrimitiveArticleCount:(NSNumber*)value;

- (int32_t)primitiveArticleCountValue;
- (void)setPrimitiveArticleCountValue:(int32_t)value_;




- (NSNumber*)primitiveLastModified;
- (void)setPrimitiveLastModified:(NSNumber*)value;

- (int32_t)primitiveLastModifiedValue;
- (void)setPrimitiveLastModifiedValue:(int32_t)value_;




- (NSNumber*)primitivePreferWeb;
- (void)setPrimitivePreferWeb:(NSNumber*)value;

- (BOOL)primitivePreferWebValue;
- (void)setPrimitivePreferWebValue:(BOOL)value_;




- (NSNumber*)primitiveUseReader;
- (void)setPrimitiveUseReader:(NSNumber*)value;

- (BOOL)primitiveUseReaderValue;
- (void)setPrimitiveUseReaderValue:(BOOL)value_;





- (Feed*)primitiveParent;
- (void)setPrimitiveParent:(Feed*)value;


@end
