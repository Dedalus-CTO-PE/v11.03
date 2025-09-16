create table obsecoaf
(
  obeceaid    varchar2(20) default ' ' not null,
  obeccpid    varchar2(4) default ' ' not null,
  obecindt    varchar2(8) default ' ' not null,
  obecctyp    varchar2(3) default ' ' not null,
  obecintm    varchar2(8) default ' ' not null,
  obecinus    varchar2(10) default ' ' not null,
  obecfext    varchar2(6) default ' ' not null,
  obecslid    varchar2(4) default ' ' not null,
  obecurno    varchar2(8) default ' ' not null,
  obecspar    varchar2(200) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint obsecoa1 primary key( 
obeceaid,
obeccpid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index obsecoa2 on obsecoaf
(
obecurno,
obeceaid,
obeccpid
)
  tablespace pas_indx; 
