create table patmbfaf
(
  ptmbclam    varchar2(3) default ' ' not null,
  ptmbhfnd    varchar2(6) default ' ' not null,
  ptmbatyp    varchar2(3) default ' ' not null,
  ptmbcntr    varchar2(6) default ' ' not null,
  ptmbusid    varchar2(10) default ' ' not null,
  ptmbspar    varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patmbfa1 primary key( 
ptmbclam,
ptmbhfnd,
ptmbatyp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patmbfa2 on patmbfaf
(
ptmbhfnd,
ptmbclam,
ptmbatyp
)
  tablespace pas_indx; 
create unique index patmbfa3 on patmbfaf
(
ptmbatyp,
ptmbclam,
ptmbhfnd
)
  tablespace pas_indx; 
create unique index patmbfa4 on patmbfaf
(
ptmbcntr,
ptmbclam,
ptmbhfnd,
ptmbatyp
)
  tablespace pas_indx; 
