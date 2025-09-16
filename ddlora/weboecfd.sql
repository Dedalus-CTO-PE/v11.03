create table weboecaf
(
  wbocvisn    varchar2(8) default ' ' not null,
  wboccntr    varchar2(3) default ' ' not null,
  wbocstat    varchar2(2) default ' ' not null,
  wbocurno    varchar2(8) default ' ' not null,
  wbocarid    varchar2(20) default ' ' not null,
  wboctrid    varchar2(24) default ' ' not null,
  wbocrqdt    varchar2(8) default ' ' not null,
  wbocetyp    varchar2(2) default ' ' not null,
  wbocerrc    varchar2(4) default ' ' not null,
  wbocerrd    varchar2(500) default ' ' not null,
  wboccdte    varchar2(8) default ' ' not null,
  wbocctim    varchar2(8) default ' ' not null,
  wbocudte    varchar2(8) default ' ' not null,
  wbocutim    varchar2(8) default ' ' not null,
  wbochosp    varchar2(3) default ' ' not null,
  wboceleg    varchar2(8) default ' ' not null,
  wbocmsid    varchar2(36) default ' ' not null,
  wbocspar    varchar2(101) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint weboeca1 primary key( 
wbocvisn,
wboccntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index weboeca2 on weboecaf
(
wbocstat,
wbochosp,
wbocvisn,
wboccntr
)
  tablespace pas_indx; 
create unique index weboeca3 on weboecaf
(
wboctrid,
wbocvisn,
wboccntr
)
  tablespace pas_indx; 
create unique index weboeca4 on weboecaf
(
wbocmsid,
wbocvisn,
wboccntr
)
  tablespace pas_indx; 
create unique index weboeca5 on weboecaf
(
wboceleg,
wbocvisn,
wboccntr
)
  tablespace pas_indx; 
create unique index weboeca6 on weboecaf
(
wbochosp,
wbocvisn,
wboccntr
)
  tablespace pas_indx; 
