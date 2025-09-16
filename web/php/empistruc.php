<?php
/*
.----------------------------------------------------------------------
. Program       : empistruc.php
.
. Function      : WA Health EMPI Interface Class for mapping WCF objects
.
. Modifications :
.----------------------------------------------------------------------
. V10.02.00 25/07/2011  Saroeun Soeur CAR 240712
.           New Program
.----------------------------------------------------------------------
.
PRGID     INIT      "empistruc.php"
VERSION   INIT      "V11.03.00"
PRGNAM    INIT      "WA Health EMPI Interface class for mapping WCF Objects"
.
.----------------------------------------------------------------------
*/
/******************************************************************************
* class for mapping WCF objects
******************************************************************************/
class Register {
 public $context; //RegistrationContext;
}
 
class RegisterResponse {
 public $RegisterResult;
}
 
class Acknowledge {
 public $context; //AcknowledgementContext
}
 
$char;
$duration;
$guid;
 
class RegistrationContext extends ConsumerIdentification{
 public $AddressLine1;
 public $AddressLine2;
 public $AddressLine3;
 public $AddressLine4;
 public $DateOfBirth;
 public $FamilyName;
 public $FurtherGivenName;
 public $Gender;
 public $GivenName;
 public $IsConfirmed;
 public $IsNewborn;
 public $IsUnknown;
 public $MedicareNumber;
 public $PostCode;
 public $ReferenceId;
 public $Title;
}
 
class AcknowledgementContext extends ConsumerIdentification{
 public $ReferenceId;
 public $UMRN;
}
 
class ConsumerContext{
 public $ConsumerValues; //array of ConsumerIdentification Object

}
 
class ConsumerIdentification {
 public $ApplicationIdentifier;
 public $ApplicationName;
 public $ApplicationVersion;
 public $ConsumerIdentity;
 public $CurrentApplicationIdentifier;
 public $CurrentAssemblyName;
 public $CurrentAssemblyVersion;
 public $DeviceApplicationIdentifier;
 public $DeviceIdentifier;
 public $DeviceType;
 public $Hostname;
 public $MessageHeaders;
 public $TransactionIdentifier;
}
 
class MessageEntity {
 public $Id;
 public $Ref;
}
 
class MessageHeaders {
 public $RequestAction;
 public $RequestMessageIdentifier;
 public $RequestReplyTo;
 public $RequestTo;
 public $ResponseMessageIdentifier;
}
 
class ArrayOfKeyValueOfstringstring {
 public $KeyValueOfstringstring;
}
 
class KeyValueOfstringstring {
 public $Key;
 public $Value;
}
 
class ArrayOfstring {
 public $string;
}

$Sex;
 
class ArrayOfAddress {
 public $Address;
}
 
class Address {
 public $AddressPurpose;
 public $AustralianAddress;
 public $InternationalAddress;
 public $PhysicalAddressIndicator;
 public $Status;
 public $Id;
 public $Ref;
}
 
class AustralianAddress {
 public $BuildingProperty;
 public $Country;
 public $DeliveryPoint;
 public $FlatUnit;
 public $FloorLevel;
 public $Geocode;
 public $HouseNumberList;
 public $LocationDescriptor;
 public $LotNumber;
 public $PostalDelivery;
 public $Postcode;
 public $SemiclassuredAustralianAddress;
 public $StateTerritory;
 public $Street;
 public $SuburbPlaceLocality;
 public $UnclassuredAustralianAddress;
 public $Id;
 public $Ref;
}
 
class SiteNameGroup {
 public $BuildingProperty1;
 public $BuildingProperty2;
 public $Id;
 public $Ref;
}
 
class UnitGroup {
 public $UnitNumber;
 public $UnitType;
 public $Id;
 public $Ref;
}
 
class LevelGroup {
 public $LevelNumber;
 public $LevelType;
 public $Id;
 public $Ref;
}
 
