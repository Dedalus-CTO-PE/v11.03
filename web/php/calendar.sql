DROP TABLE ICS_EventStatus;
CREATE TABLE ICS_EventStatus (
  EventStatusID NUMBER(10) NOT NULL,
  Description VARCHAR2(50) DEFAULT NULL,
  Active VARCHAR2(1) DEFAULT NULL,
CONSTRAINT ICS_EventStatus#0 PRIMARY KEY (EventStatusId)
) tablespace TABLESPACE_DATA enable primary key using index     tablespace TABLESPACE_INDX; 
CREATE INDEX ICS_EventStatus#1 ON ICS_EventStatus (DESCRIPTION) tablespace TABLESPACE_INDX;

DROP TABLE ICS_EventTypes;
CREATE TABLE ICS_EventTypes (
  EventTypeID NUMBER(10) NOT NULL,
  Description VARCHAR2(50) DEFAULT NULL,
  Active VARCHAR2(1) DEFAULT NULL,
  CONSTRAINT ICS_EventTypes#0 PRIMARY KEY (EventTypeId)
) tablespace TABLESPACE_DATA enable primary key using index   tablespace TABLESPACE_INDX;
CREATE INDEX ICS_EventTypes#1 ON ICS_EventTypes (DESCRIPTION) tablespace TABLESPACE_INDX;

DROP TABLE ICS_Events;
CREATE TABLE ICS_Events (
  EventID NUMBER(10) NOT NULL,
  dtStart DATE NOT NULL,
  dtEnd DATE NOT NULL,
  Summary VARCHAR2(2048) DEFAULT NULL,
  Description VARCHAR2(50) DEFAULT NULL,
  Location VARCHAR2(50) DEFAULT NULL,
  LocationCode VARCHAR2(10) DEFAULT NULL,
  OrganiserID VARCHAR2(20) DEFAULT NULL,
  Organisername VARCHAR2(50) DEFAULT NULL,
  EventTypeID NUMBER(10) DEFAULT NULL,
  EventStatusID NUMBER(10) DEFAULT NULL,
  CreatedByUser VARCHAR2(20) DEFAULT NULL,
  CreatedByUserName VARCHAR2(50) DEFAULT NULL,
  CreationDateTime DATE NOT NULL,
  LastUpdatedDateTime DATE NOT NULL,
  LastUpdatedByUser VARCHAR2(20) DEFAULT NULL,
  LastUpdatedByUserName VARCHAR2(50) DEFAULT NULL,
  AllocatedToHCP VARCHAR2(10) DEFAULT NULL,
  AllocatedToName VARCHAR2(50) DEFAULT NULL,
  AllocatedComments VARCHAR2(1024) DEFAULT NULL,
  CONSTRAINT ICS_EVENTS#0 PRIMARY KEY (EventID)
) tablespace TABLESPACE_DATA enable primary key using index tablespace TABLESPACE_INDX;
CREATE INDEX ICS_EVENTS#1 ON ICS_EVENTS (dtStart)           tablespace TABLESPACE_INDX;
CREATE INDEX ICS_EVENTS#2 ON ICS_EVENTS (EventTypeID)       tablespace TABLESPACE_INDX;

DROP TABLE ICS_EventRequests;
CREATE TABLE ICS_EventRequests (
  EventRequestID NUMBER(10) NOT NULL,
  EventID NUMBER(10) NOT NULL,
  RequestedDateTime DATE DEFAULT NULL,
  RequestedByUser VARCHAR2(20) DEFAULT NULL,
  RequestedByUserName VARCHAR2(50) DEFAULT NULL,
  RequestComments VARCHAR2(1024) DEFAULT NULL,
  ProcessComments VARCHAR2(1024) DEFAULT NULL,
  LastUpdatedDateTime DATE NOT NULL,
  LastUpdatedByUser VARCHAR2(20) DEFAULT NULL,
  LastUpdatedByUserName VARCHAR2(50) DEFAULT NULL,
  Outcome VARCHAR2(1) DEFAULT NULL,
  CONSTRAINT ICS_EventRequests#0 PRIMARY KEY (EventRequestId)
) tablespace TABLESPACE_DATA enable primary key using index             tablespace TABLESPACE_INDX;
CREATE INDEX ICS_EventRequests#1 ON ICS_EventRequests (EVENTID)         tablespace TABLESPACE_INDX;
CREATE INDEX ICS_EventRequests#2 ON ICS_EventRequests (REQUESTEDBYUSER) tablespace TABLESPACE_INDX;

