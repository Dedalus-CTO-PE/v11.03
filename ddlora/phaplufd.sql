create table phapluaf
(
  pldisp      varchar2(15) default ' ' not null,
  plunit      varchar2(17) default ' ' not null,
  plfiller    varchar2(7) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint phaplua1 primary key( 
pldisp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