class Geocode {
 public $Containment;
 public $GeocodeFeature;
 public $GeographicDatum;
 public $HeightDatum;
 public $Latitude;
 public $Longitude;
 public $PositionalUncertainty;
 public $VerticalDatum;
 public $Id;
 public $Ref;
}
 
class ArrayOfHouseNumberGroup {
 public $HouseNumberGroup;
}
 
class HouseNumberGroup {
 public $HouseNumber;
 public $HouseNumberSuffix;
 public $Id;
 public $Ref;
}
 
class PostalDeliveryGroup {
 public $Number;
 public $Prefix;
 public $Suffix;
 public $Id;
 public $Ref;
}
 
class SemiclassuredAustralianAddress {
 public $AustralianAddressLine;
 public $Country;
 public $Postcode;
 public $StateTerritory;
 public $SuburbPlaceLocality;
 public $Id;
 public $Ref;
}
 
class StreetGroup {
 public $StreetName;
 public $StreetSuffixCode;
 public $StreetTypeCode;
 public $Id;
 public $Ref;
}
 
class InternationalAddress {
 public $Country;
 public $Geocode;
 public $InternationalAddressLine;
 public $InternationalPostcode;
 public $InternationalStateProvince;
 public $Id;
 public $Ref;
}
 
class ArrayOfCodedValue {
 public $CodedValue;
}
 
class CodedValue {
 public $CodingSystemName;
 public $CodingSystemVersion;
 public $Description;
 public $Value;
 public $Id;
 public $Ref;
}
 
class ArrayOfElectronicCommunication {
 public $ElectronicCommunication;
}
 
class ElectronicCommunication {
 public $Detail;
 public $Medium;
 public $Usage;
 public $Id;
 public $Ref;
}
 
class ArrayOfIdentifier {
 public $Identifier;
}
 
class Identifier {
 public $Designation;
 public $EndDate;
 public $IssuingOrganisationId;
 public $Name;
 public $PrimaryIdentifierIndicator;
 public $StartDate;
 public $Status;
 public $Id;
 public $Ref;
}
 
class ArrayOfName {
 public $Name;
}
 
class Name {
 public $ConditionalUseFlag;
 public $FamilyName;
 public $GivenName;
 public $NameUsageIndicator;
 public $PreferredNameIndicator;
 public $SecondAndFurtherGivenNamesList;
 public $SuffixList;
 public $TitleList;
 public $Id;
 public $Ref;
}
 
class Role {
 public $Code;
 public $Description;
 public $EndDate;
 public $StartDate;
 public $Id;
 public $Ref;
}
 
class QualifiedId {
 public $IHIRecordStatus;
 public $Id;
 public $Qualifier;
 public $Ref;
}
 
class ArrayOfLinkedRecord {
 public $LinkedRecord;
}
 
class LinkedRecord {
 public $EndDate;
 public $Identifier;
 public $Link;
 public $StartDate;
 public $Id;
 public $Ref;
}
 
class ArrayOfReligion {
 public $Religion;
}
 
class Religion {
 public $CodingSystemName;
 public $CodingSystemVersion;
 public $Description;
 public $EndDate;
 public $StartDate;
 public $Value;
 public $Id;
 public $Ref;
}
 
class ArrayOfLanguage {
 public $Language;
}
 
class Language {
 public $CodingSystemName;
 public $CodingSystemVersion;
 public $Description;
 public $IsPreferredIndicator;
 public $Value;
 public $Id;
 public $Ref;
}
 
class Occupation {
 public $OccupationList;
 public $WorkStatus;
 public $Id;
 public $Ref;
}
 
class ArrayOfOccupationItem {
 public $OccupationItem;
}
 
class OccupationItem {
 public $CodingSystemName;
 public $CodingSystemVersion;
 public $Description;
 public $EndDate;
 public $StartDate;
 public $Value;
 public $Id;
 public $Ref;
}
 
