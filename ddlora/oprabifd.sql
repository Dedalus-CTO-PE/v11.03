create table oprabiaf
(
  opaiuniq    varchar2(10) default ' ' not null,
  opaiantb    varchar2(3) default ' ' not null,
  opaicntr    varchar2(2) default ' ' not null,
  opaipant    varchar2(3) default ' ' not null,
  opaitgiv    varchar2(8) default ' ' not null,
  opaitunk    varchar2(3) default ' ' not null,
  opaiacnt    varchar2(3) default ' ' not null,
  opaicomm    varchar2(200) default ' ' not null,
  opaicdat    varchar2(8) default ' ' not null,
  opaictim    varchar2(8) default ' ' not null,
  opaicuid    varchar2(10) default ' ' not null,
  opaiudat    varchar2(8) default ' ' not null,
  opaiutim    varchar2(8) default ' ' not null,
  opaiuuid    varchar2(8) default ' ' not null,
  opaidelt    varchar2(1) default ' ' not null,
  opaiudel    varchar2(10) default ' ' not null,
  opaispar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprabia1 primary key( 
opaiuniq,
opaiantb,
opaicntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index oprabia2 on oprabiaf
(
opaiuniq,
opaicdat,
opaictim,
opaiantb,
opaicntr
)
  tablespace pas_indx; 
