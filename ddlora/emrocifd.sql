create table emrociaf
(
  emocvisn    varchar2(8) default ' ' not null,
  emoccntr    varchar2(2) default ' ' not null,
  emoctype    varchar2(3) default ' ' not null,
  emocordr    varchar2(1) default ' ' not null,
  emocctod    varchar2(8) default ' ' not null,
  emocctot    varchar2(8) default ' ' not null,
  emocpret    varchar2(1) default ' ' not null,
  emocctrd    varchar2(8) default ' ' not null,
  emocctrt    varchar2(8) default ' ' not null,
  emocrsfl    varchar2(1) default ' ' not null,
  emocctsd    varchar2(8) default ' ' not null,
  emocctst    varchar2(8) default ' ' not null,
  emocpccd    varchar2(3) default ' ' not null,
  emoccuid    varchar2(10) default ' ' not null,
  emoccdat    varchar2(8) default ' ' not null,
  emocctim    varchar2(8) default ' ' not null,
  emocuuid    varchar2(10) default ' ' not null,
  emocudat    varchar2(8) default ' ' not null,
  emocutim    varchar2(8) default ' ' not null,
  emocspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrocia1 primary key( 
emocvisn,
emoccntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