class TimeInterval {
 public $Units;
 public $Value;
 public $Id;
 public $Ref;
}
 
class ArrayOfAwareness {
 public $Awareness;
}
 
class Awareness {
 public $IsAwareIndicator;
 public $NonAwarenessReason;
 public $PersonCategory;
 public $Id;
 public $Ref;
}
 
class ArrayOfRecommendation {
 public $Recommendation;
}
 
class Recommendation {
 public $Description;
 public $Reason;
 public $Id;
 public $Ref;
}
 
class RegistrationResponse {
 public $Matches;
 public $ReferenceId;
 public $UMRN;
}
class ArrayOfClient {
 public $Client;
}
 
class Client {
 public $AdverseReactions;
 public $ClientIdentificationNotesList;
 public $ClientIdentifierList;
 public $DVACardStatus;
 public $DVANumber;
 public $FamilyHistory;
 public $Immunisations;
 public $LifeStyle;
 public $MedicareNumberList;
 public $OrganDonorConsentIndicator;
 public $PastClinicalInterventionList;
 public $PastProblemDiagnosisList;
 public $PersonalContactList;
 public $PrimaryHealthIdentifier;
 public $ProfessionalCarerList;
}

 
class Person {
 public $AddressList;
 public $Alerts;
 public $BirthOrder;
 public $BirthPlurality;
 public $CitizenshipCountryList;
 public $CommunicationMethod;
 public $CorrelatedIdentityList;
 public $CountryOfBirth;
 public $DateOfBirth;
 public $DateOfBirthAccuracyIndicator;
 public $DateOfDeath;
 public $DeceasedIndicator;
 public $ECommunicationList;
 public $Gender;
 public $IdentifierList;
 public $IndigenousType;
 public $IndividualHealthCareIdentifier;
 public $InterpreterLanguage;
 public $InterpreterRequiredIndicator;
 public $MaritalStatus;
 public $Occupation;
 public $OtherNamesList;
 public $RegisteredName;
 public $ReligionList;
 public $Sex;
 public $SpokenLanguageList;
 public $Id;
 public $Ref;
}
 
class ArrayOfCorrelatedIdentity {
 public $CorrelatedIdentity;
}
 
class CorrelatedIdentity {
 public $AddressList;
 public $CountryOfBirth;
 public $DateOfBirth;
 public $DateOfBirthAccuracyIndicator;
 public $ECommunicationList;
 public $Gender;
 public $IdentifierList;
 public $IndigenousType;
 public $MaritalStatus;
 public $OtherNamesList;
 public $PersonalContactList;
 public $ProfessionalCarerList;
 public $RegisteredName;
 public $ReligionList;
 public $Sex;
 public $SpokenLanguageList;
 public $Id;
 public $Ref;
}
 
class ArrayOfPersonalContact {
 public $PersonalContact;
}
 
class PersonalContact {
 public $ContactRole;
 public $EndDate;
 public $Relationship;
 public $StartDate;
}
 
class FamilyHistory {
 public $FamilyHistoryList;
 public $History;
 public $Id;
 public $Ref;
}
 
class ArrayOfFamilyHistoryItem {
 public $FamilyHistoryItem;
}
 
class FamilyHistoryItem {
 public $AffectedRelative;
 public $AssessedRisk;
 public $Note;
 public $ProblemDiagnosis;
 public $Id;
 public $Ref;
}
 
class AffectedRelative {
 public $AgeAtDeath;
 public $AgeAtOnset;
 public $ConditionWasCauseOfDeath;
 public $DateOfOnset;
 public $IsGeneticRelative;
 public $Relationship;
 public $SeverityOfCondition;
}
 
class Immunisation {
 public $History;
 public $ImmunisationList;
 public $Id;
 public $Ref;
}
 
class ArrayOfImmunisationItem {
 public $ImmunisationItem;
}
 
