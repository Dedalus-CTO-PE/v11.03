create table allaefaf
(
  alaevisn    varchar2(8) default ' ' not null,
  alaemryn    varchar2(1) default ' ' not null,
  alaeetyn    varchar2(1) default ' ' not null,
  alaersyn    varchar2(1) default ' ' not null,
  alaeotyn    varchar2(1) default ' ' not null,
  alaeotds    varchar2(30) default ' ' not null,
  alaepdrs    varchar2(9) default ' ' not null,
  alaespar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allaefa1 primary key( 
alaevisn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
