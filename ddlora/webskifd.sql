create table webskiaf
(
  wbskusid    varchar2(10) default ' ' not null,
  wbskkwrd    varchar2(80) default ' ' not null,
  wbskspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webskia1 primary key( 
wbskusid,
wbskkwrd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webskia2 on webskiaf
(
wbskkwrd,
wbskusid
)
  tablespace pas_indx; 