class ImmunisationItem {
 public $AdministeredBy;
 public $AdministrationRoute;
 public $DateReported;
 public $DateTimeAdministered;
 public $ImmunisationURI;
 public $InformationProvidedBy;
 public $Note;
 public $RelatedAdverseReactionList;
 public $RelatedCaseList;
 public $ReporterIdentification;
 public $VaccineBatchNumber;
 public $VaccineBrandName;
 public $VaccineInjectionSite;
 public $VaccineSequenceNumber;
 public $VaccineStatus;
 public $VaccineTarget;
 public $Id;
 public $Ref;
}
 
class LifeStyle {
 public $AlcoholConsumption;
 public $Nutrition;
 public $PhysicalActivity;
 public $SubstanceUse;
 public $TobaccoSmoking;
 public $Id;
 public $Ref;
}
 
class AlcoholConsumption {
 public $Duration;
 public $DurationSinceQuit;
 public $ExcessiveFrequency;
 public $Frequency;
 public $Note;
 public $QuitAge;
 public $RecommendationList;
 public $StandardDrinksPerDay;
 public $StartAge;
 public $Status;
 public $Id;
 public $Ref;
}
 
class Nutrition {
 public $BMI;
 public $DietaryRequirementList;
 public $Height;
 public $Note;
 public $RecommendationList;
 public $Status;
 public $UnexplainedWeightLossIndicator;
 public $WaistMeasurement;
 public $Weight;
 public $Id;
 public $Ref;
}
 
class PhysicalActivity {
 public $Note;
 public $PhysicalActivityList;
 public $RecommendationList;
 public $Status;
 public $Id;
 public $Ref;
}
 
class ArrayOfPhysicalActivityItem {
 public $PhysicalActivityItem;
}
 
class PhysicalActivityItem {
 public $Description;
 public $Duration;
 public $Frequency;
 public $Intensity;
 public $Id;
 public $Ref;
}
 
class SubstanceUse {
 public $History;
 public $Note;
 public $RecommendationList;
 public $Status;
 public $SubstanceUseList;
 public $Id;
 public $Ref;
}
 
class ArrayOfSubstanceUseItem {
 public $SubstanceUseItem;
}
 
class SubstanceUseItem {
 public $ConsumptionFrequency;
 public $ConsumptionMethod;
 public $ConsumptionRate;
 public $Duration;
 public $DurationSinceQuit;
 public $QuitAge;
 public $StartAge;
 public $Status;
 public $SubstanceOfConcern;
 public $Id;
 public $Ref;
}
 
class TobaccoSmoking {
 public $Note;
 public $RecommendationList;
 public $Status;
 public $TobaccoProductList;
 public $Id;
 public $Ref;
}
 
class ArrayOfTobaccoProduct {
 public $TobaccoProduct;
}
 
class TobaccoProduct {
 public $Duration;
 public $DurationSinceQuit;
 public $Frequency;
 public $QuitAge;
 public $StartAge;
 public $TobaccoProductItem;
 public $Id;
 public $Ref;
}
 
class ArrayOfMedicareNumber {
 public $MedicareNumber;
}
 
class MedicareNumber {
 public $EndDate;
 public $IRN;
 public $Number;
 public $Id;
 public $Ref;
}
 
$AddressPurpose;
$AddressCountry;
$AddressUnit;
$AddressLevel;
$AddressState;
$AddressStreetSuffix;
$AddressStreet;
$AddressRecordStatus;
$AlertActiveStatus;
$AlertCertainty;
$InformationProvidedBy;
$AlertType;
$HistoryStatus;
$BirthPlurality;
$CommunicationMethod;
$DateOfBirthAccuracy;
$ElectronicCommunicationMedium;
$ElectronicCommunicationUsage;
$IdentifierStatus;
$Indigenous;
$MaritalStatus;
$stNameConditionalUsage;
$NameUsageIndicator;
$PreferredNameIndicator;
 
class ArrayOfNameSuffix {
 public $NameSuffix;
}
 
$NameSuffix;
 
