create table outosfaf
(
  otoshosp    varchar2(3) default ' ' not null,
  otossite    varchar2(6) default ' ' not null,
  otossess    varchar2(6) default ' ' not null,
  otosclid    varchar2(6) default ' ' not null,
  otosdate    varchar2(8) default ' ' not null,
  otostime    varchar2(5) default ' ' not null,
  otosctyp    varchar2(6) default ' ' not null,
  otosspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outosfa1 primary key( 
otoshosp,
otossite,
otossess,
otosclid,
otosdate,
otostime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outosfa2 on outosfaf
(
otoshosp,
otosctyp,
otossess,
otosclid,
otosdate,
otostime,
otossite
)
  tablespace pas_indx; 
create unique index outosfa3 on outosfaf
(
otosdate,
otoshosp,
otossite,
otossess,
otosclid,
otostime
)
  tablespace pas_indx; 
