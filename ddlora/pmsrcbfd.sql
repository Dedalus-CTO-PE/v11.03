create table pmsrcbaf
(
  pmrcbatc    varchar2(8) default ' ' not null,
  pmrcadmn    varchar2(8) default ' ' not null,
  pmrcprev    varchar2(8) default ' ' not null,
  pmrcspar    varchar2(92) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsrcba1 primary key( 
pmrcbatc,
pmrcadmn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsrcba2 on pmsrcbaf
(
pmrcadmn,
pmrcbatc
)
  tablespace pas_indx; 