class ArrayOfNameTitle {
 public $NameTitle;
}
 
$NameTitle;
 
$ContactRole;
 
$Relationship;
 
$IHIRecordStatus;
 
$Link;
 
$EstablishmentNameUsageIndicator;
 
$EstablishmentType;
$AdverseReactionAgentCategory;
 
$AdverseReactionCertainty;
$AdverseReactionOutcome;
$AdverseReactionPresence;
 
$AdverseReactionDetailsSeverity;
$AdverseReactionStatus;
 
$AdverseReactionType;
 
$DVACardStatus;
$TimeIntervalUnits;
 
$SeverityOfCondition;
 
$FamilyHistoryAssessedRisk;
 
$ProblemDiagnosisActiveStatus;
 
$ProblemDiagnosisProgressStatus;
 
$ProblemDiagnosisType;
 
$VaccineStatus;
 
$AlcoholConsumptionStandardDrinksPerDay;
 
$AlcoholConsumptionStatus;

$NutritionStatus;
 
$PhysicalActivityItemDuration;
 
$PhysicalActivityItemFrequency;
 
$PhysicalActivityItemIntensity;
 
$PhysicalActivityStatus;
 
$SubstanceUseStatus;
 
$SubstanceUseConsumptionFrequency;
 
$SubstanceUseConsumptionMethod;
 
$SubstanceUseItemSubstanceOfConcern;
 
$TobaccoSmokingStatus;
 
$TobaccoProductItem;
 
$YesNoNotStated;
 
$ClinicalInterventionOutcome;
 
$ClinicalInterventionType;
 
class Alert {
 public $AlertList;
 public $History;
 public $Id;
 public $Ref;
}
 
class ArrayOfAlertItem {
 public $AlertItem;
}
 
class AlertItem {
 public $ActiveStatus;
 public $Certainty;
 public $Code;
 public $DateReported;
 public $DateReviewed;
 public $EndDate;
 public $InformationProvidedBy;
 public $Note;
 public $ReporterIdentification;
 public $StartDate;
 public $Type;
 public $Id;
 public $Ref;
}
 
class HospitalTeam {
 public $Division;
 public $Specialty;
 public $Team;
 public $Id;
 public $Ref;
}
 
class AdverseReaction {
 public $AdverseReactionList;
 public $History;
 public $Id;
 public $Ref;
}
 
class ArrayOfAdverseReactionItem {
 public $AdverseReactionItem;
}
 
class AdverseReactionItem {
 public $Agent;
 public $AgentCategory;
 public $Certainty;
 public $DateReported;
 public $DateReviewed;
 public $DateTimeOfExposure;
 public $EndDate;
 public $InformationProvidedBy;
 public $Note;
 public $Outcome;
 public $Presence;
 public $ReactionDetailsList;
 public $ReporterIdentification;
 public $Status;
 public $Type;
 public $Id;
 public $Ref;
}
 
class ArrayOfAdverseReactionDetails {
 public $AdverseReactionDetails;
}
 
class AdverseReactionDetails {
 public $DateTimeCeased;
 public $DateTimeStarted;
 public $Description;
 public $FindingSiteList;
 public $Severity;
 public $Id;
 public $Ref;
}
 
class ArrayOfAdverseReactionFindingSite {
 public $AdverseReactionFindingSite;
}
 
class AdverseReactionFindingSite {
 public $DateTimeIdentified;
 public $Description;
 public $Qualifier;
 public $Id;
 public $Ref;
}
 
class ProblemDiagnosis {
 public $ActiveStatus;
 public $Code;
 public $EndDateTime;
 public $Note;
 public $ProblemDiagnosisAwarenessList;
 public $ProgressStatus;
 public $RelatedProblemList;
 public $ReportedDateTime;
 public $ReporterIdentification;
 public $StartDateTime;
 public $Type;
 public $Id;
 public $Ref;
}
 
class ArrayOfClinicalIntervention {
 public $ClinicalIntervention;
}
 
