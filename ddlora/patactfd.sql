create table patactaf
(
  ptacclss    varchar2(3) default ' ' not null,
  ptacaccm    varchar2(1) default ' ' not null,
  ptaccare    varchar2(2) default ' ' not null,
  ptacmedi    number(2,0) default 0 not null,
  ptacspar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patacta1 primary key( 
ptacclss,
ptacaccm,
ptaccare)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
