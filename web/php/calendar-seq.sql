DROP SEQUENCE ICS_EventStatus_SEQ;
CREATE SEQUENCE ICS_EventStatus_SEQ
START WITH 500000
INCREMENT BY 1
NOMAXVALUE;

CREATE or REPLACE TRIGGER ICS_EventStatus_I1
BEFORE INSERT ON ICS_EventStatus
FOR EACH ROW
declare
  max_id number;
  cur_seq number;
BEGIN
IF :new.EventStatusID IS NULL THEN
    SELECT ICS_EventStatus_SEQ.NEXTVAL INTO :new.EventStatusID FROM DUAL;
ELSE
    SELECT GREATEST(NVL(MAX(EventStatusID),0), :new.EventStatusID) into max_id from ICS_EventStatus;
    SELECT ICS_EventStatus_SEQ.NEXTVAL into cur_seq from dual;
    WHILE cur_seq < max_id
    LOOP
        SELECT ICS_EventStatus_SEQ.NEXTVAL into cur_seq from dual;
    END LOOP;
END IF;
END;
/

DROP SEQUENCE ICS_EventTypes_SEQ;
CREATE SEQUENCE ICS_EventTypes_SEQ
START WITH 500000
INCREMENT BY 1
NOMAXVALUE;

CREATE or REPLACE TRIGGER ICS_EventTypes_I1
BEFORE INSERT ON ICS_EventTypes
FOR EACH ROW
declare
  max_id number;
  cur_seq number;
BEGIN
IF :new.EventTypeID IS NULL THEN
    SELECT ICS_EventTypes_SEQ.NEXTVAL INTO :new.EventTypeID FROM DUAL;
ELSE
    SELECT GREATEST(NVL(MAX(EventTypeID),0), :new.EventTypeID) into max_id from ICS_EventTypes;
    SELECT ICS_EventTypes_SEQ.NEXTVAL into cur_seq from dual;
    WHILE cur_seq < max_id
    LOOP
        SELECT ICS_EventTypes_SEQ.NEXTVAL into cur_seq from dual;
    END LOOP;
END IF;
END;
/

DROP SEQUENCE ICS_Events_SEQ;
CREATE SEQUENCE ICS_Events_SEQ
START WITH 500000
INCREMENT BY 1
NOMAXVALUE;

CREATE or REPLACE TRIGGER ICS_Events_I1
BEFORE INSERT ON ICS_Events
FOR EACH ROW
declare
  max_id number;
  cur_seq number;
BEGIN
IF :new.EventID IS NULL THEN
    SELECT ICS_Events_SEQ.NEXTVAL INTO :new.EventID FROM DUAL;
ELSE
    SELECT GREATEST(NVL(MAX(EventID),0), :new.EventID) into max_id from ICS_Events;
    SELECT ICS_Events_SEQ.NEXTVAL into cur_seq from dual;
    WHILE cur_seq < max_id
    LOOP
        SELECT ICS_Events_SEQ.NEXTVAL into cur_seq from dual;
    END LOOP;
END IF;
END;
/

DROP SEQUENCE ICS_EventRequests_SEQ;
CREATE SEQUENCE ICS_EventRequests_SEQ
START WITH 500000
INCREMENT BY 1
NOMAXVALUE;

CREATE or REPLACE TRIGGER ICS_EventRequests_I1
BEFORE INSERT ON ICS_EventRequests
FOR EACH ROW
declare
  max_id number;
  cur_seq number;
BEGIN
IF :new.EventRequestID IS NULL THEN
    SELECT ICS_EventRequests_SEQ.NEXTVAL INTO :new.EventRequestID FROM DUAL;
ELSE
    SELECT GREATEST(NVL(MAX(EventRequestID),0), :new.EventRequestID) into max_id from ICS_EventRequests;
    SELECT ICS_EventRequests_SEQ.NEXTVAL into cur_seq from dual;
    WHILE cur_seq < max_id
    LOOP
        SELECT ICS_EventRequests_SEQ.NEXTVAL into cur_seq from dual;
    END LOOP;
END IF;
END;
/