class ClinicalIntervention {
 public $ClinicalInterventionAwareness;
 public $Code;
 public $EndDateTime;
 public $Note;
 public $Outcome;
 public $RelatedClinicalIntervention;
 public $RelatedProblem;
 public $ReportedDateTime;
 public $ReporterIdentification;
 public $StartDateTime;
 public $Type;
 public $Id;
 public $Ref;
}
 
class ArrayOfProblemDiagnosis {
 public $ProblemDiagnosis;
}
 
class ArrayOfProfessionalCarer {
 public $ProfessionalCarer;
}
 
class ProfessionalCarer {
 public $ContextRole;
 public $HealthProviderRole;
 public $IsPrimaryIndicator;
 public $Id;
 public $Ref;
}
 
class HealthProviderRole {
 public $AddressList;
 public $ECommunicationList;
 public $EndDate;
 public $FieldOfPractice;
 public $HealthProvider;
 public $HospitalTeam;
 public $IdentifierList;
 public $Role;
 public $StartDate;
 public $Id;
 public $Ref;
}
 
class FieldOfPractice {
 public $Code;
 public $CodingSystemName;
 public $CodingSystemVersion;
 public $Description;
 public $EndDate;
 public $StartDate;
 public $Id;
 public $Ref;
}
 
class HealthProvider {
 public $Individual;
 public $Organisation;
 public $Id;
 public $Ref;
}
 
class HealthProviderIndividual {
 public $HPI_AddressList;
 public $HPI_ECommunicationList;
 public $HPI_FieldOfPracticeList;
 public $HPI_IdentifierList;
 public $HPI_IndividualHealthCareProviderIdentifier;
}
 
class ArrayOfFieldOfPractice {
 public $FieldOfPractice;
}
 
class HealthProviderOrganisation {
 public $Establishment;
 public $HPO_AddressList;
 public $HPO_ECommunicationList;
 public $HPO_IdentifierList;
 public $HPO_OrganisationHealthCareProviderIdentifier;
 public $OrganisationType;
 public $Id;
 public $Ref;
}
 
class Establishment {
 public $AddressList;
 public $Code;
 public $ECommunicationList;
 public $IdentifierList;
 public $LinkedEstablishmentList;
 public $Name;
 public $Type;
 public $Id;
 public $Ref;
}
 
class ArrayOfEstablishmentName {
 public $EstablishmentName;
}
 
class EstablishmentName {
 public $EndDate;
 public $Name;
 public $StartDate;
 public $UsageIndicator;
 public $Id;
 public $Ref;
}
 
class ServiceFault {
 public $ServiceFaultItemList;
 public $Id;
 public $Ref;
}
 
class ArrayOfServiceFaultItem {
 public $ServiceFaultItem;
}
 
class ServiceFaultItem {
 public $Exception;
 public $Message;
 public $ServiceFaultType;
 public $Id;
 public $Ref;
}
 
$ServiceFaultType;

/******************************************************************************
* class mapping array for soapclient
******************************************************************************/

