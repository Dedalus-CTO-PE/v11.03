create table patnobef
(
  nbward      varchar2(3) default ' ' not null,
  dnbadmno    varchar2(8) default ' ' not null,
  dnbplur     varchar2(2) default ' ' not null,
  nbroom      varchar2(3) default ' ' not null,
  nbspare     varchar2(6) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patnobe1 primary key( 
nbward,
dnbadmno,
dnbplur)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patnobe2 on patnobef
(
nbward,
nbroom,
dnbadmno,
dnbplur
)
  tablespace pas_indx; 
create unique index patnobe3 on patnobef
(
dnbadmno,
nbward,
dnbplur
)
  tablespace pas_indx; 