$classmapping = array( 'Register' =>    'Register',
                       'RegisterResponse' => 'RegisterResponse',
		       'Acknowledge' => 'Acknowledge',
                       'RegistrationContext' => 'RegistrationContext',
                       'AcknowledgementContext' => 'AcknowledgementContext',
                       'ConsumerContext' => 'ConsumerContext',
                       'ConsumerIdentification' => 'ConsumerIdentification',
                       'MessageEntity' => 'MessageEntity',
                       'MessageHeaders' => 'MessageHeaders',
                       'ArrayOfKeyValueOfstringstring' => 'ArrayOfKeyValueOfstringstring',
                       'KeyValueOfstringstring' => 'KeyValueOfstringstring',
                       'ArrayOfstring' => 'ArrayOfstring',
                       'ArrayOfAddress' => 'ArrayOfAddress',
                       'Address' => 'Address',
                       'AustralianAddress' => 'AustralianAddress',
                       'SiteNameGroup' => 'SiteNameGroup',
                       'UnitGroup' => 'UnitGroup',
                       'LevelGroup' => 'LevelGroup',
                       'Geocode' => 'Geocode',
                       'ArrayOfHouseNumberGroup' => 'ArrayOfHouseNumberGroup',
                       'HouseNumberGroup' => 'HouseNumberGroup',
                       'PostalDeliveryGroup' => 'PostalDeliveryGroup',
                       'SemiclassuredAustralianAddress' => 'SemiclassuredAustralianAddress',
                       'StreetGroup' => 'StreetGroup',
                       'InternationalAddress' => 'InternationalAddress',
                       'ArrayOfCodedValue' => 'ArrayOfCodedValue',
                       'CodedValue' => 'CodedValue',
                       'ArrayOfElectronicCommunication' => 'ArrayOfElectronicCommunication',
                       'ElectronicCommunication' => 'ElectronicCommunication',
                       'ArrayOfIdentifier' => 'ArrayOfIdentifier',
                       'Identifier' => 'Identifier',
                       'ArrayOfName' => 'ArrayOfName',
                       'Name' => 'Name',
                       'Role' => 'Role',
                       'QualifiedId' => 'QualifiedId',
                       'ArrayOfLinkedRecord' => 'ArrayOfLinkedRecord',
                       'LinkedRecord' => 'LinkedRecord',
                       'ArrayOfReligion' => 'ArrayOfReligion',
                       'Religion' => 'Religion',
                       'ArrayOfLanguage' => 'ArrayOfLanguage',
                       'Language' => 'Language',
                       'Occupation' => 'Occupation',
                       'ArrayOfOccupationItem' => 'ArrayOfOccupationItem',
                       'OccupationItem' => 'OccupationItem',
                       'TimeInterval' => 'TimeInterval',
                       'ArrayOfAwareness' => 'ArrayOfAwareness',
                       'Awareness' => 'Awareness',
                       'ArrayOfRecommendation' => 'ArrayOfRecommendation',
                       'Recommendation' => 'Recommendation',
                       'RegistrationResponse' => 'RegistrationResponse',
                       'ArrayOfClient' => 'ArrayOfClient',
                       'Client' => 'Client',
                       'Person' => 'Person',
                       'ArrayOfCorrelatedIdentity' => 'ArrayOfCorrelatedIdentity',
                       'CorrelatedIdentity' => 'CorrelatedIdentity',
                       'ArrayOfPersonalContact' => 'ArrayOfPersonalContact',
                       'PersonalContact' => 'PersonalContact',
                       'FamilyHistory' => 'FamilyHistory',
                       'ArrayOfFamilyHistoryItem' => 'ArrayOfFamilyHistoryItem',
                       'FamilyHistoryItem' => 'FamilyHistoryItem',
                       'AffectedRelative' => 'AffectedRelative',
                       'Immunisation' => 'Immunisation',
                       'ArrayOfImmunisationItem' => 'ArrayOfImmunisationItem',
                       'ImmunisationItem' => 'ImmunisationItem',
                       'LifeStyle' => 'LifeStyle',
                       'AlcoholConsumption' => 'AlcoholConsumption',
                       'Nutrition' => 'Nutrition',
                       'PhysicalActivity' => 'PhysicalActivity',
                       'ArrayOfPhysicalActivityItem' => 'ArrayOfPhysicalActivityItem',
                       'PhysicalActivityItem' => 'PhysicalActivityItem',
                       'SubstanceUse' => 'SubstanceUse',
                       'ArrayOfSubstanceUseItem' => 'ArrayOfSubstanceUseItem',
                       'SubstanceUseItem' => 'SubstanceUseItem',
                       'TobaccoSmoking' => 'TobaccoSmoking',
                       'ArrayOfTobaccoProduct' => 'ArrayOfTobaccoProduct',
                       'TobaccoProduct' => 'TobaccoProduct',
                       'ArrayOfMedicareNumber' => 'ArrayOfMedicareNumber',
                       'MedicareNumber' => 'MedicareNumber',
                       'ArrayOfNameSuffix' => 'ArrayOfNameSuffix',
                       'ArrayOfNameTitle' => 'ArrayOfNameTitle',
                       'Alert' => 'Alert',
                       'ArrayOfAlertItem' => 'ArrayOfAlertItem',
                       'AlertItem' => 'AlertItem',
                       'HospitalTeam' => 'HospitalTeam',
                       'AdverseReaction' => 'AdverseReaction',
                       'ArrayOfAdverseReactionItem' => 'ArrayOfAdverseReactionItem',
                       'AdverseReactionItem' => 'AdverseReactionItem',
                       'ArrayOfAdverseReactionDetails' => 'ArrayOfAdverseReactionDetails',
                       'AdverseReactionDetails' => 'AdverseReactionDetails',
                       'ArrayOfAdverseReactionFindingSite' => 'ArrayOfAdverseReactionFindingSite',
                       'AdverseReactionFindingSite' => 'AdverseReactionFindingSite',
                       'ProblemDiagnosis' => 'ProblemDiagnosis',
                       'ArrayOfClinicalIntervention' => 'ArrayOfClinicalIntervention',
                       'ClinicalIntervention' => 'ClinicalIntervention',
                       'ClinicalIntervention' => 'ClinicalIntervention',
                       'ArrayOfProblemDiagnosis' => 'ArrayOfProblemDiagnosis',
                       'ArrayOfProfessionalCarer' => 'ArrayOfProfessionalCarer',
                       'ProfessionalCarer' => 'ProfessionalCarer',
                       'HealthProviderRole' => 'HealthProviderRole',
                       'FieldOfPractice' => 'FieldOfPractice',
                       'HealthProvider' => 'HealthProvider',
                       'HealthProviderIndividual' => 'HealthProviderIndividual',
                       'ArrayOfFieldOfPractice' => 'ArrayOfFieldOfPractice',
                       'HealthProviderOrganisation' => 'HealthProviderOrganisation',
                       'Establishment' => 'Establishment',
                       'ArrayOfEstablishmentName' => 'ArrayOfEstablishmentName',
                       'EstablishmentName' => 'EstablishmentName',
                       'ServiceFault' => 'ServiceFault',
                       'ArrayOfServiceFaultItem' => 'ArrayOfServiceFaultItem',
                       'ServiceFaultItem' => 'ServiceFaultItem');

/**************************************************************
* needed for WCF authentication
*
* header for SOAP communication that passes username and password 
***************************************************************/
class WsseAuthHeader extends SoapHeader{
  private $wss_ns = 'http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-secext-1.0.xsd';
    		
  function __construct($user, $pass, $ns = null) {    
    if ($ns){        
      $this->wss_ns = $ns;    
    }    

    $auth = new stdClass(); 
    $auth->Username = new SoapVar($user, XSD_STRING, NULL, $this->wss_ns, NULL, $this->wss_ns);     
    $auth->Password = new SoapVar($pass, XSD_STRING, NULL, $this->wss_ns, NULL, $this->wss_ns);    
    $username_token = new stdClass();    
    $username_token->UsernameToken = new SoapVar($auth, SOAP_ENC_OBJECT, NULL, 
                                                 $this->wss_ns, 'UsernameToken', $this->wss_ns);     
    $security_sv = new SoapVar(        
                                new SoapVar($username_token, SOAP_ENC_OBJECT, NULL, 
                                $this->wss_ns, 'UsernameToken', $this->wss_ns),        
                                SOAP_ENC_OBJECT, NULL, $this->wss_ns, 'Security', $this->wss_ns);    

    parent::__construct($this->wss_ns, 'Security', $security_sv, true);
  }
}
?>
